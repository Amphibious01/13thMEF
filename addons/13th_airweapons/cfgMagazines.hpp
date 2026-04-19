
class CfgMagazines 
{

	class CUP_PylonPod_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M;
	class rhs_mag_gau19_air_base;

	//////////////////////////////////////////// GUNS //////////////////////////////////////////////////////

	class 13th_M789: CUP_PylonPod_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M
	{
		displayName = "M230 Chaingun";
		hardpoints [] =
		{
			"13th_HEAVY_ROTARY",
			"13th_VENOM"
		};
		pylonWeapon = "13th_M230";
		ammo = "13th_30x113_M789_HEDP";
	};

	class 13th_GAU19_left: rhs_mag_gau19_air_base
	{
		scope=2;
		hardpoints[]=
		{
            "13TH_MELB_GAU19L"
		};

		pylonWeapon = "13th_GAU19";

		model="\rhsusf\addons\rhsusf_airweapons\MELB\rhsusf_g_GAU19_L";
		ammo = "13th_127x99_SLAP";

		initSpeed = 1800;
	};

	class 13th_GAU19_right: rhs_mag_gau19_air_base
	{
		scope=2;
		hardpoints[]=
		{
            "13TH_MELB_GAU19R"
		};

		pylonWeapon = "13th_GAU19";

		model="\rhsusf\addons\rhsusf_airweapons\MELB\rhsusf_g_GAU19_R";
		ammo = "13th_127x99_SLAP";

		initSpeed = 1800;
	};

	//////////////////////////////////////////// ROCKETS //////////////////////////////////////////////////////

	class FIR_Hydra_M229_P_7rnd_M;
	class FIR_Hydra_M229_P_19rnd_M; // HE
	class FIR_Hydra_M247_P_7rnd_M;
	class FIR_Hydra_M247_P_19rnd_M; // HEAT

	//////////////////////////////////////////// HEAT //////////////////////////////////////////////////////

	class 13th_HYDRA_HEAT_7RND_M: FIR_Hydra_M247_P_7rnd_M
	{
		displayName = "M247 HEAT Hydra w/ LAU-131";
		displayNameShort = "HYDRA HEAT";
		descriptionShort = "[13th] M247 7x HEAT HYDRA DUMB ROCKETS";
		model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_7x_green";
		hardpoints [] = 
		{
			"13th_HEAVY_ROTARY",
			"13th_VENOM"
		};
		pylonWeapon = "13th_HYDRA_HEAT";
		ammo = "13th_HYDRA_HEAT_Rocket";
	};

	class 13th_HYDRA_HEAT_19RND_M: FIR_Hydra_M247_P_19rnd_M
	{
		displayName = "M247 HEAT Hydra w/ LAU-61";
		displayNameShort = "HYDRA HEAT";
		descriptionShort = "[13th] M247 19x HEAT HYDRA DUMB ROCKETS";
		model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_19x_green";
		hardpoints [] = 
		{
			"13th_HEAVY_ROTARY",
			"13th_VENOM"
		};
		pylonWeapon = "13th_HYDRA_HEAT";
		ammo = "13th_HYDRA_HEAT_Rocket";
	};

	class 13th_HYDRA_MELB_HEAT_7RND_M: FIR_Hydra_M247_P_7rnd_M
	{
		displayName = "M247 HEAT Hydra w/ LAU-131";
		displayNameShort = "HYDRA HEAT";
		descriptionShort = "[13th] M247 7x HEAT HYDRA DUMB ROCKETS";
		model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_7x";
		hardpoints [] = 
		{
			"13th_MELB_OUTBOARD"
		};
		pylonWeapon = "13th_HYDRA_HEAT";
		ammo = "13th_HYDRA_HEAT_Rocket";
	};
/*
	class 13th_HYDRA_MELB_HEAT_19RND_M: FIR_Hydra_M247_P_19rnd_M
	{
		displayName = "M247 HEAT Hydra w/ LAU-61";
		displayNameShort = "HYDRA HEAT";
		descriptionShort = "[13th] M247 19x HEAT HYDRA DUMB ROCKETS";
		model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_19x";
		hardpoints [] = 
		{
			"13th_MELB_OUTBOARD"
		};
		pylonWeapon = "13th_HYDRA_HEAT";
		ammo = "13th_HYDRA_HEAT_Rocket";
	};
*/ 
	//////////////////////////////////////////// HE //////////////////////////////////////////////////////

