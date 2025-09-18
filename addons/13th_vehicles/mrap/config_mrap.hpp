
class rhsusf_MATV_SOF_CROWS_M2_base;
class rhsusf_m1245_m2crows_socom_d: rhsusf_MATV_SOF_CROWS_M2_base
{
    class Turrets;
    class CROWS_Turret;
    class DaysightNFOV;
    class DaysightVNFOV;
    class DaysightWFOV;
    class CargoTurret_01;
    class CargoTurret_02;
    class CoDriverTurret;
};

class rhsusf_CGRCAT1A2_usmc_wd;
class rhsusf_CGRCAT1A2_M2_usmc_wd;

class 13th_M1245: rhsusf_m1245_m2crows_socom_d
{
    displayName = "[13th] M1245 MATV (CROWS M2)";
	author="Waylen";
	faction="b_oseamarinecorps";
	crew = "B_BOseaMarineCorps_Rifleman_01";

    BASICINV

    maximumLoad = 4000;
	ace_cargo_space = 6;


    hiddenSelections [] = 
    {
        "camo","camo1","camo2",
        "camo3","camo4","pintle",
        "camo5","camo6","camo9",
        "camo10","camoH24","BFT_screen"
    };
    hiddenSelectionsTextures [] =
    {
		"\x\13thMEF\addons\13th_vehicles\data\m1245_ext_wd_co.paa",
        "rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa",
        "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
        "",
        "rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
        "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
        "rhsusf\addons\rhsusf_caiman\data\m153_WD_co.paa",
        "rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_wd_co.paa",
        "rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1_wd_CO.paa",
        "rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1QNet_wd_CA.paa",
        "rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa"
    };

    class textureSources 
    {
        class standard
        {
            displayName = "Woodland";
            author = "13thMEF";
            textures[] = 
            {
	        	"\x\13thMEF\addons\13th_vehicles\data\m1245_ext_wd_co.paa",
                "rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa",
                "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
                "",
                "rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
                "rhsusf\addons\rhsusf_caiman\data\m153_WD_co.paa",
                "rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_wd_co.paa",
                "rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1_wd_CO.paa",
                "rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1QNet_wd_CA.paa",
                "rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa"
            };
			factions[]=
			{
				"b_oseamarinecorps"
			};        
        };
        class desert
        {
            displayName = "Desert";
            author = "13thMEF";
            textures[] = 
            {
	        	"\x\13thMEF\addons\13th_vehicles\data\m1245_ext_d_co.paa",
                "rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa",
                "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
                "",
                "rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
                "rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
                "rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_d_co.paa",
                "rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1_CO.paa",
                "rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1QNet_CA.paa",
                "rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_des_co.paa"
            };
			factions[]=
			{
				"b_oseamarinecorps"
			};        
        };    
    };

    class Turrets:Turrets
    {
        class CargoTurret_01:CargoTurret_01{};
        class CargoTurret_02:CargoTurret_02{};
        class CoDriverTurret:CoDriverTurret{};
        class CROWS_Turret: CROWS_Turret
        {
            magazines [] = 
            {
                "rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red",
                "rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red",
                "rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red",
                "rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red"
            };
            class OpticsIn 
            {

                class DaysightWFOV 
                { 
                    gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CROWS_monitor";
                    initAngleX = -15;
                    initAngleY = 0;
                    initFov = 0.7;
                    maxAngleX = 45;
                    maxAngleY = 100;
                    maxFov = 0.7;
                    maxMoveX = 0;
                    maxMoveY = 0;
                    maxMoveZ = 0;
                    minAngleX = -45;
                    minAngleY = -100;
                    minFov = 0.7;
                    minMoveX = 0;
                    minMoveY = 0;
                    minMoveZ = 0;
                    thermalMode [] = {0,1};
                    visionMode [] = {"Normal","TI"}; 
 					opticsDisplayName="1.0x";
					hitpoint="Hit_Optic_CROWS_Day";
                };
                class DaysightNFOV: DaysightWFOV 
                { 
					opticsDisplayName="15.0x";
					initFov=0.0466667;
					minFov=0.0466667;
					maxFov=0.0466667;
                };
                class DaysightVNFOV:DaysightNFOV 
                { 
					opticsDisplayName="30.0x";
					initFov=0.0233333;
					minFov=0.0233333;
					maxFov=0.0233333;
                }; 
           };
        };
    };
};

class 13th_CAT1A2: rhsusf_CGRCAT1A2_usmc_wd
{
    displayName = "[13th] CGR CAT1A2";
	author="Waylen";
	faction="b_oseamarinecorps";
	crew = "B_BOseaMarineCorps_Rifleman_01";

    BASICINV

	ace_cargo_space = 8;
    maximumLoad = 5500;

    hiddenSelections [] = 
    {
        "camo","camo1","camo2","pintle"
    };
    hiddenSelectionsTextures [] =
    {
		"\x\13thMEF\addons\13th_vehicles\data\cat1a2_body_co.paa",
        "",
        "rhsusf\addons\rhsusf_rg33l\data\MCTAGS_WD_CO.paa",
        "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
    };

    class textureSources 
    {
        class standard
        {
            displayName = "Woodland";
            author = "13thMEF";
            textures[] = 
            {
		        "\x\13thMEF\addons\13th_vehicles\data\cat1a2_body_co.paa",
                 "",
                "rhsusf\addons\rhsusf_rg33l\data\MCTAGS_WD_CO.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
            };
			factions[]=
			{
				"b_oseamarinecorps"
			};        
        };
        class desert
        {
            displayName = "Desert";
            author = "13thMEF";
            textures[] = 
            {
		        "\x\13thMEF\addons\13th_vehicles\data\cat1a2_body_d_co.paa",
                "",
                "rhsusf\addons\rhsusf_rg33l\data\MCTAGS_CO.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
            };
			factions[]=
			{
				"b_oseamarinecorps"
			};        
        };    
    };
};

class 13th_CAT1A2_M2: rhsusf_CGRCAT1A2_M2_usmc_wd
{
    displayName = "[13th] CGR CAT1A2 (M2)";
	author="Waylen";
	faction="b_oseamarinecorps";
	crew = "B_BOseaMarineCorps_Rifleman_01";

    BASICINV

	ace_cargo_space = 8;
    maximumLoad = 5500;

    hiddenSelections [] = 
    {
        "camo","camo1","camo2","pintle"
    };
    hiddenSelectionsTextures [] =
    {
		"\x\13thMEF\addons\13th_vehicles\data\cat1a2_body_co.paa",
        "",
        "rhsusf\addons\rhsusf_rg33l\data\MCTAGS_WD_CO.paa",
        "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
    };

    class textureSources 
    {
        class standard
        {
            displayName = "Woodland";
            author = "13thMEF";
            textures[] = 
            {
		        "\x\13thMEF\addons\13th_vehicles\data\cat1a2_body_co.paa",
                 "",
                "rhsusf\addons\rhsusf_rg33l\data\MCTAGS_WD_CO.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
            };
			factions[]=
			{
				"b_oseamarinecorps"
			};        
        };
        class desert
        {
            displayName = "Desert";
            author = "13thMEF";
            textures[] = 
            {
		        "\x\13thMEF\addons\13th_vehicles\data\cat1a2_body_d_co.paa",
                "",
                "rhsusf\addons\rhsusf_rg33l\data\MCTAGS_CO.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
            };
			factions[]=
			{
				"b_oseamarinecorps"
			};        
        };    
    };
};