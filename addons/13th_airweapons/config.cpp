
class CfgPatches
{
	class 13th_airweapons
	{
		name="13th MEF Air Weapons";
		author="13th Mod Team";
		requiredVersion=1;
		units [] = {};
		requiredAddons[]=
		{
			"rhsusf_c_airweapons",
			"CUP_Weapons_WeaponsData",
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_Pods",
			"CUP_Weapons_VehicleWeapons"
		};
		magazines [] =
		{
			"13th_M789"
		};
		ammo [] =
		{
			"13th_30x113_M789_HEDP"
		};
	};
};

class CfgWeapons 
{

	class CUP_Vacannon_M230_veh;

	class 13th_M230: CUP_Vacannon_M230_veh 
	{
		magazines [] =
		{
			"13th_M789"
		};
	};

};

class CfgMagazines 
{

	class CUP_PylonPod_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M;

	class 13th_M789: CUP_PylonPod_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M
	{
		displayName = "M230 Chaingun";
		hardpoints [] =
		{
			"13th_HEAVY_ROTARY"
		};
		pylonWeapon = "13th_M230";
		ammo = "13th_30x113_M789_HEDP";
	};

};

class CfgAmmo
{

	class CUP_B_30x113mm_M789_HEDP_Red_Tracer;

	class 13th_30x113_M789_HEDP: CUP_B_30x113mm_M789_HEDP_Red_Tracer
	{
		hit = 140;
		indirectHitRange = 5.5;
		//indirectHit = 12.5;
		explosive=0.4;
	};

};

