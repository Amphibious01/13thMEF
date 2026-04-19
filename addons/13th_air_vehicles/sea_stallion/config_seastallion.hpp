	class rhsusf_CH53E_USMC_GAU21;
	class Osean_CH53_Gau21: rhsusf_CH53E_USMC_GAU21
	{
		class UserActions;
		class MFD;
	};

	class 13th_CH53E: Osean_CH53_Gau21
		{
		displayName = "[13th] CH-53E";
		side = 1;
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
		class Components: BaseComponents
			{
			class TransportPylonsComponent
				{
				UIPicture = "\rhsusf\addons\rhsusf_ch53\data\loadouts\RHS_CH53_EDEN_CA.paa";
				class pylons
				{
				};
			};
		};

		lockDetectionSystem = "2+4+8";
		incomingMissileDetectionSystem = "1+2+4+8+16";
		SPAWNPADCONFIG(13th_rotary,13th Rotary,CH-53E,Default,3)

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
		
	};