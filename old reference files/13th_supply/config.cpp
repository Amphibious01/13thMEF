#include "config_macros.hpp"

class CfgPatches
{
	class 13th_supply
	{
		units[]=
		{
			"13th_supply_crate",
			"13th_R3_crate",
			"13th_arsenal_crate",
			"13th_Tractor",
			"13th_R3HEMTT"
		};
		requiredAddons[]=
		{
			"CUP_WheeledVehicles_TowingTractor"
		};
	};
};
class CfgVehicles
{
	class Box_NATO_AmmoVeh_F;
	class B_supplyCrate_f;
	class CUP_B_TowingTractor_USMC;
	class B_Truck_01_box_F;
	class 13th_supply_crate: B_supplyCrate_f
	{
		displayName="[13th] Supply Crate";
		scope=2;
		scopeCurator=2;
		class TransportMagazines
		{
			class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count=100;
			};
			class _xx_rhsusf_20Rnd_762x51_SR25_m993_mag
			{
				magazine="rhsusf_20Rnd_762x51_SR25_m993_mag";
				count=30;
			};
			class _xx_rhsusf_200rnd_556x45_mixed_box
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count=20;
			};
			class _xx_rhsusf_100Rnd_762x51_m62_tracer
			{
				magazine="rhsusf_100Rnd_762x51_m62_tracer";
				count=20;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=30;
			};
			class _xx_CUP_1Rnd_Smoke_M203
			{
				magazine="CUP_1Rnd_Smoke_M203";
				count=30;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=10;
			};
			class _xx_CUP_SMAW_HEAA_M
			{
				magazine="CUP_SMAW_HEAA_M";
				count=10;
			};
			class _xx_CUP_SMAW_HEDP_M
			{
				magazine="CUP_SMAW_HEDP_M";
				count=10;
			};
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=10;
			};
			class _xx_MRAWS_HE_F
			{
				magazine="MRAWS_HE_F";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_CUP_arifle_M16A4_Grip
			{
				weapon="CUP_arifle_M16A4_Grip";
				count=5;
			};
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=150;
			};
			class _xx_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=150;
			};
			class _xx_ACE_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=150;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=150;
			};
			class _xx_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=30;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=30;
			};
			class _xx_ACE_adenosine
			{
				name="ACE_adenosine";
				count=30;
			};
			class _xx_ACE_splint
			{
				name="ACE_splint";
				count=30;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=30;
			};
			class _xx_ACE_bloodIV_250
			{
				name="ACE_bloodIV_250";
				count=30;
			};
			class _xx_ACE_bloodIV_500
			{
				name="ACE_bloodIV_500";
				count=30;
			};
			class _xx_ACE_bloodIV
			{
				name="ACE_bloodIV";
				count=15;
			};
			class _xx_rhs_mag_m18_purple
			{
				name="rhs_mag_m18_purple";
				count=10;
			};
			class _xx_rhs_mag_m18_blue
			{
				name="rhs_mag_m18_blue";
				count=10;
			};
			class _xx_rhs_rhs_mag_m18_red
			{
				name="rhs_mag_m18_red";
				count=10;
			};
			class _xx_rhs_mag_m67
			{
				name="rhs_mag_m67";
				count=30;
			};
			class _xx_SmokeShell
			{
				name="SmokeShell";
				count=30;
			};
			class _xx_SmokeShellBlue
			{
				name="SmokeShellBlue";
				count=10;
			};
		};

        LOGI_SP_INFO(Crates,Supply Crate,0)
	};


	class 13th_R3_crate: Box_NATO_AmmoVeh_F
	{
		displayName="[13th] R3 Crate";
		scope=2;
		scopeCurator=2;
		ace_repair_canRepair=1;
		ace_rearm_defaultSupply=999999;
		ace_refuel_fuelCargo=10000;
		ace_refuel_hooks[]=
		{
			{0,0,0}
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=2;
			};
		};
		class EventHandlers
		{
			postInit="(_this select 0) execVM ""\x\13thMEF\addons\13th_supply\13th_crateMass.sqf""";
		};

        LOGI_SP_INFO(Crates,R3 Crate Crate,0)
	};


	class 13th_arsenal_crate: B_supplyCrate_f
	{
		displayName="[13th] Arsenal Crate";
		scope=2;
		scopeCurator=2;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class EventHandlers
		{
			postInit="(_this select 0) execVM ""\x\13thMEF\addons\13th_supply\13th_arsenalInit.sqf""";
		};

        LOGI_SP_INFO(Crates,Arsenal Crate,0)

	};


	class 13th_Tractor: CUP_B_TowingTractor_USMC
	{
		displayName="[13th] Towing Tractor";
		author="Waylen";
		faction="b_oseamarinecorps";

        LOGI_SP_INFO(Towing Tractor,Default,1)
	};


	class 13th_R3HEMTT: B_Truck_01_box_F
	{
		displayName="[13th] R3 HEMTT";
		author="Waylen";
		faction="b_oseamarinecorps";
		ace_repair_canRepair=1;
		ace_rearm_defaultSupply=99999999;
		ace_refuel_fuelCargo=10000;
		ace_refuel_hooks[]=
		{
			{0,0,0}
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=2;
			};
		};
        LOGI_SP_INFO(R3 HEMTT,Default,2)
	};
};
