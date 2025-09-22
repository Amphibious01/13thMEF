	class CUP_B_M1128_MGS_Woodland;
	class rhsusf_stryker_m1126_m2_base;
	class rhsusf_stryker_m1126_m2_wd: rhsusf_stryker_m1126_m2_base
	{
		class AnimationSources;
		class Turrets;
		class Hide_DUKE;
		class Hide_Towbar;
		class CargoTurret_01;
		class CargoTurret_02;
		class CargoTurret_03;
		class MainTurret;
		class UserActions;
	};
	class rhsusf_stryker_m1132_m2_base: rhsusf_stryker_m1126_m2_base
	{
		class EventHandlers;
		class AnimationSources;
		class UserActions;
		class Hide_DUKE;
		class Hide_Towbar;
		class Turrets;
		class CargoTurret_01;
		class CargoTurret_02;
		class CargoTurret_03;
		class MainTurret;
	};

	class 13th_M1132: rhsusf_stryker_m1132_m2_base
	{
		displayName = "[13th] M1132 Stryker (SMP/M2)";
		author="Waylen";
		faction="b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Crewman_01";
		rhs_decalParameters[]=
		{
			"['Label', 'dec_hull', 'HullDecals_Stryker_WD']"
		};
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_stryker_m1132_m2_wd.paa";

		scope = 2;
		scopeCurator = 2;
		side = 1;

		ace_repair_canRepair = 1;

		enginePower = 550;
		peakTorque = 3600;
		dampingRateDamaged = 1;

/*
		commented out cus of animationSources textures being fucked up
		hiddenSelections[]=
		{
			"Camo_1",	//1
			"Camo_2",	//2
			"Camo_3",	//3
			"Camo_4",	//4
			"Camo_5",	//5
			"Camo_Acc",	//6
			"Camo_AccA",	//7
			"Camo_DUKE",	//8
			"Camo_fc01",	//9
			"Camo_fc02",	//10
			"Camo_wc01",	//11
			"Camo_wc02",	//12
			"callsign1",	//13
			"callsign2",	//14
			"callsign3",	//15
			"callsign4",	//16
			"dec_hull",	//17
			"BFT_screen"	//18
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
			"\x\13thMEF\addons\13th_vehicles\data\m1132_slats_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1132_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
			"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"
		};
		class textureSources
		{
			class Olive
			{
				author="Cap";
				displayName="Woodland";
				textures[]=
				{
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
					"\x\13thMEF\addons\13th_vehicles\data\m1132_slats_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1132_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
					"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"
				};
			};
			class Tan
			{
				author="Cap";
				displayName="Desert";
				textures[]=
				{
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_d_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_d_co.paa",
					"\x\13thMEF\addons\13th_vehicles\data\m1132_slats_desert_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_d_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_d_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1132_d_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_ca.paa",
					"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_c_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa"
				};

			};
		};
*/

    class Turrets:Turrets
    {
        class CargoTurret_01:CargoTurret_01{};
        class CargoTurret_02:CargoTurret_02{};
        class CargoTurret_03:CargoTurret_03{};
        class MainTurret: MainTurret
        {
            magazines [] = 
            {
                "rhs_mag_400rnd_127x99_mag",
                "rhs_mag_400rnd_127x99_mag",
                "rhs_mag_400rnd_127x99_mag",
                "rhs_mag_400rnd_127x99_mag",
                "rhs_mag_400rnd_127x99_mag"
            };
            class OpticsIn 
            {
                class DaysightWFOV 
                { 
                    gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CROWS_monitor";
                    initAngleX = -15;
                    initAngleY = 0;
                    initFov = "0.7/3";
                    maxAngleX = 30;
                    maxAngleY = 100;
                    maxFov = "0.7/15";
                    maxMoveX = 0;
                    maxMoveY = 0;
                    maxMoveZ = 0;
                    minAngleX = -30;
                    minAngleY = -100;
					minFov=0.0233333;
                    minMoveX = 0;
                    minMoveY = 0;
                    minMoveZ = 0;
                    thermalMode [] = {0,1};
                    visionMode [] = {"Normal","TI"}; 						
				};
           };
        };
    };

		class AnimationSources: AnimationSources
		{
			class Hide_DUKE: Hide_DUKE
			{
				initPhase = 1;
			};
			class Hide_Towbar: Hide_Towbar
			{
				initPhase = 1;
			};
		};

		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3,
				"N",
				0,
				"D1",
				3.7,
				"D2",
				3.2,
				"D3",
				2.7,
				"D4",
				1.5,
				"D5",
				1,
				"D6",
				0.8
			};
			TransmissionRatios[]=
			{
				"High",
				8
			};
			AmphibiousRatios[]=
			{
				"R1",
				-10,
				"N",
				0,
				"D1",
				30
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};

		class UserActions: UserActions 
		{
			class CLEAR_OBSTACLE	
			{	
				displayName="<t color='#730901'>Clear Foliage</t>";	
				condition="(player in [driver this, this turretUnit [0]]) && (alive this) && (speed this <= 5)";	
				statement="this call OMDF_fnc_clearFoliageAction";	
				radius=50;	
				priority=10.1;	
				onlyforplayer=1;	
				showWindow=0;	
				hideOnUse=1;	
				position = "camera";
			};	
		};
		
		class ace_cargo
		{
			class cargo
			{
				class ACE_Wheel
				{
					type="FlexibleTank_01_forest_F";
					amount=2;
				};
			};
		};

		KICKERINVENTORY

		GROUND_SP_INFO(M1126 Stryker,M1132 w/ Plow,1,0)
	};

	class 13th_M1126_M2: rhsusf_stryker_m1126_m2_wd
	{
		displayName = "[13th] M1126 Stryker (M2)";
		author="Waylen";
		faction="b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Crewman_01";

		enginePower = 550;
		peakTorque = 3600;

/*
		commented out cus of the animationSources' textures going awol
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4",
			"Camo_5",
			"Camo_Acc",
			"Camo_AccA",
			"Camo_DUKE",
			"Camo_fc01",
			"Camo_fc02",
			"Camo_wc01",
			"Camo_wc02",
			"callsign1",
			"callsign2",
			"callsign3",
			"callsign4",
			"dec_hull",
			"BFT_screen"
		};
		hiddenSelectionsTextures[]=
		{
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
					"\x\13thMEF\addons\13th_vehicles\data\m1132_slats_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1132_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
					"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"
		};
		class textureSources
		{
			class Olive
			{
				author="Cap";
				displayName="Woodland";
				textures[]=
				{
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
					"\x\13thMEF\addons\13th_vehicles\data\m1132_slats_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
					"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"
				};
			};
			class Tan
			{
				author="Cap";
				displayName="Desert";
				textures[]=
				{
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_d_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_d_co.paa",
					"\x\13thMEF\addons\13th_vehicles\data\m1126_slats_desert_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_d_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_d_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_ca.paa",
					"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_c_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa"
				};

			};
		};
*/

	class UserActions: UserActions 
	{
		class CLEAR_OBSTACLE	
		{	
			displayName="<t color='#730901'>Clear Foliage</t>";	
			condition="(player in [driver this, this turretUnit [0]]) && (alive this) && (speed this <= 5)";	
			statement="this call OMDF_fnc_clearFoliageAction";	
			radius=10;	
			priority=10.1;	
			onlyforplayer=1;	
			showWindow=0;	
			hideOnUse=1;	
		};	
	};

    class Turrets:Turrets
    {
        class CargoTurret_01:CargoTurret_01{};
        class CargoTurret_02:CargoTurret_02{};
        class CargoTurret_03:CargoTurret_03{};
        class MainTurret: MainTurret
        {
            magazines [] = 
            {
                "rhs_mag_400rnd_127x99_mag",
                "rhs_mag_400rnd_127x99_mag",
                "rhs_mag_400rnd_127x99_mag",
                "rhs_mag_400rnd_127x99_mag",
                "rhs_mag_400rnd_127x99_mag"
            };
            class OpticsIn 
            {
                class DaysightWFOV 
                { 
                    gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CROWS_monitor";
                    initAngleX = -15;
                    initAngleY = 0;
                    initFov = "0.7/3";
                    maxAngleX = 30;
                    maxAngleY = 100;
                    maxFov = "0.7/15";
                    maxMoveX = 0;
                    maxMoveY = 0;
                    maxMoveZ = 0;
                    minAngleX = -30;
                    minAngleY = -100;
					minFov=0.0233333;
                    minMoveX = 0;
                    minMoveY = 0;
                    minMoveZ = 0;
                    thermalMode [] = {0,1};
                    visionMode [] = {"Normal","TI"}; 						
				};
           };
        };
    };

		class AnimationSources: AnimationSources
		{
			class Hide_DUKE: Hide_DUKE
			{
				initPhase = 1;
			};
			class Hide_Towbar: Hide_Towbar
			{
				initPhase = 1;
			};
		};

		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3,
				"N",
				0,
				"D1",
				3.7,
				"D2",
				3.2,
				"D3",
				2.7,
				"D4",
				1.5,
				"D5",
				1,
				"D6",
				0.8
			};
			TransmissionRatios[]=
			{
				"High",
				8
			};
			AmphibiousRatios[]=
			{
				"R1",
				-10,
				"N",
				0,
				"D1",
				30
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};

		KICKERINVENTORY

		ace_cargo_space = 8;
		class ace_cargo
		{
			class cargo
			{
				class ACE_Wheel
				{
					type="FlexibleTank_01_forest_F";
					amount=2;
				};
			};
		};


		GROUND_SP_INFO(M1126 Stryker,M2,1,0)
	};