	class 13th_HYDRA_HE_7RND_M: FIR_Hydra_M229_P_7rnd_M
	{
		displayName = "M229 HE Hydra w/ LAU-131";
		displayNameShort = "HYDRA HE";
		descriptionShort = "[13th] M229 7x HE HYDRA DUMB ROCKETS";
		model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_7x_green";
		hardpoints [] = 
		{
			"13th_HEAVY_ROTARY",
			"13th_VENOM"
		};
		pylonWeapon = "13th_HYDRA_HE";
		ammo = "13th_HYDRA_HE_Rocket";
	};

	class 13th_HYDRA_HE_19RND_M: FIR_Hydra_M229_P_19rnd_M
	{
		displayName = "M229 HE Hydra w/ LAU-61";
		displayNameShort = "HYDRA HE";
		descriptionShort = "[13th] M229 19x HE HYDRA DUMB ROCKETS";
		model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_19x_green";
		hardpoints [] = 
		{
			"13th_HEAVY_ROTARY",
			"13th_VENOM"
		};
		pylonWeapon = "13th_HYDRA_HE";
		ammo = "13th_HYDRA_HE_Rocket";
	};

	class 13th_HYDRA_MELB_HE_7RND_M: FIR_Hydra_M229_P_7rnd_M
	{
		displayName = "M229 HE Hydra w/ LAU-131";
		displayNameShort = "HYDRA HE";
		descriptionShort = "[13th] M229 7x HE HYDRA DUMB ROCKETS";
		model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_7x";
		hardpoints [] = 
		{
			"13th_MELB_OUTBOARD"
		};
		pylonWeapon = "13th_HYDRA_HE";
		ammo = "13th_HYDRA_HE_Rocket";
	};
/*
	class 13th_HYDRA_MELB_HE_19RND_M: FIR_Hydra_M229_P_19rnd_M
	{
		displayName = "M229 HE Hydra w/ LAU-61";
		displayNameShort = "HYDRA HE";
		descriptionShort = "[13th] M229 19x HE HYDRA DUMB ROCKETS";
		model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_19x";
		hardpoints [] = 
		{
			"13th_MELB_OUTBOARD"
		};
		pylonWeapon = "13th_HYDRA_HE";
		ammo = "13th_HYDRA_HE_Rocket";
	};
*/
	//////////////////////////////////////////// SMOKE //////////////////////////////////////////////////////

	class 13th_HYDRA_SMK_7RND_M: FIR_Hydra_M229_P_7rnd_M
	{
		displayName = "M274 SMK Hydra w/ LAU-131";
		displayNameShort = "HYDRA SMOKE";
		descriptionShort = "[13th] M274 7x SMOKE HYDRA DUMB ROCKETS";
		model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_7x_green";
		hardpoints [] = 
		{
			"13th_HEAVY_ROTARY",
			"13th_VENOM"
		};
		pylonWeapon = "13th_HYDRA_SMK";
		ammo = "13th_HYDRA_SMK_Rocket";
	};

	class 13th_HYDRA_SMK_19RND_M: FIR_Hydra_M229_P_19rnd_M
	{
		displayName = "M274 SMK Hydra w/ LAU-61";
		displayNameShort = "HYDRA SMOKE";
		descriptionShort = "[13th] M274 19x SMOKE HYDRA DUMB ROCKETS";
		model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_19x_green";
		hardpoints [] = 
		{
			"13th_HEAVY_ROTARY",
			"13th_VENOM"
		};
		pylonWeapon = "13th_HYDRA_SMK";
		ammo = "13th_HYDRA_SMK_Rocket";
	};

