	class CUP_Uh60S_Base;
	class CUP_MH60L_Dap_2x_Dynamic_Base: CUP_Uh60S_Base
	{
		class AnimationSources;
		class UserActions;
		class MFD;
	};
	class CUP_B_MH60L_DAP_2x_US: CUP_MH60L_Dap_2x_Dynamic_Base 
	{
		class AnimationSources:AnimationSources{};
		class UserActions;
		class MFD;
	};	

	class CUP_MH60L_Dap_4x_Dynamic_Base: CUP_Uh60S_Base
	{
		class AnimationSources;
		class UserActions;
		class MFD;
	};
	class CUP_B_MH60L_DAP_4x_US: CUP_MH60L_Dap_4x_Dynamic_Base 
	{
		class AnimationSources:AnimationSources{};
		class UserActions;
		class MFD;
	};
	class CUP_B_UH60S_USN: CUP_Uh60S_Base 
	{
		class AnimationSources;
		class Navyclan_hide; 
		class Navyclan2_hide;
		class UserActions;
		class MFD;
	};

	class 13th_MH60: CUP_B_UH60S_USN
	{
		displayName="[13th] MH-60 Seahawk";
		scopeCurator=2;
		scope=2;
		author="Waylen";
		faction="b_oseamarinecorps";
		crew="B_BOseaMarineCorps_Helicopter_pilot_01";
		editorSubcategory  = "EdSubcat_Helicopters";

		weapons[]=
		{
			"rhs_weap_mastersafe",
			"Laserdesignator_mounted",
			"rhsusf_weap_CMDispenser_ANALE39"
		};
		magazines[]=
		{
			"Laserbatteries",
			"rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4",
			"rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\13thMEF\addons\13th_air_vehicles\data\seahawk\mh60s_fuselage_co.paa",
			"\x\13thMEF\addons\13th_air_vehicles\data\seahawk\mh60s_engine_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};

		class textureSources {
			class default {
				displayName = "Default";
				author = "CUP";
				textures[] = {
					"\x\13thMEF\addons\13th_air_vehicles\data\seahawk\mh60s_fuselage_co.paa",
					"\x\13thMEF\addons\13th_air_vehicles\data\seahawk\mh60s_engine_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
				};
				factions[] =
				{
					"Osea_F"
				};
			};
		};

		class AnimationSources: AnimationSources 
		{
			class Navyclan_hide: Navyclan_hide 
			{ 
				initPhase = 1; 
				source = "";
			};
			class Navyclan2_hide: Navyclan2_hide 
			{ 
				initPhase = 1; 
				source = "";
			};
		};

		class Components: BaseComponents{};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=-180;
					maxAngleX=180;
					initAngleY=0;
					minAngleY=-90;
					maxAngleY=20;
					initFov="(30 / 120)";
					minFov="(30 / 120)";
					maxFov="(30 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(6 / 120)";
					minFov="(6 / 120)";
					maxFov="(6 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(2 / 120)";
					minFov="(2 / 120)";
					maxFov="(2 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics=0;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=0;
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-80;
			maxElev=90;
			initElev=5;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
			memoryPointGun="laser_start";
			gunBeg="laser_end";
			gunEnd="gunnerview_flir";
		};
		memoryPointDriverOptics="gunnerview_flir";
		lockDetectionSystem = "1+2+4+8+16";
		incomingMissileDetectionSystem = "1+2+4+8+16";

		#include "\x\13thMEF\addons\13th_air_vehicles\hmds\cfg_HMD_AH64D_104_Pilot_Ghost_Hawk.hpp"
		// ^^^ HMD script

		#include "\x\13thMEF\addons\13th_air_vehicles\hmds\cfg_HMD_AH64D_082_User_Actions_Default_Values.hpp"
		class UserActions: UserActions
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
			class KICK_PASSENGERS
			{
				displayName="<t color='#730901'>Kick passengers</t>";	
				condition="(player in [driver this, this turretUnit [0]]) && (alive this) && (speed this <= 60) && ((getPosATL this select 2) <= 2)";	
				statement="this call OMDF_fnc_kickPassengers";	
				position="pilotcontrol";	
				radius=10;	
				priority=10.1;	
				onlyforplayer=1;	
				showWindow=0;	
				hideOnUse=1;	
			};	
			#include "\x\13thMEF\addons\13th_air_vehicles\hmds\cfg_HMD_AH64D_081_User_Action_ALL.hpp"
		};

		SPAWNPADCONFIG(13th_rotary,13th Rotary,MH-60,Seahawk,0)
		};

	class 13th_MH60S_DAP_4X: CUP_B_MH60L_DAP_4x_US
	{
		displayName="[13th] MH-60S Knighthawk (4x)";
		scopeCurator=2;
		scope=2;
		author="Waylen";
		faction="b_oseamarinecorps";
		crew="B_BOseaMarineCorps_Helicopter_pilot_01";
		editorSubcategory  = "EdSubcat_Helicopters";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\13thMEF\addons\13th_air_vehicles\data\seahawk\mh60s_fuselage_DAP_co.paa",
			"\x\13thMEF\addons\13th_air_vehicles\data\seahawk\mh60s_engine_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};
		class textureSources 
			{
			class default 
				{
				displayName = "Default";
				author = "CUP";
				textures[] = 
				{
					"\x\13thMEF\addons\13th_air_vehicles\data\seahawk\mh60s_fuselage_DAP_co.paa",
					"\x\13thMEF\addons\13th_air_vehicles\data\seahawk\mh60s_engine_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
				};
				factions[] =
				{
					"Osea_F"
				};
			};
		};
		model = "cup\airvehicles\cup_airvehicles_uh60\model\CUP_uh60m_b.p3d";

		class AnimationSources: AnimationSources 
		{
			class Navyclan_hide { initPhase = 1; };
			class Navyclan2_hide { initPhase = 1; };
		};

		lockDetectionSystem = "1+2+4+8+16";
		incomingMissileDetectionSystem = "1+2+4+8+16";
		class components: BaseComponents
		{
			class TransportPylonsComponent
			{
				UIPicture="\CUP\AirVehicles\CUP_AirVehicles_UH60\data\ui\CUP_UH60M_4_3DEN_CA.paa";
				class presets
				{
					class Default
					{
						displayName="Default";
						attachment[]=
						{
							"PylonRack_4Rnd_ACE_Hellfire_AGM114L",
							"FIR_Hydra_M247_P_19rnd_M",
							"13th_M789",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114L"
						};
					};
				};
				class pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"13th_HEAVY_ROTARY",
							"13th_GAU19",
							"RHS_HP_ATAS"
						};
						attachment="13th_114L_4rnd";
						bay=-1;
						priority=5;
						UIposition[]={0.059999999,0.34999999};
						turret[]={};
					};
					class pylons2: pylons1
					{
						attachment="13th_M789";
						priority=4;
						UIposition[]={0.079999998,0.40000001};
					};
					class pylons3: pylons1
					{
						attachment="13th_HYDRA_HE_19RND_M";
						priority=4;
						UIposition[]={0.56999999,0.40000001};
						mirroredMissilePos=2;
					};
					class pylons4: pylons1
					{
						attachment="13th_114L_4rnd";
						priority=5;
						UIposition[]={0.58999997,0.34999999};
						mirroredMissilePos=1;
					};
				};
			};
		};
		weapons[]=
		{
			"rhs_weap_mastersafe",
			"Laserdesignator_mounted",
			"rhsusf_weap_CMDispenser_ANALE39"
		};
		magazines[]=
		{
			"Laserbatteries",
			"rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4",
			"rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4"
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=-180;
					maxAngleX=180;
					initAngleY=0;
					minAngleY=-90;
					maxAngleY=20;
					initFov="(30 / 120)";
					minFov="(30 / 120)";
					maxFov="(30 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(6 / 120)";
					minFov="(6 / 120)";
					maxFov="(6 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(2 / 120)";
					minFov="(2 / 120)";
					maxFov="(2 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics=0;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=0;
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-80;
			maxElev=90;
			initElev=5;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
			memoryPointGun="laser_start";
			gunBeg="laser_end";
			gunEnd="gunnerview_flir";
		};
		memoryPointDriverOptics="gunnerview_flir";

		SPAWNPADCONFIG(13th_rotary,13th Rotary,MH-60,Knighthawk,1)

		#include "\x\13thMEF\addons\13th_air_vehicles\hmds\cfg_HMD_AH64D_106_Pilot_Lynx_A.hpp"
		// ^^^ HMD script

		#include "\x\13thMEF\addons\13th_air_vehicles\hmds\cfg_HMD_AH64D_082_User_Actions_Default_Values.hpp"
		class UserActions: UserActions 
		{
			class OpenDoors
			{
				userActionID=50;
				displayName="$STR_DN_OUT_O_DOOR";
				radius=2.5;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				priority=0.5;
				position="doors";
				showWindow=1;
				onlyForPlayer=1;
				shortcut="";
				condition="this animationPhase ""doors"" < 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""doors"",1];";
			};
			class CloseDoors: OpenDoors
			{
				userActionID=53;
				displayName="$STR_DN_OUT_C_DOOR";
				condition="this animationPhase ""doors"" > 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""doors"", 0]";
			};
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
			class KICK_PASSENGERS
			{
				displayName="<t color='#730901'>Kick passengers</t>";	
				condition="(player in [driver this, this turretUnit [0]]) && (alive this) && (speed this <= 60) && ((getPosATL this select 2) <= 2)";	
				statement="this call OMDF_fnc_kickPassengers";	
				position="pilotcontrol";	
				radius=10;	
				priority=10.1;	
				onlyforplayer=1;	
				showWindow=0;	
				hideOnUse=1;	
			};	
			#include "\x\13thMEF\addons\13th_air_vehicles\hmds\cfg_HMD_AH64D_081_User_Action_ALL.hpp"
		};	

		};
        
        class 13th_MH60S_DAP_2X: CUP_B_MH60L_DAP_2x_US
		{
		displayName="[13th] MH-60S Knighthawk (2x)";
		scopeCurator=2;
		scope=2;
		author="Waylen";
		faction="b_oseamarinecorps";
		crew="B_BOseaMarineCorps_Helicopter_pilot_01";
		editorSubcategory  = "EdSubcat_Helicopters";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\13thMEF\addons\13th_air_vehicles\data\seahawk\mh60s_fuselage_DAP_co.paa",
			"\x\13thMEF\addons\13th_air_vehicles\data\seahawk\mh60s_engine_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};
		class textureSources 
			{
			class default 
				{
				displayName = "Default";
				author = "CUP";
				textures[] = 
				{
					"\x\13thMEF\addons\13th_air_vehicles\data\seahawk\mh60s_fuselage_DAP_co.paa",
					"\x\13thMEF\addons\13th_air_vehicles\data\seahawk\mh60s_engine_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
				};
				factions[] =
				{
					"Osea_F"
				};
			};
		};

		class AnimationSources: AnimationSources 
		{
			class Navyclan_hide { initPhase = 1; };
			class Navyclan2_hide { initPhase = 1; };
		};

		lockDetectionSystem = "2+4+8";
		incomingMissileDetectionSystem = "1+2+4+8+16";
		class Components: BaseComponents
		{
			class TransportPylonsComponent
			{
				UIPicture="\CUP\AirVehicles\CUP_AirVehicles_UH60\data\ui\CUP_UH60M_2_3DEN_CA.paa";
				class presets
				{
					class Default
					{
						displayName="Default";
						attachment[]=
						{
							"",
							"FIR_Hydra_M247_P_19rnd_M",
							"13th_M789",
							""
						};
					};
				};
				class pylons
				{
					class pylons1
					{
						hardpoints[]={};
						attachment="";
						bay=-1;
						priority=5;
						UIposition[]={2,0.34999999};
						turret[]={};
					};
					class pylons2: pylons1
					{
						hardpoints[]=
						{
							"13th_HEAVY_ROTARY",
							"13th_GAU19",
							"RHS_HP_ATAS"
						};
						attachment="13th_HYDRA_HE_19RND_M";
						priority=4;
						UIposition[]={0.079999998,0.40000001};
					};
					class pylons3: pylons1
					{
						hardpoints[]=
						{
							"13th_HEAVY_ROTARY",
							"13th_GAU19",
							"RHS_HP_ATAS"
						};
						attachment="13th_M789";
						priority=4;
						UIposition[]={0.56999999,0.40000001};
						mirroredMissilePos=2;
					};
					class pylons4: pylons1
					{
						priority=5;
						UIposition[]={2,0.34999999};
						mirroredMissilePos=1;
					};
				};
			};
		};
		weapons[]=
		{
			"rhs_weap_mastersafe",
			"Laserdesignator_mounted",
			"rhsusf_weap_CMDispenser_ANALE39"
		};
		magazines[]=
		{
			"Laserbatteries",
			"rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4",
			"rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4"
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=-180;
					maxAngleX=180;
					initAngleY=0;
					minAngleY=-90;
					maxAngleY=20;
					initFov="(30 / 120)";
					minFov="(30 / 120)";
					maxFov="(30 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(6 / 120)";
					minFov="(6 / 120)";
					maxFov="(6 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(2 / 120)";
					minFov="(2 / 120)";
					maxFov="(2 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics=0;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=0;
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-80;
			maxElev=90;
			initElev=5;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
			memoryPointGun="laser_start";
			gunBeg="laser_end";
			gunEnd="gunnerview_flir";
		};
		memoryPointDriverOptics="gunnerview_flir";

		SPAWNPADCONFIG(13th_rotary,13th Rotary,MH-60,Knighthawk,1)

		#include "\x\13thMEF\addons\13th_air_vehicles\hmds\cfg_HMD_AH64D_106_Pilot_Lynx_A.hpp"
		// ^^^ HMD script

		#include "\x\13thMEF\addons\13th_air_vehicles\hmds\cfg_HMD_AH64D_082_User_Actions_Default_Values.hpp"
		class UserActions: UserActions
		{
			class OpenDoors
			{
				userActionID=50;
				displayName="$STR_DN_OUT_O_DOOR";
				radius=2.5;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				priority=0.5;
				position="doors";
				showWindow=1;
				onlyForPlayer=1;
				shortcut="";
				condition="this animationPhase ""doors"" < 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""doors"",1];";
			};
			class CloseDoors: OpenDoors
			{
				userActionID=53;
				displayName="$STR_DN_OUT_C_DOOR";
				condition="this animationPhase ""doors"" > 0.5 AND driver this == player AND Alive(this)";
				statement="this animate [""doors"", 0]";
			};
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
			class KICK_PASSENGERS
			{
				displayName="<t color='#730901'>Kick passengers</t>";	
				condition="(player in [driver this, this turretUnit [0]]) && (alive this) && (speed this <= 60) && ((getPosATL this select 2) <= 2)";	
				statement="this call OMDF_fnc_kickPassengers";	
				position="pilotcontrol";	
				radius=10;	
				priority=10.1;	
				onlyforplayer=1;	
				showWindow=0;	
				hideOnUse=1;	
			};	
			#include "\x\13thMEF\addons\13th_air_vehicles\hmds\cfg_HMD_AH64D_081_User_Action_ALL.hpp"
		};
		
	};