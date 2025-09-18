// these are the uparmored humvees

	class rhsusf_m1151_m2_v3_usmc_wd;
	class rhsusf_m1151_m240_v3_usmc_wd;
	class rhsusf_m1151_usmc_wd;
	class rhsusf_M1165A1_GMV_SAG2_M134D_M240_base;
	class rhsusf_m1165a1_gmv_m134d_m240_socom_d:rhsusf_M1165A1_GMV_SAG2_M134D_M240_base
	{
		class AnimationSources;
		class Turrets;
		class SAG_Turret;
		class CoDriverTurret;
		class SwingArm_L_Turret;
		class SwingArm_R_Turret;
		class CargoTurret_01;
		class CargoTurret_02;
		class CargoTurret_03;
		class CargoTurret_04;
	};

    //// KICKER HUMVEE  ////
	class 13th_M1165A1: rhsusf_m1165a1_gmv_m134d_m240_socom_d 
	{
		displayName = "[13th] M1165A1 HMMVW (M134/M240)";
		author="Waylen";
		side = 1;
		faction="b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Rifleman_01";

		scope = 2;
		scopeCurator = 2;

		textureList[]=
		{
			"rhs_sofwoodland", 1
		};

		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="CUP_Vlmg_M134_veh";
			};
			class Revolving
			{
				source="revolving";
				weapon="CUP_Vlmg_M134_veh";
			};
			class muzzle_rot_MG
			{
				source="ammorandom";
				weapon="CUP_Vlmg_M134_veh";
			};
			class Hide_Scopes
			{
				source="user";
				initPhase=0;
				useSource=1;
				animPeriod=0.1;
				displayName="Hide DCL-120 sights";
			};
			class Gatling_1
			{
				source="revolving";
				weapon="CUP_Vlmg_M134_veh";
			};
		};

		class Turrets: Turrets
		{
			class SAG_Turret: SAG_Turret
			{
				weapons[]=
				{
					"CUP_Vlmg_M134_veh"
				};
				magazines[]=
				{
					"CUP_4000Rnd_TE1_Red_Tracer_762x51_M134_M",
					"CUP_4000Rnd_TE1_Red_Tracer_762x51_M134_M"
				};
			};
			class CoDriverTurret: CoDriverTurret{};
			class SwingArm_L_Turret: SwingArm_L_Turret{};
			class SwingArm_R_Turret: SwingArm_R_Turret{};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
			class CargoTurret_04: CargoTurret_04{};
		};

		KICKERINVENTORY

		GROUND_SP_INFO(HMMVWs,M1165A1 w/ M134D,0,0)
	};

	class 13th_M1151_M2: rhsusf_m1151_m2_v3_usmc_wd
	{
		displayName="[13th] M1151 HMMVW (M2)";
		author="Waylen";
		faction="b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Rifleman_01";

		BASICINV

		hiddenSelections [] = {
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo19",
		};
		HiddenSelectionsTextures[]=
		{
			"\x\13thMEF\addons\13th_vehicles\data\m1151_body_co.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
			"rhsusf\addons\rhsusf_rg33l\data\mctags_wd_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
		};

		class textureSources 
		{
			class standard
			{
				displayName="Woodland";
				author="13th MEF";
				textures[]=
				{
					"\x\13thMEF\addons\13th_vehicles\data\m1151_body_co.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
					"rhsusf\addons\rhsusf_rg33l\data\mctags_wd_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
				};
				factions[]=
				{
					"b_oseamarinecorps"
				};
			};
			class desert
			{
				displayName="Desert";
				author="13th MEF";
				textures[]=
				{
					"\x\13thMEF\addons\13th_vehicles\data\m1151_desert_co.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
					"rhsusf\addons\rhsusf_rg33l\data\mctags_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
				};
				factions[]=
				{
					"b_oseamarinecorps"
				};
			};
		};
		textureList[]=
		{
			"standard",
			1
		};
		
	};

	class 13th_M1151_M240: rhsusf_m1151_m240_v3_usmc_wd
	{
		displayName="[13th] M1151 HMMVW (M240)";
		author="Waylen";
		faction="b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Rifleman_01";

		BASICINV

		hiddenSelections [] = {
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo19",
		};
		HiddenSelectionsTextures[]=
		{
			"\x\13thMEF\addons\13th_vehicles\data\m1151_body_co.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
			"rhsusf\addons\rhsusf_rg33l\data\mctags_wd_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa"
		};
		class textureSources {
			class standard
			{
				displayName="Woodland";
				author="13th MEF";
				textures[]=
				{
					"\x\13thMEF\addons\13th_vehicles\data\m1151_body_co.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
					"rhsusf\addons\rhsusf_rg33l\data\mctags_wd_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
					"rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa"
				};
				factions[]=
				{
					"b_oseamarinecorps"
				};
			};
			class desert
			{
				displayName="Desert";
				author="13th MEF";
				textures[]=
				{
					"\x\13thMEF\addons\13th_vehicles\data\m1151_desert_co.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
					"rhsusf\addons\rhsusf_rg33l\data\mctags_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
					"rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_des_co.paa"
				};
				factions[]=
				{
					"b_oseamarinecorps"
				};
			};
		};
		textureList[]=
		{
			"standard",
			1
		};
	};

	class 13th_M1151: rhsusf_m1151_usmc_wd
	{
		displayName="[13th] M1151 HMMVW";
		author="Waylen";
		faction="b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Rifleman_01";

		BASICINV

		hiddenSelections [] = {
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6"
		};
		HiddenSelectionsTextures[]=
		{
			"\x\13thMEF\addons\13th_vehicles\data\m1151_body_co.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa"
		};
		class textureSources {
			class standard
			{
				displayName="Woodland";
				author="13th MEF";
				textures[]=
				{
					"\x\13thMEF\addons\13th_vehicles\data\m1151_body_co.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa"
				};
				factions[]=
				{
					"b_oseamarinecorps"
				};
			};
			class desert
			{
				displayName="Desert";
				author="13th MEF";
				textures[]=
				{
					"\x\13thMEF\addons\13th_vehicles\data\m1151_desert_co.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa"
				};
				factions[]=
				{
					"b_oseamarinecorps"
				};
			};
		};
		textureList[]=
		{
			"standard",
			1
		};
	};