	class 13th_HYDRA_MELB_SMK_7RND_M: FIR_Hydra_M229_P_7rnd_M
	{
		displayName = "M274 SMK Hydra w/ LAU-131";
		displayNameShort = "HYDRA SMOKE";
		descriptionShort = "[13th] M229 7x SMOKE HYDRA DUMB ROCKETS";
		model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_7x";
		hardpoints [] = 
		{
			"13th_MELB_OUTBOARD"
		};
		pylonWeapon = "13th_HYDRA_SMK";
		ammo = "13th_HYDRA_SMK_Rocket";
	};
/*
	class 13th_HYDRA_MELB_SMK_19RND_M: FIR_Hydra_M229_P_19rnd_M
	{
		displayName = "M274 SMK Hydra w/ LAU-61";
		displayNameShort = "HYDRA SMOKE";
		descriptionShort = "[13th] M274 19x SMOKE HYDRA DUMB ROCKETS";
		model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_19x";
		hardpoints [] = 
		{
			"13th_MELB_OUTBOARD"
		};
		pylonWeapon = "13th_HYDRA_SMK";
		ammo = "13th_HYDRA_SMK_Rocket";
	};
*/
	//////////////////////////////////////////// HELLFIRES //////////////////////////////////////////////////////

	class PylonRack_4Rnd_ACE_Hellfire_AGM114K;

	class 13th_114K_4rnd: PylonRack_4Rnd_ACE_Hellfire_AGM114K
	{
		displayName = "4x AGM-114K Hellfire";
		descriptionShort = "[13th] AGM-114K SALH HEAT HELLFIRE";

		pylonWeapon = "13th_114K";
		hardpoints [] =
		{
			"13th_HEAVY_ROTARY"
		};
		ammo = "13th_114K_ammo";
	};
	
	class 13th_114K_2rnd: PylonRack_4Rnd_ACE_Hellfire_AGM114K
	{
		count = 2;
		displayName = "2x AGM-114K Hellfire";
		descriptionShort = "[13th] AGM-114K SALH HEAT HELLFIRE";

		pylonWeapon = "13th_114K";
		hardpoints [] =
		{
			"13th_HEAVY_ROTARY",
			"13th_MELB_OUTBOARD",
			"13th_VENOM"
		};
		ammo = "13th_114K_ammo";		

		model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x";
	};

	class PylonRack_4Rnd_ACE_Hellfire_AGM114N;

	class 13th_114N_4rnd: PylonRack_4Rnd_ACE_Hellfire_AGM114N
	{
		displayName = "4x AGM-114N Hellfire";
		descriptionShort = "[13th] AGM-114N SALH THERMOBARIC HELLFIRE";

		pylonWeapon = "13th_114N";
		hardpoints [] =
		{
			"13th_HEAVY_ROTARY"
		};
		ammo = "13th_114N_ammo";
	};
	
	class 13th_114N_2rnd: PylonRack_4Rnd_ACE_Hellfire_AGM114N
	{
		count = 2;
		displayName = "2x AGM-114N Hellfire";
		descriptionShort = "[13th] AGM-114N SALH THERMOBARIC HELLFIRE";

		pylonWeapon = "13th_114N";
		hardpoints [] =
		{
			"13th_HEAVY_ROTARY",
			"13th_MELB_OUTBOARD",
			"13th_VENOM"
		};
		ammo = "13th_114N_ammo";		

		model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x";
	};

	class PylonRack_4Rnd_ACE_Hellfire_AGM114L;

	class 13th_114L_4rnd: PylonRack_4Rnd_ACE_Hellfire_AGM114L
	{
		displayName = "4x AGM-114L Hellfire";
		descriptionShort = "[13th] AGM-114L RDR HEAT HELLFIRE";

		pylonWeapon = "13th_114L";
		hardpoints [] =
		{
			"13th_HEAVY_ROTARY"
		};
		ammo = "13th_114L_ammo";
	};
	
	class 13th_114L_2rnd: PylonRack_4Rnd_ACE_Hellfire_AGM114L
	{
		count = 2;
		displayName = "2x AGM-114L Hellfire";
		descriptionShort = "[13th] AGM-114L RDR HEAT HELLFIRE";

		pylonWeapon = "13th_114L";
		hardpoints [] =
		{
			"13th_HEAVY_ROTARY",
			"13th_MELB_OUTBOARD",
			"13th_VENOM"
		};
		ammo = "13th_114L_ammo";

		model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x";
	};

};