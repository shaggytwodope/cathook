/*
 * AntiAim.cpp
 *
 *  Created on: Oct 26, 2016
 *      Author: nullifiedcat
 */

#include "AntiAim.h"

#include "../common.h"
#include "../sdk.h"

namespace hacks { namespace shared { namespace antiaim {

CatVar enabled(CV_SWITCH, "aa_enabled", "0", "Anti-Aim", "Master AntiAim switch");
CatVar yaw(CV_FLOAT, "aa_yaw", "0.0", "Yaw", "Static yaw (left/right)", 360.0);
CatVar pitch(CV_FLOAT, "aa_pitch", "-89.0", "Pitch", "Static pitch (up/down)", -89.0, 89.0);
CatEnum yaw_mode_enum({ "KEEP", "STATIC", "JITTER", "BIGRANDOM", "RANDOM", "SPIN", "OFFSETKEEP" });
CatEnum pitch_mode_enum({ "KEEP", "STATIC", "JITTER", "RANDOM", "FLIP", "FAKEFLIP", "FAKEUP", "FAKEDOWN", "UP", "DOWN" });
CatVar yaw_mode(yaw_mode_enum, "aa_yaw_mode", "3", "Yaw mode", "Yaw mode");
CatVar pitch_mode(pitch_mode_enum, "aa_pitch_mode", "1", "Pitch mode", "Pitch mode");
CatVar roll(CV_FLOAT, "aa_roll", "0", "Roll", "Roll angle (viewangles.z)", -180, 180);
CatVar no_clamping(CV_SWITCH, "aa_no_clamp", "0", "Don't clamp angles", "Use this with STATIC mode for unclamped manual angles");
CatVar spin(CV_FLOAT, "aa_spin", "10.0", "Spin speed", "Spin speed (degrees/second)");

float cur_yaw = 0.0f;
int safe_space = 0;

void SetSafeSpace(int safespace) {
	if (safespace > safe_space) safe_space = safespace;
}

bool ShouldAA(CUserCmd* cmd) {
	if (!enabled) return false;
	if (cmd->buttons & IN_USE) return false;
	if (cmd->buttons & IN_ATTACK) {
		if (!(TF2 && g_pLocalPlayer->weapon()->m_iClassID == g_pClassID->CTFCompoundBow)) {
			if (CanShoot()) return false;
		}
	}
	if ((cmd->buttons & IN_ATTACK2) && g_pLocalPlayer->weapon()->m_iClassID == g_pClassID->CTFLunchBox) return false;
	switch (GetWeaponMode(g_pLocalPlayer->entity)) {
	case weapon_projectile:
		if (g_pLocalPlayer->weapon()->m_iClassID == g_pClassID->CTFCompoundBow) {
			if (!(cmd->buttons & IN_ATTACK)) {
				if (g_pLocalPlayer->bAttackLastTick) SetSafeSpace(4);
			}
			break;
		}
		/* no break */
	case weapon_melee:
	case weapon_throwable:
		if ((cmd->buttons & (IN_ATTACK | IN_ATTACK2)) || g_pLocalPlayer->bAttackLastTick) {
			SetSafeSpace(4);
			return false;
		}
	}
	if (safe_space) {
		safe_space--;
		if (safe_space < 0) safe_space = 0;
		return false;
	}
	return true;
}

void ProcessUserCmd(CUserCmd* cmd) {
	if (!ShouldAA(cmd)) return;
	float& p = cmd->viewangles.x;
	float& y = cmd->viewangles.y;
	static bool flip = false;
	bool clamp = !no_clamping;
	switch ((int)yaw_mode) {
	case 1: // FIXED
		y = (float)yaw;
		break;
	case 2: // JITTER
		if (flip) y += 90;
		else y -= 90;
		break;
	case 3: // BIGRANDOM
		y = RandFloatRange(-65536.0f, 65536.0f);
		clamp = false;
		break;
	case 4: // RANDOM
		y = RandFloatRange(-180.0f, 180.0f);
		break;
	case 5: // SPIN
		cur_yaw += (float)spin;
		if (cur_yaw > 180) cur_yaw = -180;
		if (cur_yaw < 180) cur_yaw = 180;
		y = cur_yaw;
		break;
	case 6: // OFFSETKEEP
		y += (float)yaw;
		break;
	}
	switch ((int)pitch_mode) {
	case 1:
		p = (float)pitch;
		break;
	case 2:
		if (flip) p += 30.0f;
		else p -= 30.0f;
		break;
	case 3:
		p = RandFloatRange(-89.0f, 89.0f);
		break;
	case 4:
		p = flip ? 89.0f : -89.0f;
		break;
	case 5:
		p = flip ? 271.0f : -271.0f;
		clamp = false;
		break;
	case 6:
		p = 271.0f;
		clamp = false;
		break;
	case 7:
		p = -271.0f;
		clamp = false;
		break;
	case 8:
		p = -89.0f;
		break;
	case 9:
		p = 89.0f;
		break;
	}
	flip = !flip;
	if (clamp) fClampAngle(cmd->viewangles);
	if (roll) cmd->viewangles.z = (float)roll;
	g_pLocalPlayer->bUseSilentAngles = true;
}

}}}
