class CfgWeapons 
{

	class CUP_Vacannon_M230_veh;
	class FIR_RKT_Launcher;
	class ace_hellfire_launcher;
	class ace_hellfire_launcher_L;
	class ace_hellfire_launcher_N;
	class RHS_weap_gau19;

	class 13th_GAU19: RHS_weap_gau19
	{
		magazines [] = 
		{
			"13th_GAU19_left",
			"13th_GAU19_right"
		};
	};

	class 13th_M230: CUP_Vacannon_M230_veh 
	{
		magazines [] =
		{
			"13th_M789"
		};
	};

	class 13th_HYDRA_HEAT: FIR_RKT_Launcher
	{
		dispersion = 0.01;
		magazines [] = 
		{
			"13th_HYDRA_HEAT_7RND_M",
			"13th_HYDRA_HEAT_19RND_M",
			"13th_HYDRA_MELB_HEAT_7RND_M",
			"13th_HYDRA_MELB_HEAT_19RND_M",
		};
	};

	class 13th_HYDRA_HE: FIR_RKT_Launcher
	{
		dispersion = 0.01;
		magazines [] = 
		{
			"13th_HYDRA_HE_7RND_M",
			"13th_HYDRA_HE_19RND_M",
			"13th_HYDRA_MELB_HE_7RND_M",
			"13th_HYDRA_MELB_HE_19RND_M"
		};
	};

	class 13th_HYDRA_SMK: FIR_RKT_Launcher
	{
		dispersion = 0.1;
		magazines [] = 
		{
			"13th_HYDRA_SMK_7RND_M",
			"13th_HYDRA_SMK_19RND_M",
			"13th_HYDRA_MELB_SMK_7RND_M",
			"13th_HYDRA_MELB_SMK_19RND_M"
		};
	};

	class 13th_114K: ace_hellfire_launcher
	{
		magazines [] =
		{
			"13th_114K_4rnd",
			"13th_114K_2rnd"
		};
	};

	class 13th_114N: ace_hellfire_launcher_N
	{
		magazines [] =
		{
			"13th_114N_4rnd",
			"13th_114N_2rnd"
		};
	};

	class 13th_114L: ace_hellfire_launcher_L
	{
		magazines [] =
		{
			"13th_114L_4rnd",
			"13th_114L_2rnd"
		};
	};

};