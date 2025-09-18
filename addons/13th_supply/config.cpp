#include "config_macros.hpp"
#include "cfgFunctions.hpp"

class CfgPatches
{
	class 13th_supply
	{
		units[]=
		{
			"13th_ARSENAL_INF",
			"13th_ARSENAL_DETACHMENTS",
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
	class ReammoBox_F;
	class Box_NATO_AmmoVeh_F: ReammoBox_F{
		class EventHandlers;
	};
	class B_supplyCrate_f;
	class B_CargoNet_01_ammo_F;
	class I_E_CargoNet_01_ammo_F;
	class CUP_B_TowingTractor_USMC;
	class B_Truck_01_mover_F;
	class B_Truck_01_box_F:B_Truck_01_mover_F
	{
		class EventHandlers;
	};

	class 13th_ARSENAL_INF: B_CargoNet_01_ammo_F
	{
		displayName="[13th] Infantry Arsenal";
		scope=2;
		scopeCurator=2;

		ace_dragging_canDrag = 1;
		ace_dragging_ignoreWeight = 1;

		class TransportMagazines{};
		class TransportWeapons	{};
		class TransportItems	{};
		class EventHandlers
		{
            postInit = "[(_this select 0)] call OMDF_fnc_infArsenalInit";
		};		
	};

	class 13th_ARSENAL_DETACHMENTS: I_E_CargoNet_01_ammo_F
	{
		displayName="[13th] Detachment Arsenal";
		scope=2;
		scopeCurator=2;

		ace_dragging_canDrag = 1;
		ace_dragging_ignoreWeight = 1;

		class TransportMagazines{};
		class TransportWeapons	{};
		class TransportItems	{};
		class EventHandlers
		{
            postInit = "[(_this select 0)] call OMDF_fnc_detachmentArsenalInit";
		};		
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

		ace_dragging_canDrag = 1;
		ace_dragging_ignoreWeight = 1;

		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_ToolKit{	name="ToolKit";	count=2; };
		};
		class EventHandlers: EventHandlers
		{
            postInit="[(_this select 0)] call AZM_miclic_addRearmAction";
		};

		
        LOGI_SP_INFO(Crates,R3 Crate Crate,0)
	};

	class 13th_arsenal_crate: B_supplyCrate_f
	{
		displayName="[13th] Full Arsenal";
		scope=2;
		scopeCurator=2;

		ace_dragging_canDrag = 1;
		ace_dragging_ignoreWeight = 1;

		class TransportMagazines{};
		class TransportWeapons	{};
		class TransportItems	{};
		class EventHandlers
		{
			postInit="(_this select 0) call ace_arsenal_fnc_initBox";
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
		ace_refuel_hooks[]=	{ {0,0,0} };
		
		class TransportMagazines	{};
		class TransportWeapons		{};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=2;
			};
		};

		class EventHandlers: EventHandlers
		{
            postInit="[(_this select 0)] call AZM_miclic_addRearmAction";
		};

        LOGI_SP_INFO(R3 HEMTT,Default,2)
	};
};
