#include "macros.hpp"

class CfgPatches 
{
    class 13th_backpacks 
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

class CfgVehicles
{

    /////// BASE CLASS DEFINITIONS //////////

    class Bag_Base;

    class 13th_beltBase: Bag_Base 
    {
        scope = 0;
        displayname = "i'm getting really tired of writing these";
        picture = "";
        model = "";
        mass = 20;
        maximumLoad = 410;
    };

    class 13th_bagBase: Bag_Base 
    {
        scope = 0;
        displayname = "bruh";
        picture = "";
        model = "";
        mass = 20;
        maximumLoad = 410;
    };


    /////// BELT CLASS DEFINITIONS //////////

    class 13th_Belt1: 13th_beltBase {
        scope = 2;
        displayname = "[13] BattleBelt 1";
		model="\XYI_USMC_ASSET\model\BattleBelt_USMC_1.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"XYI_VEST_PACK_1\data\Retex\Coyote\C_BattleBelt_Coyote_co.paa"
		};        
    };

	class 13th_Belt1_LR: 13th_Belt1 
	{
		displayname = "[13] BattleBelt 1 (LR)";
		LRBAGMACRO		
	};

    class 13th_Belt2: 13th_beltBase {
        scope = 2;
        displayname = "[13] BattleBelt 2";
		model="\XYI_USMC_ASSET\model\BattleBelt_USMC_2.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"XYI_VEST_PACK_1\data\Retex\Coyote\C_BattleBelt_Coyote_co.paa"
		};   
    };

	class 13th_Belt2_LR: 13th_Belt2 
	{
		displayname = "[13] BattleBelt 2 (LR)";
		LRBAGMACRO		
	};

    class 13th_Belt3: 13th_beltBase {
        scope = 2;
        displayname = "[13] BattleBelt 3";
		model="\XYI_USMC_ASSET\model\BattleBelt_USMC_3.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"XYI_VEST_PACK_1\data\Retex\Coyote\C_BattleBelt_Coyote_co.paa"
		};   
    };

	class 13th_Belt3_LR: 13th_Belt3
	{
		displayname = "[13] BattleBelt 3 (LR)";
		LRBAGMACRO		
	};
    
    class 13th_Belt4: 13th_beltBase {
        scope = 2;
        displayname = "[13] BattleBelt 4";
		model="\XYI_USMC_ASSET\model\Belt_USMC_1.p3d";
    };

	class 13th_Belt4_LR: 13th_Belt4
	{
		displayname = "[13] BattleBelt 4 (LR)";
		LRBAGMACRO		
	};

    class 13th_Belt5: 13th_beltBase {
        scope = 2;
        displayname = "[13] BattleBelt 5";
		model="\XYI_USMC_ASSET\model\Belt_USMC_2.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"XYI_VEST_PACK_1\data\Retex\Coyote\C_FannyDrop_Coyote_co.paa"
		};
    };

	class 13th_Belt5_LR: 13th_Belt5
	{
		displayname = "[13] BattleBelt 5 (LR)";
		LRBAGMACRO		
	};

    class 13th_Belt_CrouchGuard1: 13th_beltBase {
        scope = 2;
        displayname = "[13] BattleBelt + CrouchGuard 1";
		model="\XYI_USMC_ASSET\model\BattleBelt_CrouchGuard_USMC_1.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_smerchidguard_Coyote_co.paa",
			"XYI_VEST_PACK_1\data\Retex\Coyote\C_BattleBelt_Coyote_co.paa"
		};
    };

    class 13th_Belt_CrouchGuard2: 13th_beltBase {
        scope = 2;
        displayname = "[13] BattleBelt + CrouchGuard 2";
		model="\XYI_USMC_ASSET\model\BattleBelt_CrouchGuard_USMC_2.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_smerchidguard_Coyote_co.paa",
			"XYI_VEST_PACK_1\data\Retex\Coyote\C_BattleBelt_Coyote_co.paa"
		};
    };

    class 13th_Belt_CrouchGuard3: 13th_beltBase {
        scope = 2;
        displayname = "[13] BattleBelt + CrouchGuard 3";
		model="\XYI_USMC_ASSET\model\BattleBelt_CrouchGuard_USMC_3.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_smerchidguard_Coyote_co.paa",
			"XYI_VEST_PACK_1\data\Retex\Coyote\C_BattleBelt_Coyote_co.paa"
		};
    };

    class 13th_M203_Belt_SPC: 13th_beltBase {
        scope = 2;
        displayname = "[13] M203 Belt (SPC)";
		model="\XYI_USMC_ASSET\model\M203_Belt_SPC_USMC_1.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"XYI_VEST_PACK_1\data\Retex\Coyote\R_Gear_3_Coyote_co.paa"
		};
    };    

    class 13th_M203_Belt_IMTV: 13th_beltBase {
        scope = 2;
        displayname = "[13] M203 Belt (IMTV)";
		model="\XYI_USMC_ASSET\model\M203_Belt_IMTV_USMC_1.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"XYI_VEST_PACK_1\data\Retex\Coyote\R_Gear_3_Coyote_co.paa"
		};
    };  

    class 13th_M203_Belt_FanBag_SPC: 13th_beltBase {
        scope = 2;
        displayname = "[13] M203 Belt + Fannybag (SPC)";
		model="\XYI_USMC_ASSET\model\BeltACC_SPC_USMC_1.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"XYI_VEST_PACK_1\data\Retex\Coyote\R_Gear_3_Coyote_co.paa",
			"XYI_VEST_PACK_1\data\Retex\Coyote\C_FannyDrop_Coyote_co.paa"
		};
    };    

    /////// BAG CLASS DEFINITIONS //////////

    class 13th_Fannybag: 13th_beltBase {
        scope = 2;
        displayname = "[13] Fannybag 1";
		model="\XYI_USMC_ASSET\model\FanBag_USMC_1.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"XYI_VEST_PACK_1\data\Retex\Coyote\C_FannyDrop_Coyote_co.paa"
		};
    };    

    class 13th_Belt_CrouchGuard_Bag: 13th_bagBase {
        scope = 2;
        displayname = "[13] BattleBelt + CrouchGuard 3 + LBT 1476a";
		model="\XYI_USMC_ASSET\model\BattleBelt_CrouchGuard_USMC_5.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_smerchidguard_Coyote_co.paa",
			"XYI_VEST_PACK_1\data\Retex\Coyote\C_BattleBelt_Coyote_co.paa",
			"XYI_VEST_PACK_1\data\Retex\Coyote\E_LBT1476a_Coyote_co.paa"
		};
    };    

    class 13th_LBT2670: 13th_bagBase {
        scope = 2;
        displayname = "[13] LBT 2670 Backpack";
		model="\XYI_USMC_ASSET\model\Backpack_USMC_2.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"x\13thMEF\addons\13th_backpacks\data\LBT2670.paa"
		};
    };    

	class 13th_LBT2670_LR: 13th_LBT2670
	{
		displayname = "[13] LBT 2670 (LR)";
		LRBAGMACRO		
	};

    class 13th_AssaultBag: 13th_bagBase {
        scope = 2;
        displayname = "[13] Assault Backpack";
		model="\XYI_USMC_ASSET\model\Backpack_USMC_1.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"XYI_VEST_PACK_1\data\Retex\Coyote\C_S_BackPack_Coyote_co.paa"
		};
    };   

	class 13th_AssaultBag_LR: 13th_AssaultBag
	{
		displayname = "[13] Assault Backpack (LR)";
		LRBAGMACRO		
	};

    class 13th_Belt_CrouchGuard_AssaultBag: 13th_bagBase {
        scope = 2;
        displayname = "[13] BattleBelt + CrouchGuard + Assault Backpack";
		model="\XYI_USMC_ASSET\model\BattleBelt_CrouchGuard_USMC_4.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_smerchidguard_Coyote_co.paa",
			"XYI_VEST_PACK_1\data\Retex\Coyote\C_BattleBelt_Coyote_co.paa",
			"XYI_VEST_PACK_1\data\Retex\Coyote\C_S_BackPack_Coyote_co.paa"
		};
    };   

};