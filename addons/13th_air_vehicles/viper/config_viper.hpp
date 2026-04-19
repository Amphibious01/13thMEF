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
				#include "\x\13thMEF\addons\13th_air_vehicles\hmds\cfg_HMD_AH64D_201_CPG.hpp"
				class UserActions 
				{
					class SAFEMODE {																																			
						displayName = "<t color='#00FF7F'>MASTERSAFE</t>";
						condition = "(call rhsusf_fnc_findPlayer) in this";
						statement = "(call rhsusf_fnc_findPlayer) action ['SwitchWeapon', this, (call rhsusf_fnc_findPlayer), (weapons this) find 'rhs_weap_MASTERSAFE'];";
						position = "";
						radius = 10;
						priority = 10.5;
						onlyforplayer = 1;
						showWindow = 0;
						shortcut="user13";
						hideOnUse = 1;
					};
					#include "\x\13thMEF\addons\13th_air_vehicles\hmds\cfg_HMD_AH64D_081_User_Action_ALL.hpp"
				};

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

		#include "\x\13thMEF\addons\13th_air_vehicles\hmds\cfg_HMD_AH64D_103_Pilot_Comanche.hpp"
		class UserActions
		{
			class SAFEMODE {																																			
				displayName = "<t color='#00FF7F'>MASTERSAFE</t>";
				condition = "(call rhsusf_fnc_findPlayer) in this";
				statement = "(call rhsusf_fnc_findPlayer) action ['SwitchWeapon', this, (call rhsusf_fnc_findPlayer), (weapons this) find 'rhs_weap_MASTERSAFE'];";
				position = "";
				radius = 10;
				priority = 10.5;
				onlyforplayer = 1;
				showWindow = 0;
				shortcut="user13";
				hideOnUse = 1;
			};
			#include "\x\13thMEF\addons\13th_air_vehicles\hmds\cfg_HMD_AH64D_081_User_Action_ALL.hpp"
		};
		
		class ViewPilot: ViewPilot
		{
			initAngleX = 0;
		};
	};
