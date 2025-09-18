#include "config_macros.hpp"
#include "cfgFunctions.hpp"

class CfgPatches
{
	class 13th_vehicles
	{
		name="13th MEF Vehicles";
		author="13th Mod Team";
		requiredVersion=1;
		requiredAddons[]=
		{
			"CUP_WheeledVehicles_LAV25",
			"rhsusf_c_m11xx",
			"rhsusf_c_stryker",
			"CUP_WheeledVehicles_Stryker",
			"CUP_TrackedVehicles_AAV",
			"rhsusf_c_hmmwv",
			"cba_main",
      		"ace_main",
		};
		units[]=
		{
			"13th_LAV25",
			"13th_LAV25_M240",
			"13th_LAV25_C2",
			"13th_SUPERLAV25",
			"13th_kitty_car",
			"13th_M1126_M2",
			"13th_M1126_MK16",
			"13th_M1128_MGS",
			"13th_M1132",
			"13th_AAV",
			"13th_M1165A1",
			"13th_M1151_M2",
			"13th_M1151_M240",
			"13th_M1151",
			"13th_M998",
			"13th_M1043",
			"13th_M1043_M2",
			"13th_M1045",
			"13th_M1245",
			"13th_CAT1A2",
			"13th_CAT1A2_M2"
		};
	};
};

#include "cfgAZMMiclic.hpp"


/// prevents AI from disembarking from immobilized tanks
class Extended_InitPost_EventHandlers {
  class Tank {
    class tankIsNowBunker { init = "(_this select 0) allowCrewInImmobile true;"; };
  };
};


class CfgVehicles
{

	class CUP_C_Golf4_kitty_Civ;

//B_BOseaMarineCorps_Rifleman_01
//B_BOseaMarineCorps_Crewman_01

	#include "\x\13thMEF\addons\13th_vehicles\LAV25\config_LAV25.hpp"
	#include "\x\13thMEF\addons\13th_vehicles\m11x\config_m11x.hpp"
	#include "\x\13thMEF\addons\13th_vehicles\AAV\config_AAV.hpp"
	#include "\x\13thMEF\addons\13th_vehicles\humvee\config_humvee.hpp"
	#include "\x\13thMEF\addons\13th_vehicles\stryker\config_stryker.hpp"
	#include "\x\13thMEF\addons\13th_vehicles\mrap\config_mrap.hpp"


	// this stays here cus tbh it doesnt justify it's own config folder
	class 13th_kitty_car: CUP_C_Golf4_kitty_Civ
	{
		displayName="[13th] Hello kitty Car";
		action="b_oseamarinecorps";
		side=1;
		maxSpeed = 5000000;
		enginePower = 500000000000;
		peakTorque = 50000000;
		armor = 50000000;
	};

};
