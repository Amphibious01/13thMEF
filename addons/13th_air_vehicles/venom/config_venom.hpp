	class RHS_UH1Y;
	class Osean_UH1Y: RHS_UH1Y
	{
		class UserActions;
		class MFD;
		class ViewPilot;
	};

	class 13th_UH1Y: Osean_UH1Y
		{
		displayName="[13th] UH-1Y";
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
			gunBeg="gun_end";
			gunEnd="gun_begin";
			memoryPointGun="gun_end";
		};
		memoryPointDriverOptics="commanderview";

		lockDetectionSystem = "2+4+8";
		incomingMissileDetectionSystem = "1+2+4+8+16";
		class Components: BaseComponents
			{
			class TransportPylonsComponent
				{
					UIPicture = "\rhsusf\addons\rhsusf_a2port_air2\data\loadouts\RHS_UH1_EDEN_CA.paa";
					class pylons
					{
						class pylon1
						{
							hardpoints[] = 
							{
								"13th_VENOM",
								"13th_GAU19",
								"RHS_HP_ATAS"
							};
							UIposition[]		= {0.573,0.44};
							maxweight			= 1200;
							priority			= 1;
							attachment			= "13th_HYDRA_HE_19RND_M";
							bay					= -1;
						};
						class pylon2 : pylon1
						{
							hardpoints[] = 
							{
								"13th_VENOM",
								"13th_GAU19",
								"RHS_HP_ATAS"
							};
							attachment			= "13th_HYDRA_SMK_19RND_M";
							UIposition[]		= {0.10,0.44};
							mirroredMissilePos	= 1;
						};
					};
				};
    		};

		bodyFrictionCoef = 0.75;

		#include "\x\13thMEF\addons\13th_air_vehicles\hmds\cfg_HMD_AH64D_106_Pilot_Lynx_A.hpp"
		// ^^^ HMD script

		#include "\x\13thMEF\addons\13th_air_vehicles\hmds\cfg_HMD_AH64D_082_User_Actions_Default_Values.hpp"
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

		SPAWNPADCONFIG(13th_rotary,13th Rotary,UH-1Y,Default,1)
		class ViewPilot: ViewPilot
		{
			initAngleX = 0;
		};
	};