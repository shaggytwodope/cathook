/*
 * classid.cpp
 *
 *  Created on: Feb 1, 2017
 *      Author: nullifiedcat
 */

#include "classid.h"

IClassID* g_pClassID = 0;

void ClassIDTF2::Init() {
	IClassID::Init();
	CTETFParticleEffect = 178;
	CTETFExplosion = 177;
	CTETFBlood = 176;
	CTFTankBoss = 304;
	CTFBaseBoss = 182;
	CBossAlpha = 0;
	CZombie = 339;
	CMerasmusDancer = 83;
	CMerasmus = 82;
	CHeadlessHatman = 73;
	CEyeballBoss = 48;
	CTFWeaponSapper = 322;
	CTFWeaponBuilder = 314;
	C_TFWeaponBuilder = 0;
	CTFTeam = 306;
	CTFTauntProp = 305;
	CTFProjectile_Rocket = 254;
	CTFProjectile_Flare = 249;
	CTFProjectile_EnergyBall = 247;
	CTFProjectile_GrapplingHook = 250;
	CTFProjectile_HealingBolt = 251;
	CTFProjectile_Arrow = 245;
	CTFPlayerResource = 243;
	CTFPlayer = 241;
	CTFRagdoll = 273;
	CTEPlayerAnimEvent = 164;
	CTFPasstimeLogic = 234;
	CPasstimeBall = 93;
	CTFObjectiveResource = 229;
	CTFGlow = 209;
	CTEFireBullets = 151;
	CTFBuffBanner = 0;
	CTFAmmoPack = 180;
	CObjectTeleporter = 89;
	CObjectSentrygun = 88;
	CTFProjectile_SentryRocket = 255;
	CObjectSapper = 87;
	CObjectCartDispenser = 85;
	CObjectDispenser = 86;
	CMonsterResource = 84;
	CFuncRespawnRoomVisualizer = 64;
	CFuncRespawnRoom = 63;
	CFuncPasstimeGoal = 61;
	CFuncForceField = 57;
	CCaptureZone = 28;
	CCurrencyPack = 31;
	CBaseObject = 10;
	CTFBotHintEngineerNest = 190;
	CBotNPCMinion = 0;
	CBotNPC = 0;
	CRagdollPropAttached = 110;
	CRagdollProp = 109;
	NextBotCombatCharacter = 342;
	CWaterBullet = 332;
	CFuncMonitor = 59;
	CWorld = 338;
	CWaterLODControl = 333;
	CVGuiScreen = 330;
	CPropJeep = 0;
	CPropVehicleChoreoGeneric = 0;
	CTEWorldDecal = 179;
	CTESpriteSpray = 173;
	CTESprite = 172;
	CTESparks = 171;
	CTESmoke = 170;
	CTEShowLine = 168;
	CTEProjectedDecal = 166;
	CTEPlayerDecal = 165;
	CTEPhysicsProp = 163;
	CTEParticleSystem = 162;
	CTEMuzzleFlash = 161;
	CTELargeFunnel = 158;
	CTEKillPlayerAttachments = 157;
	CTEImpact = 156;
	CTEGlowSprite = 155;
	CTEShatterSurface = 167;
	CTEFootprintDecal = 153;
	CTEFizz = 152;
	CTEExplosion = 150;
	CTEEnergySplash = 149;
	CTEEffectDispatch = 148;
	CTEDynamicLight = 147;
	CTEDecal = 145;
	CTEClientProjectile = 144;
	CTEBubbleTrail = 143;
	CTEBubbles = 142;
	CTEBSPDecal = 141;
	CTEBreakModel = 140;
	CTEBloodStream = 139;
	CTEBloodSprite = 138;
	CTEBeamSpline = 137;
	CTEBeamRingPoint = 136;
	CTEBeamRing = 135;
	CTEBeamPoints = 134;
	CTEBeamLaser = 133;
	CTEBeamFollow = 132;
	CTEBeamEnts = 131;
	CTEBeamEntPoint = 130;
	CTEBaseBeam = 129;
	CTEArmorRicochet = 128;
	CTEMetalSparks = 160;
	CTest_ProxyToggle_Networkable = 174;
	CTestTraceline = 175;
	CTesla = 169;
	CTeamTrainWatcher = 127;
	CBaseTeamObjectiveResource = 16;
	CTeam = 124;
	CSun = 123;
	CSteamJet = 122;
	CParticlePerformanceMonitor = 91;
	CSpotlightEnd = 118;
	DustTrail = 340;
	CFireTrail = 50;
	SporeTrail = 347;
	SporeExplosion = 346;
	RocketTrail = 344;
	SmokeTrail = 345;
	CSmokeStack = 116;
	CSlideshowDisplay = 115;
	CShadowControl = 114;
	CSceneEntity = 113;
	CRopeKeyframe = 112;
	CRagdollManager = 108;
	CPropVehicleDriveable = 107;
	CPhysicsPropMultiplayer = 98;
	CPhysBoxMultiplayer = 96;
	CBasePropDoor = 15;
	CDynamicProp = 33;
	CPointCommentaryNode = 104;
	CPointCamera = 103;
	CPlayerResource = 102;
	CPlasma = 100;
	CPhysMagnet = 99;
	CPhysicsProp = 97;
	CPhysBox = 95;
	CParticleSystem = 92;
	ParticleSmokeGrenade = 343;
	CParticleFire = 90;
	MovieExplosion = 341;
	CMaterialModifyControl = 81;
	CLightGlow = 79;
	CInfoOverlayAccessor = 77;
	CTEGaussExplosion = 154;
	CFuncTrackTrain = 67;
	CFuncSmokeVolume = 66;
	CFuncRotating = 65;
	CFuncReflectiveGlass = 62;
	CFuncOccluder = 60;
	CFunc_LOD = 54;
	CTEDust = 146;
	CFunc_Dust = 53;
	CFuncConveyor = 56;
	CBreakableSurface = 25;
	CFuncAreaPortalWindow = 55;
	CFish = 51;
	CEntityFlame = 38;
	CFireSmoke = 49;
	CEnvTonemapController = 46;
	CEnvScreenEffect = 44;
	CEnvScreenOverlay = 45;
	CEnvProjectedTexture = 42;
	CEnvParticleScript = 41;
	CFogController = 52;
	CEntityParticleTrail = 39;
	CEntityDissolve = 37;
	CEnvQuadraticBeam = 43;
	CEmbers = 36;
	CEnvWind = 47;
	CPrecipitation = 106;
	CDynamicLight = 32;
	CColorCorrectionVolume = 30;
	CColorCorrection = 29;
	CBreakableProp = 24;
	CBaseTempEntity = 17;
	CBasePlayer = 13;
	CBaseFlex = 8;
	CBaseEntity = 7;
	CBaseDoor = 6;
	CBaseCombatCharacter = 4;
	CBaseAnimatingOverlay = 2;
	CBoneFollower = 20;
	CBaseAnimating = 1;
	CInfoLightingRelative = 76;
	CAI_BaseNPC = 0;
	CWeaponIFMSteadyCam = 336;
	CWeaponIFMBaseCamera = 335;
	CWeaponIFMBase = 334;
	CTFWearableLevelableItem = 326;
	CTFWearableDemoShield = 324;
	CTFWearableRobotArm = 327;
	CTFRobotArm = 277;
	CTFWrench = 329;
	CTFProjectile_ThrowableBreadMonster = 269;
	CTFProjectile_ThrowableBrick = 270;
	CTFProjectile_ThrowableRepel = 271;
	CTFProjectile_Throwable = 268;
	CTFThrowable = 307;
	CTFSyringeGun = 303;
	CTFKatana = 219;
	CTFSword = 302;
	CSniperDot = 117;
	CTFSniperRifleClassic = 296;
	CTFSniperRifleDecap = 297;
	CTFSniperRifle = 295;
	CTFChargedSMG = 194;
	CTFSMG = 294;
	CTFShovel = 293;
	CTFShotgunBuildingRescue = 292;
	CTFPEPBrawlerBlaster = 235;
	CTFSodaPopper = 298;
	CTFShotgun_Revenge = 290;
	CTFScatterGun = 286;
	CTFShotgun_Pyro = 289;
	CTFShotgun_HWG = 288;
	CTFShotgun_Soldier = 291;
	CTFShotgun = 287;
	CTFCrossbow = 198;
	CTFRocketLauncher_Mortar = 285;
	CTFRocketLauncher_AirStrike = 283;
	CTFRocketLauncher_DirectHit = 284;
	CTFRocketLauncher = 282;
	CTFRevolver = 276;
	CTFDRGPomson = 199;
	CTFRaygun = 274;
	CTFPistol_ScoutSecondary = 240;
	CTFPistol_ScoutPrimary = 239;
	CTFPistol_Scout = 238;
	CTFPistol = 237;
	CTFPipebombLauncher = 236;
	CTFWeaponPDA_Spy = 319;
	CTFWeaponPDA_Engineer_Destroy = 318;
	CTFWeaponPDA_Engineer_Build = 317;
	CTFWeaponPDAExpansion_Teleporter = 321;
	CTFWeaponPDAExpansion_Dispenser = 320;
	CTFWeaponPDA = 316;
	CPasstimeGun = 94;
	CTFParticleCannon = 233;
	CTFParachute_Secondary = 232;
	CTFParachute_Primary = 231;
	CTFParachute = 230;
	CTFMinigun = 228;
	CTFMedigunShield = 225;
	CWeaponMedigun = 337;
	CTFMechanicalArm = 224;
	CTFLunchBox_Drink = 223;
	CTFLunchBox = 222;
	CLaserDot = 78;
	CTFLaserPointer = 221;
	CTFKnife = 220;
	CTFProjectile_Cleaver = 246;
	CTFProjectile_JarMilk = 253;
	CTFProjectile_Jar = 252;
	CTFCleaver = 195;
	CTFJarMilk = 218;
	CTFJar = 217;
	CTFWeaponInvis = 315;
	CTFGrenadePipebombProjectile = 212;
	CTFCannon = 193;
	CTFGrenadeLauncher = 211;
	CTFGrapplingHook = 210;
	CTFFlareGun_Revenge = 206;
	CTFFlareGun = 205;
	CTFFlameRocket = 203;
	CTFFlameThrower = 204;
	CTFFists = 202;
	CTFFireAxe = 201;
	CTFCompoundBow = 197;
	CTFClub = 196;
	CTFBuffItem = 192;
	CTFStickBomb = 300;
	CTFBottle = 191;
	CTFBonesaw = 189;
	CTFBall_Ornament = 181;
	CTFStunBall = 301;
	CTFBat_Giftwrap = 187;
	CTFBat_Wood = 188;
	CTFBat_Fish = 186;
	CTFBat = 185;
	CTFBaseRocket = 184;
	CTFWeaponBaseMerasmusGrenade = 313;
	CTFWeaponBaseMelee = 312;
	CTFWeaponBaseGun = 311;
	CTFWeaponBaseGrenadeProj = 310;
	CTFWeaponBase = 309;
	CTFViewModel = 308;
	CRobotDispenser = 111;
	CTFRobotDestruction_Robot = 278;
	CTFReviveMarker = 275;
	CTFPumpkinBomb = 272;
	CTFProjectile_EnergyRing = 248;
	CTFBaseProjectile = 183;
	CBaseObjectUpgrade = 11;
	CMannVsMachineStats = 80;
	CTFRobotDestructionLogic = 281;
	CTFRobotDestruction_RobotGroup = 279;
	CTFRobotDestruction_RobotSpawn = 280;
	CTFPlayerDestructionLogic = 242;
	CPlayerDestructionDispenser = 101;
	CTFMinigameLogic = 227;
	CTFHalloweenMinigame_FallingPlatforms = 214;
	CTFHalloweenMinigame = 213;
	CTFMiniGame = 226;
	CTFWearableVM = 328;
	CTFWearable = 323;
	CTFPowerupBottle = 244;
	CTFItem = 216;
	CHalloweenSoulPack = 71;
	CTFGenericBomb = 208;
	CBonusRoundLogic = 23;
	CTFGameRulesProxy = 207;
	CTFDroppedWeapon = 200;
	CTFProjectile_SpellKartBats = 258;
	CTFProjectile_SpellKartOrb = 259;
	CTFHellZap = 215;
	CTFProjectile_SpellLightningOrb = 260;
	CTFProjectile_SpellTransposeTeleport = 267;
	CTFProjectile_SpellMeteorShower = 261;
	CTFProjectile_SpellSpawnBoss = 264;
	CTFProjectile_SpellMirv = 262;
	CTFProjectile_SpellPumpkin = 263;
	CTFProjectile_SpellSpawnHorde = 265;
	CTFProjectile_SpellSpawnZombie = 266;
	CTFProjectile_SpellBats = 256;
	CTFProjectile_SpellFireball = 257;
	CTFSpellBook = 299;
	CHightower_TeleportVortex = 74;
	CTeleportVortex = 159;
	CHalloweenGiftPickup = 69;
	CBonusDuckPickup = 21;
	CHalloweenPickup = 70;
	CCaptureFlagReturnIcon = 27;
	CCaptureFlag = 26;
	CBonusPack = 22;
	CHandleTest = 72;
	CTeamRoundTimer = 126;
	CTeamplayRoundBasedRulesProxy = 125;
	CSpriteTrail = 121;
	CSpriteOriented = 120;
	CSprite = 119;
	CPoseController = 105;
	CGameRulesProxy = 68;
	CInfoLadderDismount = 75;
	CFuncLadder = 58;
	CEnvDetailController = 40;
	CTFWearableItem = 325;
	CEconWearable = 35;
	CBaseAttributableItem = 3;
	CEconEntity = 34;
	CBeam = 19;
	CBaseViewModel = 18;
	CBaseProjectile = 14;
	CBaseParticleEntity = 12;
	CBaseGrenade = 9;
	CBaseCombatWeapon = 5;
	CVoteController = 331;

	C_Player = CTFPlayer;
}

