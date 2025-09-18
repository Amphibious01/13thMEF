
class CfgAmmo
{

	class rhs_ammo_127x99_SLAP_Tracer_Red;

	class 13th_127x99_SLAP: rhs_ammo_127x99_SLAP_Tracer_Red
	{
		hit = 65;
	};

	class CUP_B_30x113mm_M789_HEDP_Red_Tracer;

	class 13th_30x113_M789_HEDP: CUP_B_30x113mm_M789_HEDP_Red_Tracer
	{
		hit = 140;
		indirectHitRange = 5.5;
		//indirectHit = 12.5;
		explosive=0.4;
	};

	class FIR_Hydra_M247_Rocket;
	class 13th_HYDRA_HEAT_Rocket: FIR_Hydra_M247_Rocket
	{
		indirectHit = 80;
		indirectHitRange = 10;
		hit = 1000;
		submunitionAmmo = "ammo_Penetrator_Titan_AT_long";

        ace_frag_metal = 300;
        ace_frag_charge = 500;
        ace_frag_gurney_c = 2700;
        ace_frag_gurney_k = 1/2;
        ace_frag_classes[] = {"ACE_frag_small_HD"};

		sound [] = {"CUP\Weapons\CUP_Weapons_VehicleWeapons\data\sound\rocketLauncher_Shot21",3.16228,1};

		model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M229_fly";
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M229";
	};

	class FIR_Hydra_M229_Rocket;
	class 13th_HYDRA_HE_Rocket: FIR_Hydra_M229_Rocket
	{
		indirectHit = 140;
		indirectHitRange = 25;
		hit = 400;

        ace_frag_metal = 450;
        ace_frag_charge = 500;
        ace_frag_gurney_c = 2700;
        ace_frag_gurney_k = 1/2;
        ace_frag_classes[] = {"ACE_frag_medium_HD"};

		sound [] = {"CUP\Weapons\CUP_Weapons_VehicleWeapons\data\sound\rocketLauncher_Shot21",3.16228,1};

		model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M229_fly";
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M229";

		fuseDistance = 100;
	};

	class 13th_HYDRA_SMK_Rocket: FIR_Hydra_M247_Rocket
	{
		indirectHit = 10;
		indirectHitRange = 5;
		hit = 20;

		triggerOnImpact = 1;
        triggerDistance = 10;
		deleteParentWhenTriggered = 0;	

		submunitionAmmo = "smokeShellArty";
		submunitionInitSpeed = 10;
		submunitionParentSpeedCoef = 0.05;
		submunitionInitialOffset [] = {0,0,-0.2};
        submunitionConeType[] = {"poissondisccenter",3};
        submunitionConeAngle = 10;

		explosionEffects = "ExploAmmoExplosion";

		sound [] = {"CUP\Weapons\CUP_Weapons_VehicleWeapons\data\sound\rocketLauncher_Shot21",3.16228,1};

		model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M229_fly";
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M229";
	};
// HEShellExplosion
	class ACE_Hellfire_AGM114K;
	class ACE_Hellfire_AGM114N;
	class ACE_Hellfire_AGM114L;

	// class Bomb_03_F;
	// class 13th_114N_warhead: Bomb_03_F
	// {
	// 	//triggerTime = 0.05;

    //     // ace_frag_metal = 600;
    //     // ace_frag_charge = 1000;
    //     // ace_frag_gurney_c = 2700;
    //     // ace_frag_gurney_k = 1/2;
    //     // ace_frag_classes[] = {"ACE_frag_large_HD"};

	// 	// explosionEffects = "HEShellExplosion";

	// 	// ace_frag_skip = 0;

	// 	// indirectHit = 300;
	// 	// indirectHitRange = 30;
	// 	// hit = 100;
	// };

	class 13th_114K_ammo: ACE_Hellfire_AGM114K
	{
        ace_frag_metal = 300;
        ace_frag_charge = 200;
        ace_frag_gurney_c = 2700;
        ace_frag_gurney_k = 1/2;
        ace_frag_classes[] = {"ACE_frag_medium_HD"};	

		explosionEffects = "HEShellExplosion";

		indirectHit = 150;
		indirectHitRange = 15;	
		class ace_missileguidance: ace_missileguidance_type_Hellfire {
            enabled = 1;
        };
	};

	class 13th_114N_ammo: ACE_Hellfire_AGM114N
	{
		// triggerDistance = 25;
		// deleteParentWhenTriggered = 1;	

		// submunitionAmmo = "13th_114N_warhead";
		// submunitionInitSpeed = 0;
		// submunitionParentSpeedCoef = 0;
		// submunitionInitialOffset [] = {0,0,-0.2};
        // submunitionConeType[] = {"poissondisccenter",1};
        // submunitionConeAngle = 1;

        ace_frag_metal = 600;
        ace_frag_charge = 400;
        ace_frag_gurney_c = 2700;
        ace_frag_gurney_k = 1/2;
        ace_frag_classes[] = {"ACE_frag_large_HD"};

		indirectHit = 50;
		indirectHitRange = 35;
		class ace_missileguidance: ace_missileguidance_type_Hellfire {
            enabled = 1;
        };
	};

	class 13th_114L_ammo: ACE_Hellfire_AGM114L
	{
        ace_frag_metal = 300;
        ace_frag_charge = 200;
        ace_frag_gurney_c = 2700;
        ace_frag_gurney_k = 1/2;
        ace_frag_classes[] = {"ACE_frag_medium_HD"};	

		explosionEffects = "HEShellExplosion";

		indirectHit = 150;
		indirectHitRange = 15;	
        class ace_missileguidance: ace_missileguidance {
            canVanillaLock = 1;
            enabled = 1; 
            seekLastTargetPos = 0;
            defaultSeekerType = "MillimeterWaveRadar";
            seekerTypes[] = { "MillimeterWaveRadar" };
            defaultSeekerLockMode = "LOBL";
            seekerLockModes[] = { "LOBL" };

            activeRadarEngageDistance = 1000;
            seekerMaxRange = 2000; 
        };
	};


};
