// these are the older OIF style humvees
// think teenage dirtbag B)

	class rhsusf_m998_w_4dr;
	class rhsusf_m1045_w;
	class rhsusf_m1043_w_m2;
	class rhsusf_m1025_w;

	class rhsusf_m1045_w_s: rhsusf_m1045_w
	{
		class AnimationSources;
		class hide_snorkel;
		class hide_CIP;
		class hide_BFT;
		class Turrets;
		class TOW_Turret;
		class CargoTurret_01;
		class CargoTurret_02;
		class CargoTurret_03;
		class CargoTurret_04;
		class CargoTurret_05;
		class MainTurret;
	};
	class rhsusf_m1043_w_s: rhsusf_m1025_w
	{
		class AnimationSources;
		class hide_snorkel;
		class hide_CIP;
		class hide_BFT;
	};
	class rhsusf_m1043_w_s_m2: rhsusf_m1043_w_m2
	{
		class AnimationSources;
		class hide_snorkel;
		class hide_CIP;
		class hide_BFT;
	};



	class 13th_M998: rhsusf_m998_w_4dr
	{
		displayName="[13th] M998 HMMVW";
		author="Waylen";
		faction="b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Rifleman_01";

		BASICINV	

	};

	class 13th_M1043_M2: rhsusf_m1043_w_s_m2
	{
		displayName = "[13th] M1043 HMMVW (M2)";
		author = "Waylen";
		faction = "b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Rifleman_01";

		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"\x\13thMEF\addons\13th_vehicles\data\m1043_base_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"\x\13thMEF\addons\13th_vehicles\data\humvee_decals.paa",
			""
		};
		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				author="13th MEF";
				textures[]=
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"\x\13thMEF\addons\13th_vehicles\data\m1043_base_co.paa",
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
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
					"\x\13thMEF\addons\13th_vehicles\data\m1043_desert_co.paa"
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

		BASICINV
		class AnimationSources: AnimationSources 
		{
			class hide_snorkel: hide_snorkel
			{
				initPhase = 1;
			};
			class hide_CIP: hide_CIP
			{
				initPhase = 1;
			};
			class hide_BFT: hide_BFT
			{
				initPhase = 1;
			};
		};
	};
	
	class 13th_M1043: rhsusf_m1043_w_s
	{
		displayName = "[13th] M1043 HMMVW";
		author = "Waylen";
		faction = "b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Rifleman_01";

		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"\x\13thMEF\addons\13th_vehicles\data\m1043_base_co.paa",
			"\x\13thMEF\addons\13th_vehicles\data\humvee_decals.paa",
			""
		};
		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				author="13th MEF";
				textures[]=
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"\x\13thMEF\addons\13th_vehicles\data\m1043_base_co.paa",
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
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
					"\x\13thMEF\addons\13th_vehicles\data\m1043_desert_co.paa"
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

		BASICINV
		class AnimationSources: AnimationSources 
		{
			class hide_snorkel: hide_snorkel
			{
				initPhase = 1;
			};
			class hide_CIP: hide_CIP
			{
				initPhase = 1;
			};
			class hide_BFT: hide_BFT
			{
				initPhase = 1;
			};
		};
	};

	class 13th_M1045: rhsusf_m1045_w_s
	{
		displayName = "[13th] M1045A2 HMMVW (TOW)";
		author = "Waylen";
		faction = "b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Rifleman_01";

		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"\x\13thMEF\addons\13th_vehicles\data\m1043_base_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",
			""
		};
		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				author="13th MEF";
				textures[]=
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"\x\13thMEF\addons\13th_vehicles\data\m1043_base_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",
					""
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
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
					"\x\13thMEF\addons\13th_vehicles\data\m1043_desert_co.paa"
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

		class Turrets:Turrets 
		{
			class CargoTurret_01:CargoTurret_01{};
			class CargoTurret_02:CargoTurret_02{};
			class CargoTurret_03:CargoTurret_03{};
			class CargoTurret_04:CargoTurret_04{};
			class CargoTurret_05:CargoTurret_05{};
			//class MainTurret:MainTurret{};			
			class TOW_Turret:TOW_Turret
			{
				magazines [] =
				{
					"rhs_mag_TOW2a",
					"rhs_mag_TOW2a",
					"rhs_mag_TOW2a",
					"rhs_mag_TOW2a",
					"rhs_mag_TOW2a",
					"rhs_mag_TOW2a",
					"rhs_mag_TOW2bb"
				};
				class OpticsIn
				{
					class Wide
					{
						gunnerOpticsModel = "\rhsusf\addons\rhsusf_heavyweapons\TOW\TOW_optic";
                    	initAngleX = -15;
                    	initAngleY = 0;
                    	initFov = "0.7/3";
                    	maxAngleX = 30;
                    	maxAngleY = 100;
                    	maxFov = "0.7/3";
                    	maxMoveX = 0;
                    	maxMoveY = 0;
                    	maxMoveZ = 0;
                    	minAngleX = -30;
                    	minAngleY = -100;
                    	minFov = "0.7/15";
                    	minMoveX = 0;
                    	minMoveY = 0;
                    	minMoveZ = 0;
                    	thermalMode [] = {0,1};
                    	visionMode [] = {"Normal","TI"}; 						
					};
				};
			};
		};

		BASICINV
		class AnimationSources: AnimationSources 
		{
			class hide_snorkel: hide_snorkel
			{
				initPhase = 1;
			};
			class hide_CIP: hide_CIP
			{
				initPhase = 1;
			};
			class hide_BFT: hide_BFT
			{
				initPhase = 1;
			};
		};
	};