void ClassIDTF2C::Init() {
	IClassID::Init();
	CTETFParticleEffect = 155;
	CTETFExplosion = 154;
	CTETFBlood = 153;
	CTFWeaponBuilder = 214;
	CTFVehicle = 208;
	CTFTeam = 205;
	CTFProjectile_Rocket = 189;
	CTFPlayerResource = 187;
	CTFPlayer = 186;
	CTFRagdoll = 191;
	CTEPlayerAnimEvent = 141;
	CTFObjectiveResource = 182;
	CTEFireBullets = 129;
	CTFDroppedWeapon = 167;
	CTFBaseDMPowerup = 158;
	CTFAmmoPack = 157;
	CObjectTeleporter = 71;
	CObjectSentrygun = 70;
	CTFProjectile_SentryRocket = 190;
	CObjectSapper = 69;
	CObjectCartDispenser = 67;
	CObjectDispenser = 68;
	CFuncRespawnRoomVisualizer = 56;
	CFuncRespawnRoom = 55;
	CCaptureZone = 24;
	CWeaponSpawner = 227;
	CBaseObject = 9;
	CRagdollPropAttached = 89;
	CRagdollProp = 88;
	CWaterBullet = 224;
	CFuncMonitor = 52;
	CWorld = 228;
	CWaterLODControl = 225;
	CVGuiScreen = 222;
	CPropJeep = 0;
	CPropVehicleChoreoGeneric = 0;
	CTEWorldDecal = 156;
	CTESpriteSpray = 150;
	CTESprite = 149;
	CTESparks = 148;
	CTESmoke = 147;
	CTEShowLine = 145;
	CTEProjectedDecal = 143;
	CTEPlayerDecal = 142;
	CTEPhysicsProp = 140;
	CTEParticleSystem = 139;
	CTEMuzzleFlash = 138;
	CTELargeFunnel = 136;
	CTEKillPlayerAttachments = 135;
	CTEImpact = 134;
	CTEGlowSprite = 133;
	CTEShatterSurface = 144;
	CTEFootprintDecal = 131;
	CTEFizz = 130;
	CTEExplosion = 128;
	CTEEnergySplash = 127;
	CTEEffectDispatch = 126;
	CTEDynamicLight = 125;
	CTEDecal = 123;
	CTEClientProjectile = 122;
	CTEBubbleTrail = 121;
	CTEBubbles = 120;
	CTEBSPDecal = 119;
	CTEBreakModel = 118;
	CTEBloodStream = 117;
	CTEBloodSprite = 116;
	CTEBeamSpline = 115;
	CTEBeamRingPoint = 114;
	CTEBeamRing = 113;
	CTEBeamPoints = 112;
	CTEBeamLaser = 111;
	CTEBeamFollow = 110;
	CTEBeamEnts = 109;
	CTEBeamEntPoint = 108;
	CTEBaseBeam = 107;
	CTEArmorRicochet = 106;
	CTEMetalSparks = 137;
	CTest_ProxyToggle_Networkable = 151;
	CTestTraceline = 152;
	CTesla = 146;
	CTeamTrainWatcher = 105;
	CBaseTeamObjectiveResource = 15;
	CTeam = 102;
	CSun = 101;
	CSteamJet = 100;
	CParticlePerformanceMonitor = 73;
	CSpotlightEnd = 96;
	DustTrail = 229;
	CFireTrail = 44;
	SporeTrail = 235;
	SporeExplosion = 234;
	RocketTrail = 232;
	SmokeTrail = 233;
	CSmokeStack = 94;
	CSlideshowDisplay = 93;
	CShadowControl = 92;
	CSceneEntity = 91;
	CRopeKeyframe = 90;
	CRagdollManager = 87;
	CPropVehicleDriveable = 86;
	CPhysicsPropMultiplayer = 78;
	CPhysBoxMultiplayer = 76;
	CBasePropDoor = 14;
	CDynamicProp = 28;
	CPointCommentaryNode = 83;
	CPointCamera = 82;
	CPlayerResource = 81;
	CPlasma = 80;
	CPhysMagnet = 79;
	CPhysicsProp = 77;
	CPhysBox = 75;
	CParticleSystem = 74;
	ParticleSmokeGrenade = 231;
	CParticleFire = 72;
	MovieExplosion = 230;
	CMaterialModifyControl = 66;
	CLightGlow = 65;
	CInfoOverlayAccessor = 64;
	CTEGaussExplosion = 132;
	CFuncTrackTrain = 59;
	CFuncSmokeVolume = 58;
	CFuncRotating = 57;
	CFuncReflectiveGlass = 54;
	CFuncOccluder = 53;
	CFunc_LOD = 48;
	CTEDust = 124;
	CFunc_Dust = 47;
	CFuncConveyor = 50;
	CBreakableSurface = 21;
	CFuncAreaPortalWindow = 49;
	CFish = 45;
	CEntityFlame = 33;
	CFireSmoke = 43;
	CEnvTonemapController = 41;
	CEnvScreenEffect = 39;
	CEnvScreenOverlay = 40;
	CEnvProjectedTexture = 37;
	CEnvParticleScript = 36;
	CFogController = 46;
	CEntityParticleTrail = 34;
	CEntityDissolve = 32;
	CEnvQuadraticBeam = 38;
	CEmbers = 31;
	CEnvWind = 42;
	CPrecipitation = 85;
	CDynamicLight = 27;
	CColorCorrectionVolume = 26;
	CColorCorrection = 25;
	CBreakableProp = 20;
	CBaseTempEntity = 16;
	CBasePlayer = 12;
	CBaseFlex = 7;
	CBaseEntity = 6;
	CBaseDoor = 5;
	CBaseCombatCharacter = 3;
	CBaseAnimatingOverlay = 2;
	CBoneFollower = 19;
	CBaseAnimating = 1;
	CInfoLightingRelative = 63;
	CAI_BaseNPC = 0;
	CTFWearable = 220;
	CTFWrench = 221;
	CTFUmbrella = 207;
	CTFTranq = 206;
	CTFSyringeGun = 204;
	CSniperDot = 95;
	CTFSniperRifle = 203;
	CTFSMG_Primary = 202;
	CTFSMG = 201;
	CTFShovel = 200;
	CTFScatterGun = 195;
	CTFShotgun_Pyro = 198;
	CTFShotgun_HWG = 197;
	CTFShotgun_Soldier = 199;
	CTFShotgun = 196;
	CTFRocketLauncher = 194;
	CTFRevolver_Secondary = 193;
	CTFRevolver = 192;
	CTFPistol_Scout = 185;
	CTFPistol = 184;
	CTFPipebombLauncher = 183;
	CTFWeaponPDA_Spy = 219;
	CTFWeaponPDA_Engineer_Destroy = 218;
	CTFWeaponPDA_Engineer_Build = 217;
	CTFWeaponPDA = 216;
	CTFNailgun = 181;
	CTFMinigun = 180;
	CWeaponMedigun = 226;
	CTFKnife = 179;
	CTFWeaponInvis = 215;
	CTFHunterRifle = 177;
	CTFHeavyArtillery = 176;
	CTFHammerfists = 175;
	CTFGrenadePipebombProjectile = 174;
	CTFGrenadeLauncher = 173;
	CTFFlareGun = 171;
	CTFFlameThrower = 170;
	CTFFists = 169;
	CTFFireAxe = 168;
	CTFCrowbar = 166;
	CTFClub = 165;
	CTFChainsaw = 164;
	CTFBottle = 163;
	CTFBonesaw = 162;
	CTFBat = 161;
	CTFBaseRocket = 160;
	CTFWeaponBaseMelee = 213;
	CTFWeaponBaseGun = 212;
	CTFWeaponBaseGrenadeProj = 211;
	CTFWeaponBase = 210;
	CTFViewModel = 209;
	CTFProjectile_Flare = 188;
	CTFBaseProjectile = 159;
	CBaseObjectUpgrade = 10;
	CTFItem = 178;
	CTFGameRulesProxy = 172;
	CCaptureFlagReturnIcon = 23;
	CCaptureFlag = 22;
	CHandleTest = 61;
	CTeamRoundTimer = 104;
	CTeamplayRoundBasedRulesProxy = 103;
	CSpriteTrail = 99;
	CSpriteOriented = 98;
	CSprite = 97;
	CPoseController = 84;
	CGameRulesProxy = 60;
	CInfoLadderDismount = 62;
	CFuncLadder = 51;
	CEnvDetailController = 35;
	CEconWearable = 30;
	CEconEntity = 29;
	CBeam = 18;
	CBaseViewModel = 17;
	CBaseProjectile = 13;
	CBaseParticleEntity = 11;
	CBaseGrenade = 8;
	CBaseCombatWeapon = 4;
	CVoteController = 223;
	C_Player = CTFPlayer;
}

