/*
 * Noisemaker.cpp
 *
 *  Created on: Feb 2, 2017
 *      Author: nullifiedcat
 */

#include "Noisemaker.h"

#include "../copypasted/CSignature.h"
#include "../common.h"
#include "../sdk.h"

namespace hacks { namespace tf2 { namespace noisemaker {

extern CatVar enabled(CV_SWITCH, "noisemaker", "0", "Noisemaker spam", "DOES NOT WORK. Causes SEGV when enabled.");

void CreateMove() {
	/*static uintptr_t sig = gSignatures.GetClientSignature("8B 06 89 34 24 FF 90 DC 02 00 00 84 C0 74 E2 8B 06 89 34 24 FF 90 D4 01 00 00 83 F8 01 7E D2 C7 04 24 20 00 00 00 E8 ? ? ? ? C7 44 24 04 ? ? ? ? 89 C6 89 04 24 E8 ? ? ? ? A1 ? ? ? ? 8B 10 89 04 24 89 74 24 04 FF 92 00 02 00 00");
	typedef KeyValues*(KeyValues__operator_new_t)(size_t);
	typedef void(KeyValues__KeyValues_t)(KeyValues*, const char*);
	static KeyValues__operator_new_t* KeyValues__operator_new = (KeyValues__operator_new_t*)(*(uintptr_t*)(sig + 39) + (sig + 39) + 4);
	static KeyValues__KeyValues_t* KeyValues__KeyValues = (KeyValues__KeyValues_t*)(*(uintptr_t*)(sig + 57) + (sig + 57) + 4);
	static unsigned engine = (unsigned)(sig + 62);*/
	if (enabled) {
		//AddCenterString(colors::red, "no noisemaker spam for you noob");
		/*//logging::Info("0x%08x 0x%08x", KeyValues__operator_new, KeyValues__KeyValues);
		logging::Info("Creating!");
		KeyValues* kv = KeyValues__operator_new(32);
		//logging::Info("0x%08x", kv);
		KeyValues__KeyValues(kv, "use_action_slot_item_server");
		//logging::Info("0x%08x", kv);
		//logging::Info("%s", kv->GetName());
		//static KeyValues* kv = new KeyValues("use_action_slot_item_server");
		logging::Info("Sending!");
		//engineClient->ServerCmdKeyValues(kv);
		typedef void(Send)(unsigned, KeyValues*);
		logging::Info("Calling 0x%08x 0x%08x", engine, kv);
		(*reinterpret_cast<Send*>(engine + 512u))(engine, kv);
		logging::Info("Sent!");*/
		if (g_GlobalVars->framecount % 100 == 0) {
			KeyValues* kv = new KeyValues("use_action_slot_item_server");
			kv->m_iValue = 0x10000;
			g_IEngine->ServerCmdKeyValues(kv);
		}
	}
	return;
}

}}}
