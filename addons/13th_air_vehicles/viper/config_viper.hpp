	class MainTurret;
	class RHS_AH1Z_base;
	class RHS_AH1Z:RHS_AH1Z_base
	{
		class Turrets;
		class MainTurret;
		class Wide;
		class Medium;
		class Narrow;
		class Components;
		class TransportPylonsComponent;
		class pylons;
		class UserActions;
		class MFD;
		class ViewPilot;
	};

	class 13th_AH1Z: RHS_AH1Z 
		{
		displayName = "[13th] AH-1Z";
		side = 1;
		author="Waylen";
		faction="b_oseamarinecorps";
		crew="B_BOseaMarineCorps_Helicopter_pilot_01";
		editorSubcategory  = "EdSubcat_Helicopters";
		weapons[]=
		{
			"rhs_weap_mastersafe",
			"rhsusf_weap_CMDispenser_ANALE39"
		};
		magazines[]=
		{
			"rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4",
			"rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4"
		};
		hiddenSelectionsTextures[]=
		{
			"\ojog_Helos\data\ah1z_body_osea_co.paa",
			"\rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_engines_co.paa",
			"#(argb,8,8,3)color(0,0,0,1.0,co)",
			"#(argb,8,8,3)color(0,0,0,1.0,co)",
			"#(argb,8,8,3)color(0,0,0,1.0,co)",
			"#(argb,8,8,3)color(0,0,0,1.0,co)"
		};
		class textureSources
		{
			class OseaViper
			{
				displayName="Osean";
				author="matheusgc02";
				textures[]=
				{
					"\ojog_Helos\data\ah1z_body_osea_co.paa",
					"\rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_engines_co.paa"
				};
				factions[]=
				{
					"Osea_F"
				};
			};
		};
		
		class Components: Components
		{
			class TransportPylonsComponent:TransportPylonsComponent
			{
				class pylons:pylons 
				{	
					class pylonTip1
					{
						hardpoints[]		= {"RHS_HP_AIM9_HELI_USMC"};
						priority			= 3;
						attachment			= "rhs_mag_Sidewinder_heli_2";
						maxweight			= 1200;
						UIposition[]		= {0.625,0.25};
						bay					= -1;
						hitpoint = "HitPylon1";
					};
					class pylon2
					{
						hardpoints[]		= {"13th_HEAVY_ROTARY"};
						priority			= 2;
						attachment			= "13th_114L_4rnd";
						maxweight			= 1200;
						UIposition[]		= {0.625,0.39};
						bay					= -1;
						turret[] 			= {0};
						hitpoint = "hitPylon2";
					};
					class pylon3 : pylon2
					{
						UIposition[]		= {0.565,0.44};
						priority			= 1;
						attachment			= "13th_HYDRA_HE_19RND_M";
						turret[] 			= {};
						hitpoint = "hitPylon3";
					};
					class pylon4 : pylon3
					{
						UIposition[]		= {0.10,0.44};
						mirroredMissilePos	= 3;
						turret[] 			= {};
						hitpoint = "hitPylon4";
					};
					class pylon5 : pylon2
					{
						UIposition[]		= {0.04,0.39};
						mirroredMissilePos	= 2;
						turret[]			 = {0};
						hitpoint = "hitPylon5";
					};
					class pylonTip6 : pylonTip1
					{
						UIposition[]		= {0.04,0.25};
						mirroredMissilePos	= 1;
						hitpoint = "hitPylon6";
					};
					delete cmDispenser;
				};
			};
		};

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{	
				HMD_AH1Z
				minElev=-85;
				maxElev=20;
				minTurn=-108;
				maxTurn=108;
				gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
				gunnerOpticsEffect[] = {"TankCommanderOptics1"};
				allowTabLock = 1;
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-120;
						maxAngleY=120;
						initFov=0.456;
						minFov=0.456;
						maxFov=0.456;
						directionStabilized=0;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						directionStabilized=0;
						opticsDisplayName="M";
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Medium
					{
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
					};					
				};
			};
		};

		SPAWNPADCONFIG(13th_rotary,13th Rotary,AH-1Z,Default,1)
		lockDetectionSystem = "2+4+8";
		incomingMissileDetectionSystem = "1+2+4+8+16";

//		defaultUserMFDvalues[] =
//		{
//			0.1,	// r
//			1,		// g
//			0.1,	// b
//			1,		// alpha
//			1, 		// user4 - Pilot Left MFD
//			5, 		// user5 - Pilot Right MFD
//			1, 		// user6 - Gunner Left MFD
//			5, 		// user7 - Gunner Right MFD
//			0, 		// user8 - Radar Mode - 0 ground, 1 air
//			1, 		// user9 - Camera zoom
//			0, 		// user10 - Weapon Mode
//			0, 		// user11 - Turn Rate
//			0, 		// user12 - Rotor speed
//			0, 		// user13 - Engine 1 Power
//			0, 		// user14 - Engine 2 Power
//			3000, 	// user15 - Primary Hydraulic System
//			0, 		// user16 - FCR Scan Line
//			0,		// User17 - FCR Bearing
//			0,		// User18 - FCR Elev
//			0, 		// 19
//			1,		// 20
//			0,		// 21
//			0,		// 22
//			1,		// 23
//			0,		// 24
//			0.2		// 25
//		};
		HMD_AH1Z
		
		class ViewPilot: ViewPilot
		{
			initAngleX = 0;
		};
	};