void IClassID::Init() {
	CTETFParticleEffect = -1;
	CTETFExplosion = -1;
	CTETFBlood = -1;
	CTFWeaponBuilder = -1;
	CTFVehicle = -1;
	CTFTeam = -1;
	CTFProjectile_Rocket = -1;
	CTFPlayerResource = -1;
	CTFPlayer = -1;
	CTFRagdoll = -1;
	CTEPlayerAnimEvent = -1;
	CTFObjectiveResource = -1;
	CTEFireBullets = -1;
	CTFDroppedWeapon = -1;
	CTFBaseDMPowerup = -1;
	CTFAmmoPack = -1;
	CObjectTeleporter = -1;
	CObjectSentrygun = -1;
	CTFProjectile_SentryRocket = -1;
	CObjectSapper = -1;
	CObjectCartDispenser = -1;
	CObjectDispenser = -1;
	CFuncRespawnRoomVisualizer = -1;
	CFuncRespawnRoom = -1;
	CCaptureZone = -1;
	CWeaponSpawner = -1;
	CBaseObject = -1;
	CRagdollPropAttached = -1;
	CRagdollProp = -1;
	CWaterBullet = -1;
	CFuncMonitor = -1;
	CWorld = -1;
	CWaterLODControl = -1;
	CVGuiScreen = -1;
	CPropJeep = -1;
	CPropVehicleChoreoGeneric = -1;
	CTEWorldDecal = -1;
	CTESpriteSpray = -1;
	CTESprite = -1;
	CTESparks = -1;
	CTESmoke = -1;
	CTEShowLine = -1;
	CTEProjectedDecal = -1;
	CTEPlayerDecal = -1;
	CTEPhysicsProp = -1;
	CTEParticleSystem = -1;
	CTEMuzzleFlash = -1;
	CTELargeFunnel = -1;
	CTEKillPlayerAttachments = -1;
	CTEImpact = -1;
	CTEGlowSprite = -1;
	CTEShatterSurface = -1;
	CTEFootprintDecal = -1;
	CTEFizz = -1;
	CTEExplosion = -1;
	CTEEnergySplash = -1;
	CTEEffectDispatch = -1;
	CTEDynamicLight = -1;
	CTEDecal = -1;
	CTEClientProjectile = -1;
	CTEBubbleTrail = -1;
	CTEBubbles = -1;
	CTEBSPDecal = -1;
	CTEBreakModel = -1;
	CTEBloodStream = -1;
	CTEBloodSprite = -1;
	CTEBeamSpline = -1;
	CTEBeamRingPoint = -1;
	CTEBeamRing = -1;
	CTEBeamPoints = -1;
	CTEBeamLaser = -1;
	CTEBeamFollow = -1;
	CTEBeamEnts = -1;
	CTEBeamEntPoint = -1;
	CTEBaseBeam = -1;
	CTEArmorRicochet = -1;
	CTEMetalSparks = -1;
	CTest_ProxyToggle_Networkable = -1;
	CTestTraceline = -1;
	CTesla = -1;
	CTeamTrainWatcher = -1;
	CBaseTeamObjectiveResource = -1;
	CTeam = -1;
	CSun = -1;
	CSteamJet = -1;
	CParticlePerformanceMonitor = -1;
	CSpotlightEnd = -1;
	DustTrail = -1;
	CFireTrail = -1;
	SporeTrail = -1;
	SporeExplosion = -1;
	RocketTrail = -1;
	SmokeTrail = -1;
	CSmokeStack = -1;
	CSlideshowDisplay = -1;
	CShadowControl = -1;
	CSceneEntity = -1;
	CRopeKeyframe = -1;
	CRagdollManager = -1;
	CPropVehicleDriveable = -1;
	CPhysicsPropMultiplayer = -1;
	CPhysBoxMultiplayer = -1;
	CBasePropDoor = -1;
	CDynamicProp = -1;
	CPointCommentaryNode = -1;
	CPointCamera = -1;
	CPlayerResource = -1;
	CPlasma = -1;
	CPhysMagnet = -1;
	CPhysicsProp = -1;
	CPhysBox = -1;
	CParticleSystem = -1;
	ParticleSmokeGrenade = -1;
	CParticleFire = -1;
	MovieExplosion = -1;
	CMaterialModifyControl = -1;
	CLightGlow = -1;
	CInfoOverlayAccessor = -1;
	CTEGaussExplosion = -1;
	CFuncTrackTrain = -1;
	CFuncSmokeVolume = -1;
	CFuncRotating = -1;
	CFuncReflectiveGlass = -1;
	CFuncOccluder = -1;
	CFunc_LOD = -1;
	CTEDust = -1;
	CFunc_Dust = -1;
	CFuncConveyor = -1;
	CBreakableSurface = -1;
	CFuncAreaPortalWindow = -1;
	CFish = -1;
	CEntityFlame = -1;
	CFireSmoke = -1;
	CEnvTonemapController = -1;
	CEnvScreenEffect = -1;
	CEnvScreenOverlay = -1;
	CEnvProjectedTexture = -1;
	CEnvParticleScript = -1;
	CFogController = -1;
	CEntityParticleTrail = -1;
	CEntityDissolve = -1;
	CEnvQuadraticBeam = -1;
	CEmbers = -1;
	CEnvWind = -1;
	CPrecipitation = -1;
	CDynamicLight = -1;
	CColorCorrectionVolume = -1;
	CColorCorrection = -1;
	CBreakableProp = -1;
	CBaseTempEntity = -1;
	CBasePlayer = -1;
	CBaseFlex = -1;
	CBaseEntity = -1;
	CBaseDoor = -1;
	CBaseCombatCharacter = -1;
	CBaseAnimatingOverlay = -1;
	CBoneFollower = -1;
	CBaseAnimating = -1;
	CInfoLightingRelative = -1;
	CAI_BaseNPC = -1;
	CTFWearable = -1;
	CTFWrench = -1;
	CTFUmbrella = -1;
	CTFTranq = -1;
	CTFSyringeGun = -1;
	CSniperDot = -1;
	CTFSniperRifle = -1;
	CTFSMG_Primary = -1;
	CTFSMG = -1;
	CTFShovel = -1;
	CTFScatterGun = -1;
	CTFShotgun_Pyro = -1;
	CTFShotgun_HWG = -1;
	CTFShotgun_Soldier = -1;
	CTFShotgun = -1;
	CTFRocketLauncher = -1;
	CTFRevolver_Secondary = -1;
	CTFRevolver = -1;
	CTFPistol_Scout = -1;
	CTFPistol = -1;
	CTFPipebombLauncher = -1;
	CTFWeaponPDA_Spy = -1;
	CTFWeaponPDA_Engineer_Destroy = -1;
	CTFWeaponPDA_Engineer_Build = -1;
	CTFWeaponPDA = -1;
	CTFNailgun = -1;
	CTFMinigun = -1;
	CWeaponMedigun = -1;
	CTFKnife = -1;
	CTFWeaponInvis = -1;
	CTFHunterRifle = -1;
	CTFHeavyArtillery = -1;
	CTFHammerfists = -1;
	CTFGrenadePipebombProjectile = -1;
	CTFGrenadeLauncher = -1;
	CTFFlareGun = -1;
	CTFFlameThrower = -1;
	CTFFists = -1;
	CTFFireAxe = -1;
	CTFCrowbar = -1;
	CTFClub = -1;
	CTFChainsaw = -1;
	CTFBottle = -1;
	CTFBonesaw = -1;
	CTFBat = -1;
	CTFBaseRocket = -1;
	CTFWeaponBaseMelee = -1;
	CTFWeaponBaseGun = -1;
	CTFWeaponBaseGrenadeProj = -1;
	CTFWeaponBase = -1;
	CTFViewModel = -1;
	CTFProjectile_Flare = -1;
	CTFBaseProjectile = -1;
	CBaseObjectUpgrade = -1;
	CTFItem = -1;
	CTFGameRulesProxy = -1;
	CCaptureFlagReturnIcon = -1;
	CCaptureFlag = -1;
	CHandleTest = -1;
	CTeamRoundTimer = -1;
	CTeamplayRoundBasedRulesProxy = -1;
	CSpriteTrail = -1;
	CSpriteOriented = -1;
	CSprite = -1;
	CPoseController = -1;
	CGameRulesProxy = -1;
	CInfoLadderDismount = -1;
	CFuncLadder = -1;
	CEnvDetailController = -1;
	CEconWearable = -1;
	CEconEntity = -1;
	CBeam = -1;
	CBaseViewModel = -1;
	CBaseProjectile = -1;
	CBaseParticleEntity = -1;
	CBaseGrenade = -1;
	CBaseCombatWeapon = -1;
	CVoteController = -1;
	CTFTankBoss = -1;
	CTFBaseBoss = -1;
	CBossAlpha = -1;
	CZombie = -1;
	CMerasmusDancer = -1;
	CMerasmus = -1;
	CHeadlessHatman = -1;
	CEyeballBoss = -1;
	CTFWeaponSapper = -1;
	C_TFWeaponBuilder = -1;
	CTFTauntProp = -1;
	CTFProjectile_EnergyBall = -1;
	CTFProjectile_GrapplingHook = -1;
	CTFProjectile_HealingBolt = -1;
	CTFProjectile_Arrow = -1;
	CTFPasstimeLogic = -1;
	CPasstimeBall = -1;
	CTFGlow = -1;
	CTFBuffBanner = -1;
	CMonsterResource = -1;
	CFuncPasstimeGoal = -1;
	CFuncForceField = -1;
	CCurrencyPack = -1;
	CTFBotHintEngineerNest = -1;
	CBotNPCMinion = -1;
	CBotNPC = -1;
	NextBotCombatCharacter = -1;
	CWeaponIFMSteadyCam = -1;
	CWeaponIFMBaseCamera = -1;
	CWeaponIFMBase = -1;
	CTFWearableLevelableItem = -1;
	CTFWearableDemoShield = -1;
	CTFWearableRobotArm = -1;
	CTFRobotArm = -1;
	CTFProjectile_ThrowableBreadMonster = -1;
	CTFProjectile_ThrowableBrick = -1;
	CTFProjectile_ThrowableRepel = -1;
	CTFProjectile_Throwable = -1;
	CTFThrowable = -1;
	CTFKatana = -1;
	CTFSword = -1;
	CTFSniperRifleClassic = -1;
	CTFSniperRifleDecap = -1;
	CTFChargedSMG = -1;
	CTFShotgunBuildingRescue = -1;
	CTFPEPBrawlerBlaster = -1;
	CTFSodaPopper = -1;
	CTFShotgun_Revenge = -1;
	CTFCrossbow = -1;
	CTFRocketLauncher_Mortar = -1;
	CTFRocketLauncher_AirStrike = -1;
	CTFRocketLauncher_DirectHit = -1;
	CTFDRGPomson = -1;
	CTFRaygun = -1;
	CTFPistol_ScoutSecondary = -1;
	CTFPistol_ScoutPrimary = -1;
	CTFWeaponPDAExpansion_Teleporter = -1;
	CTFWeaponPDAExpansion_Dispenser = -1;
	CPasstimeGun = -1;
	CTFParticleCannon = -1;
	CTFParachute_Secondary = -1;
	CTFParachute_Primary = -1;
	CTFParachute = -1;
	CTFMedigunShield = -1;
	CTFMechanicalArm = -1;
	CTFLunchBox_Drink = -1;
	CTFLunchBox = -1;
	CLaserDot = -1;
	CTFLaserPointer = -1;
	CTFProjectile_Cleaver = -1;
	CTFProjectile_JarMilk = -1;
	CTFProjectile_Jar = -1;
	CTFCleaver = -1;
	CTFJarMilk = -1;
	CTFJar = -1;
	CTFCannon = -1;
	CTFGrapplingHook = -1;
	CTFFlareGun_Revenge = -1;
	CTFFlameRocket = -1;
	CTFCompoundBow = -1;
	CTFBuffItem = -1;
	CTFStickBomb = -1;
	CTFBall_Ornament = -1;
	CTFStunBall = -1;
	CTFBat_Giftwrap = -1;
	CTFBat_Wood = -1;
	CTFBat_Fish = -1;
	CTFWeaponBaseMerasmusGrenade = -1;
	CRobotDispenser = -1;
	CTFRobotDestruction_Robot = -1;
	CTFReviveMarker = -1;
	CTFPumpkinBomb = -1;
	CTFProjectile_EnergyRing = -1;
	CMannVsMachineStats = -1;
	CTFRobotDestructionLogic = -1;
	CTFRobotDestruction_RobotGroup = -1;
	CTFRobotDestruction_RobotSpawn = -1;
	CTFPlayerDestructionLogic = -1;
	CPlayerDestructionDispenser = -1;
	CTFMinigameLogic = -1;
	CTFHalloweenMinigame_FallingPlatforms = -1;
	CTFHalloweenMinigame = -1;
	CTFMiniGame = -1;
	CTFWearableVM = -1;
	CTFPowerupBottle = -1;
	CHalloweenSoulPack = -1;
	CTFGenericBomb = -1;
	CBonusRoundLogic = -1;
	CTFProjectile_SpellKartBats = -1;
	CTFProjectile_SpellKartOrb = -1;
	CTFHellZap = -1;
	CTFProjectile_SpellLightningOrb = -1;
	CTFProjectile_SpellTransposeTeleport = -1;
	CTFProjectile_SpellMeteorShower = -1;
	CTFProjectile_SpellSpawnBoss = -1;
	CTFProjectile_SpellMirv = -1;
	CTFProjectile_SpellPumpkin = -1;
	CTFProjectile_SpellSpawnHorde = -1;
	CTFProjectile_SpellSpawnZombie = -1;
	CTFProjectile_SpellBats = -1;
	CTFProjectile_SpellFireball = -1;
	CTFSpellBook = -1;
	CHightower_TeleportVortex = -1;
	CTeleportVortex = -1;
	CHalloweenGiftPickup = -1;
	CBonusDuckPickup = -1;
	CHalloweenPickup = -1;
	CBonusPack = -1;
	CTFWearableItem = -1;
	CBaseAttributableItem = -1;
	CWeaponPistol = -1;
	CWeaponPhysCannon = -1;
	CHL2MPMachineGun = -1;
	CBaseHL2MPCombatWeapon = -1;
	CBaseHL2MPBludgeonWeapon = -1;
	CWeaponHL2MPBase = -1;
	CWeaponFrag = -1;
	CWeaponCrowbar = -1;
	CWeaponCrossbow = -1;
	CWeaponAR2 = -1;
	CWeapon357 = -1;
	CHL2MPGameRulesProxy = -1;
	CHalfLife2Proxy = -1;
	CBaseHLCombatWeapon = -1;
	CWeaponStunStick = -1;
	CWeaponSMG1 = -1;
	CWeapon_SLAM = -1;
	CWeaponShotgun = -1;
	CWeaponRPG = -1;
	CPredictedViewModel = -1;
	CEnvStarfield = -1;
	CEnvHeadcrabCanister = -1;
	CAlyxEmpEffect = -1;
	CCorpse = -1;
	CCitadelEnergyCore = -1;
	CHL2_Player = -1;
	CBaseHLBludgeonWeapon = -1;
	CHLSelectFireMachineGun = -1;
	CHLMachineGun = -1;
	CBaseHelicopter = -1;
	CNPC_Barney = -1;
	CNPC_Barnacle = -1;
	AR2Explosion = -1;
	CTEAntlionDust = -1;
	CVortigauntEffectDispel = -1;
	CVortigauntChargeToken = -1;
	CNPC_Vortigaunt = -1;
	CPropVehiclePrisonerPod = -1;
	CPropCrane = -1;
	CPropCannon = -1;
	CPropAirboat = -1;
	CFlare = -1;
	CTEConcussiveExplosion = -1;
	CNPC_Strider = -1;
	CScriptIntro = -1;
	CRotorWashEmitter = -1;
	CPropCombineBall = -1;
	CPlasmaBeamNode = -1;
	CNPC_RollerMine = -1;
	CNPC_Manhack = -1;
	CNPC_CombineGunship = -1;
	CNPC_AntlionGuard = -1;
	CInfoTeleporterCountdown = -1;
	CMortarShell = -1;
	CTEHL2MPFireBullets = -1;
	CHL2MPRagdoll = -1;
	CHL2MP_Player = -1;
	CWeaponCitizenSuitcase = -1;
	CWeaponCitizenPackage = -1;
	CWeaponAlyxGun = -1;
	CWeaponCubemap = -1;
	CWeaponGaussGun = -1;
	CWeaponAnnabelle = -1;
	CFlaregun = -1;
	CWeaponBugBait = -1;
	CWeaponBinoculars = -1;
	CWeaponCycler = -1;
	CCrossbowBolt = -1;
	C_Player = -1;
}

