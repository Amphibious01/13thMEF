
class cfgCloudlets
{
	class Default;
	class SmokeShellWhite : Default
	{
		moveVelocity[]={0.2,0.50000001,0.1};//{0.2,0.1,0.1}
		size[]={0.46,4.5,18};//{0.1,2,6}
		MoveVelocityVar[]={0.7,0.4,0.7};//{0.25,0.25,0.25}
		lifeTime = 60;
	};
};

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
			"CUP_Weapons_VehicleWeapons",
			"ace_hellfire",
			"A3_Data_F_ParticleEffects"
		};
		magazines [] =
		{
			"13th_M789",
			"13th_GAU19_left",
			"13th_GAU19_right",
			"13th_HYDRA_HEAT_7RND_M",
			"13th_HYDRA_HEAT_19RND_M",
			"13th_HYDRA_MELB_HEAT_7RND_M",
			"13th_HYDRA_HE_7RND_M",
			"13th_HYDRA_HE_19RND_M",
			"13th_HYDRA_MELB_HE_7RND_M",
			"13th_HYDRA_SMK_7RND_M",
			"13th_HYDRA_SMK_19RND_M",
			"13th_HYDRA_MELB_SMK_7RND_M",
			"13th_114K_4rnd",
			"13th_114K_2rnd",
			"13th_114N_4rnd",
			"13th_114N_2rnd",
			"13th_114L_4rnd",
			"13th_114L_2rnd"
		};
		ammo [] =
		{
			"13th_30x113_M789_HEDP",
			"13th_HYDRA_HEAT_Rocket",
			"13th_HYDRA_HE_Rocket",
			"13th_HYDRA_SMK_Rocket",
			"13th_114K_ammo",
			"13th_114N_ammo",
			"13th_114L_ammo"
		};
	};
};



class ace_missileguidance_type_Hellfire;
class ace_missileguidance;

#include "cfgWeapons.hpp"
#include "cfgMagazines.hpp"
#include "cfgAmmo.hpp"



