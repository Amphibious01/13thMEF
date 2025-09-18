class CfgPatches 
{
    class 13th_helmets 
	{
        units [] = {};
        vehicles [] = {};
        requiredVersion = 1;
        requiredAddons[] = 
        {
            "XYI_USMC_ASSET"
        };
    };
};

class cfgWeapons
{

    class H_HelmetB;
    class HeadgearItem; 

    class 13th_baseHelmet: H_HelmetB 
    {
        author = "13th MEF";
        scope = 0;
        displayname = "i hate naya";
        picture = "";
        model = "";
		ctab_camera = 1;

		ace_hearing_protection = 0.5;
		ace_hearing_lowerVolume = 0.5;

        class ItemInfo: HeadgearItem
        {
            mass = 5;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=10;
                    passThrough=0.3;
                };
            };                
        };
    };

    class 13th_Boonie_WD: 13th_baseHelmet 
    {
        scope = 2;
        displayname = "[13] Boonie (WD)";
		model="\XYI_USMC_ASSET\model\E_Panama_USMC_1.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"XYI_USMC_ASSET\data\Helmet\E_Panama_MarpatWoodland_co.paa"
		};  
        class ItemInfo: ItemInfo 
        {
			uniformModel="\XYI_USMC_ASSET\model\E_Panama_USMC_1.p3d";
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"XYI_USMC_ASSET\data\Helmet\E_Panama_MarpatDesert_co.paa"
			};
			mass=5;
        };
    };
    
    class 13th_Boonie_D: 13th_baseHelmet 
    {
        scope = 2;
        displayname = "[13] Boonie (D)";
		model="\XYI_USMC_ASSET\model\E_Panama_USMC_1.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"XYI_USMC_ASSET\data\Helmet\E_Panama_MarpatDesert_co.paa"
		};  
        class ItemInfo: ItemInfo 
        {
			uniformModel="\XYI_USMC_ASSET\model\E_Panama_USMC_1.p3d";
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
                "XYI_USMC_ASSET\data\Helmet\E_Panama_MarpatDesert_co.paa"
			};
			mass=5;
        };
    };

    class 13th_LWH_D: 13th_baseHelmet
    {
        scope = 2;
        displayname = "[13] LWH (D)";
		model="\XYI_USMC_ASSET\model\LWH_USMC_1.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"XYI_USMC_ASSET\data\Helmet\D_LWH_MarpatDesert_co.paa"
		};
        class ItemInfo: ItemInfo 
        {
			uniformModel="\XYI_USMC_ASSET\model\LWH_USMC_1.p3d";
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"XYI_USMC_ASSET\data\Helmet\D_LWH_MarpatDesert_co.paa"
			};            
        };
    };

    class 13th_LWH_WD: 13th_baseHelmet
    {
        scope = 2;
        displayname = "[13] LWH (WD)";
		model="\XYI_USMC_ASSET\model\LWH_USMC_1.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"XYI_USMC_ASSET\data\Helmet\D_LWH_MarpatWoodland_co.paa"
		};
        class ItemInfo: ItemInfo 
        {
			uniformModel="\XYI_USMC_ASSET\model\LWH_USMC_1.p3d";
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"XYI_USMC_ASSET\data\Helmet\D_LWH_MarpatWoodland_co.paa"
			};      
        };
    };

	class 13th_LWH_GOGGLES_1_WD: 13th_LWH_WD
	{
		displayName = "[13] LWH (WD / ESS 1)";
		model="\XYI_USMC_ASSET\model\LWH_USMC_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\XYI_USMC_ASSET\model\LWH_USMC_2.p3d";
		};
	};

	class 13th_LWH_GOGGLES_1_D: 13th_LWH_D
	{
		displayName = "[13] LWH (D / ESS 1)";
		model="\XYI_USMC_ASSET\model\LWH_USMC_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\XYI_USMC_ASSET\model\LWH_USMC_2.p3d";
		};
	};

	class 13th_LWH_GOGGLES_BOWMAN_WD: 13th_LWH_WD
	{
		displayName = "[13] LWH (WD / ESS / Headset)";
		model="\XYI_USMC_ASSET\model\LWH_USMC_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\XYI_USMC_ASSET\model\LWH_USMC_3.p3d";
		};
	};

	class 13th_LWH_GOGGLES_BOWMAN_D: 13th_LWH_D
	{
		displayName = "[13] LWH (D / ESS / Headset)";
		model="\XYI_USMC_ASSET\model\LWH_USMC_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\XYI_USMC_ASSET\model\LWH_USMC_3.p3d";
		};
	};

	class 13th_LWH_BOWMAN_WD: 13th_LWH_WD
	{
		displayName = "[13] LWH (WD / Headset)";
		model="\XYI_USMC_ASSET\model\LWH_USMC_4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\XYI_USMC_ASSET\model\LWH_USMC_4.p3d";
		};
	};

	class 13th_LWH_BOWMAN_D: 13th_LWH_D
	{
		displayName = "[13] LWH (D / Headset)";
		model="\XYI_USMC_ASSET\model\LWH_USMC_4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\XYI_USMC_ASSET\model\LWH_USMC_4.p3d";
		};
	};

	class 13th_LWH_GOGGLES_2_WD: 13th_LWH_WD
	{
		displayName = "[13] LWH (WD / ESS 2)";
		model="\XYI_USMC_ASSET\model\LWH_USMC_5.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\XYI_USMC_ASSET\model\LWH_USMC_5.p3d";
		};
	};

	class 13th_LWH_GOGGLES_2_D: 13th_LWH_D
	{
		displayName = "[13] LWH (D / ESS 2)";
		model="\XYI_USMC_ASSET\model\LWH_USMC_5.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\XYI_USMC_ASSET\model\LWH_USMC_5.p3d";
		};
	};

	class 13th_LWH_GOGGLES_RHINO_WD: 13th_LWH_WD
	{
		displayName = "[13] LWH (WD / ESS / Rhino)";
		model="\XYI_USMC_ASSET\model\LWH_USMC_7.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\XYI_USMC_ASSET\model\LWH_USMC_7.p3d";
		};
	};

	class 13th_LWH_GOGGLES_RHINO_D: 13th_LWH_D
	{
		displayName = "[13] LWH (D / ESS / Rhino)";
		model="\XYI_USMC_ASSET\model\LWH_USMC_7.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\XYI_USMC_ASSET\model\LWH_USMC_7.p3d";
		};
	};

    class 13th_LWH_NECKSCARF_SMILE_D: 13th_baseHelmet
    {
        scope = 2;
        displayname = "[13] LWH (D / Smile Neckscarf)";
		model="\XYI_USMC_ASSET\model\LWH_USMC_6.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"XYI_USMC_ASSET\data\Helmet\D_LWH_MarpatDesert_co.paa",
			"XYI_USMC_ASSET\data\Helmet\ScarfMask_Smile_co.paa"
		};
        class ItemInfo: ItemInfo 
        {
			uniformModel="\XYI_USMC_ASSET\model\LWH_USMC_6.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"XYI_USMC_ASSET\data\Helmet\D_LWH_MarpatDesert_co.paa",
				"XYI_USMC_ASSET\data\Helmet\ScarfMask_Smile_co.paa"
			};   
        };
    };

	class 13th_LWH_NECKSCARF_SMILE_WD: 13th_baseHelmet
    {
        scope = 2;
        displayname = "[13] LWH (WD / Smile Neckscarf)";
		model="\XYI_USMC_ASSET\model\LWH_USMC_6.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"XYI_USMC_ASSET\data\Helmet\D_LWH_MarpatWoodland_co.paa",
			"XYI_USMC_ASSET\data\Helmet\ScarfMask_Smile_co.paa"
		};
        class ItemInfo: ItemInfo 
        {
			uniformModel="\XYI_USMC_ASSET\model\LWH_USMC_6.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"XYI_USMC_ASSET\data\Helmet\D_LWH_MarpatWoodland_co.paa",
				"XYI_USMC_ASSET\data\Helmet\ScarfMask_Smile_co.paa"
			};   
        };
    };

    class 13th_LWH_NECKSCARF_BLACK_D: 13th_baseHelmet
    {
        scope = 2;
        displayname = "[13] LWH (D / Black Neckscarf)";
		model="\XYI_USMC_ASSET\model\LWH_USMC_6.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"XYI_USMC_ASSET\data\Helmet\D_LWH_MarpatDesert_co.paa",
			"XYI_USMC_ASSET\data\Helmet\ScarfMask_co.paa"
		};
        class ItemInfo: ItemInfo 
        {
			uniformModel="\XYI_USMC_ASSET\model\LWH_USMC_6.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"XYI_USMC_ASSET\data\Helmet\D_LWH_MarpatDesert_co.paa",
				"XYI_USMC_ASSET\data\Helmet\ScarfMask_co.paa"
			};   
        };
    };

	class 13th_LWH_NECKSCARF_BLACK_WD: 13th_baseHelmet
    {
        scope = 2;
        displayname = "[13] LWH (WD / Smile Neckscarf)";
		model="\XYI_USMC_ASSET\model\LWH_USMC_6.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"XYI_USMC_ASSET\data\Helmet\D_LWH_MarpatWoodland_co.paa",
			"XYI_USMC_ASSET\data\Helmet\ScarfMask_co.paa"
		};
        class ItemInfo: ItemInfo 
        {
			uniformModel="\XYI_USMC_ASSET\model\LWH_USMC_6.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"XYI_USMC_ASSET\data\Helmet\D_LWH_MarpatWoodland_co.paa",
				"XYI_USMC_ASSET\data\Helmet\ScarfMask_co.paa"
			};   
        };
    };

	class 13th_LWH_GOGGLES_NECKSCARF_SMILE_WD: 13th_LWH_NECKSCARF_SMILE_WD
	{
		displayName = "[13] LWH (WD / ESS / Smile Neckscarf)";
		model="\XYI_USMC_ASSET\model\LWH_USMC_8.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\XYI_USMC_ASSET\model\LWH_USMC_8.p3d";
		};
	};

	class 13th_LWH_GOGGLES_NECKSCARF_SMILE_D: 13th_LWH_NECKSCARF_SMILE_D
	{
		displayName = "[13] LWH (D / ESS / Smile Neckscarf)";
		model="\XYI_USMC_ASSET\model\LWH_USMC_8.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\XYI_USMC_ASSET\model\LWH_USMC_8.p3d";
		};
	};

	class 13th_LWH_GOGGLES_NECKSCARF_BLACK_WD: 13th_LWH_NECKSCARF_BLACK_WD
	{
		displayName = "[13] LWH (WD / ESS / Black Neckscarf)";
		model="\XYI_USMC_ASSET\model\LWH_USMC_8.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\XYI_USMC_ASSET\model\LWH_USMC_8.p3d";
		};
	};

	class 13th_LWH_GOGGLES_NECKSCARF_BLACK_D: 13th_LWH_NECKSCARF_BLACK_D
	{
		displayName = "[13] LWH (D / ESS / Black Neckscarf)";
		model="\XYI_USMC_ASSET\model\LWH_USMC_8.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\XYI_USMC_ASSET\model\LWH_USMC_8.p3d";
		};
	};

};