void ClassIDHL2DM::Init() {
	IClassID::Init();
	CRagdollPropAttached = 112;
	CRagdollProp = 111;
	CTEHL2MPFireBullets = 159;
	CHL2MPRagdoll = 71;
	CHL2MP_Player = 68;
	CWeaponCitizenSuitcase = 0;
	CWeaponCitizenPackage = 0;
	CWeaponAlyxGun = 0;
	CWeaponCubemap = 192;
	CWeaponGaussGun = 0;
	CWeaponAnnabelle = 187;
	CFlaregun = 0;
	CWeaponBugBait = 189;
	CWeaponBinoculars = 0;
	CWeaponCycler = 193;
	CCrossbowBolt = 31;
	CWaterBullet = 183;
	CPropVehiclePrisonerPod = 109;
	CPropCrane = 107;
	CPropCannon = 0;
	CPropAirboat = 105;
	CFlare = 51;
	CTEConcussiveExplosion = 148;
	CNPC_Strider = 88;
	CScriptIntro = 116;
	CRotorWashEmitter = 114;
	CPropCombineBall = 106;
	CPlasmaBeamNode = 0;
	CNPC_RollerMine = 87;
	CNPC_Manhack = 86;
	CNPC_CombineGunship = 85;
	CNPC_AntlionGuard = 82;
	CInfoTeleporterCountdown = 77;
	CMortarShell = 81;
	CFuncMonitor = 58;
	CEnvStarfield = 45;
	CEnvHeadcrabCanister = 39;
	CAlyxEmpEffect = 2;
	CCorpse = 30;
	CCitadelEnergyCore = 27;
	CHL2_Player = 67;
	CBaseHLBludgeonWeapon = 14;
	CHLSelectFireMachineGun = 73;
	CHLMachineGun = 72;
	CBaseHelicopter = 11;
	CNPC_Barney = 84;
	CNPC_Barnacle = 83;
	AR2Explosion = 0;
	CTEAntlionDust = 130;
	CVortigauntEffectDispel = 181;
	CVortigauntChargeToken = 180;
	CNPC_Vortigaunt = 89;
	CWorld = 202;
	CWaterLODControl = 184;
	CVGuiScreen = 179;
	CPropJeep = 0;
	CPropVehicleChoreoGeneric = 0;
	CTEWorldDecal = 178;
	CTESpriteSpray = 175;
	CTESprite = 174;
	CTESparks = 173;
	CTESmoke = 172;
	CTEShowLine = 170;
	CTEProjectedDecal = 168;
	CTEPlayerDecal = 167;
	CTEPhysicsProp = 166;
	CTEParticleSystem = 165;
	CTEMuzzleFlash = 164;
	CTELargeFunnel = 162;
	CTEKillPlayerAttachments = 161;
	CTEImpact = 160;
	CTEGlowSprite = 158;
	CTEShatterSurface = 169;
	CTEFootprintDecal = 156;
	CTEFizz = 155;
	CTEExplosion = 154;
	CTEEnergySplash = 153;
	CTEEffectDispatch = 152;
	CTEDynamicLight = 151;
	CTEDecal = 149;
	CTEClientProjectile = 147;
	CTEBubbleTrail = 146;
	CTEBubbles = 145;
	CTEBSPDecal = 144;
	CTEBreakModel = 143;
	CTEBloodStream = 142;
	CTEBloodSprite = 141;
	CTEBeamSpline = 140;
	CTEBeamRingPoint = 139;
	CTEBeamRing = 138;
	CTEBeamPoints = 137;
	CTEBeamLaser = 136;
	CTEBeamFollow = 135;
	CTEBeamEnts = 134;
	CTEBeamEntPoint = 133;
	CTEBaseBeam = 132;
	CTEArmorRicochet = 131;
	CTEMetalSparks = 163;
	CTest_ProxyToggle_Networkable = 176;
	CTestTraceline = 177;
	CTesla = 171;
	CTeamTrainWatcher = 129;
	CBaseTeamObjectiveResource = 20;
	CTeam = 126;
	CSun = 125;
	CSteamJet = 124;
	CParticlePerformanceMonitor = 91;
	CSpotlightEnd = 120;
	DustTrail = 203;
	CFireTrail = 49;
	SporeTrail = 209;
	SporeExplosion = 208;
	RocketTrail = 206;
	SmokeTrail = 207;
	CSmokeStack = 119;
	CSlideshowDisplay = 118;
	CShadowControl = 117;
	CSceneEntity = 115;
	CRopeKeyframe = 113;
	CRagdollManager = 110;
	CPropVehicleDriveable = 108;
	CPhysicsPropMultiplayer = 96;
	CPhysBoxMultiplayer = 94;
	CBasePropDoor = 19;
	CDynamicProp = 33;
	CPointCommentaryNode = 101;
	CPointCamera = 100;
	CPlayerResource = 99;
	CPlasma = 98;
	CPhysMagnet = 97;
	CPhysicsProp = 95;
	CPhysBox = 93;
	CParticleSystem = 92;
	ParticleSmokeGrenade = 205;
	CParticleFire = 90;
	MovieExplosion = 204;
	CMaterialModifyControl = 80;
	CLightGlow = 79;
	CInfoOverlayAccessor = 76;
	CTEGaussExplosion = 157;
	CFuncTrackTrain = 63;
	CFuncSmokeVolume = 62;
	CFuncRotating = 61;
	CFuncReflectiveGlass = 60;
	CFuncOccluder = 59;
	CFunc_LOD = 54;
	CTEDust = 150;
	CFunc_Dust = 53;
	CFuncConveyor = 56;
	CBreakableSurface = 26;
	CFuncAreaPortalWindow = 55;
	CFish = 50;
	CEntityFlame = 36;
	CFireSmoke = 48;
	CEnvTonemapController = 46;
	CEnvScreenEffect = 43;
	CEnvScreenOverlay = 44;
	CEnvProjectedTexture = 41;
	CEnvParticleScript = 40;
	CFogController = 52;
	CEntityParticleTrail = 37;
	CEntityDissolve = 35;
	CEnvQuadraticBeam = 42;
	CEmbers = 34;
	CEnvWind = 47;
	CPrecipitation = 103;
	CDynamicLight = 32;
	CColorCorrectionVolume = 29;
	CColorCorrection = 28;
	CBreakableProp = 25;
	CBaseTempEntity = 21;
	CBasePlayer = 17;
	CBaseFlex = 9;
	CBaseEntity = 8;
	CBaseDoor = 7;
	CBaseCombatCharacter = 5;
	CBaseAnimatingOverlay = 4;
	CBoneFollower = 24;
	CBaseAnimating = 3;
	CInfoLightingRelative = 75;
	CAI_BaseNPC = 1;
	CHandleTest = 66;
	CTeamRoundTimer = 128;
	CTeamplayRoundBasedRulesProxy = 127;
	CSpriteTrail = 123;
	CSpriteOriented = 122;
	CSprite = 121;
	CPredictedViewModel = 104;
	CPoseController = 102;
	CWeaponStunStick = 201;
	CWeaponSMG1 = 200;
	CWeapon_SLAM = 186;
	CWeaponShotgun = 199;
	CWeaponRPG = 198;
	CLaserDot = 78;
	CWeaponPistol = 197;
	CWeaponPhysCannon = 196;
	CHL2MPMachineGun = 70;
	CBaseHL2MPCombatWeapon = 13;
	CBaseHL2MPBludgeonWeapon = 12;
	CWeaponHL2MPBase = 195;
	CWeaponFrag = 194;
	CWeaponCrowbar = 191;
	CWeaponCrossbow = 190;
	CWeaponAR2 = 188;
	CWeapon357 = 185;
	CHL2MPGameRulesProxy = 69;
	CHalfLife2Proxy = 65;
	CBaseHLCombatWeapon = 15;
	CGameRulesProxy = 64;
	CInfoLadderDismount = 74;
	CFuncLadder = 57;
	CEnvDetailController = 38;
	CBeam = 23;
	CBaseViewModel = 22;
	CBaseProjectile = 18;
	CBaseParticleEntity = 16;
	CBaseGrenade = 10;
	CBaseCombatWeapon = 6;
	CVoteController = 182;
	C_Player = CHL2MP_Player;
}