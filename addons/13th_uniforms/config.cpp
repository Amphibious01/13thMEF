#include "config_macros.hpp"

class CfgPatches 
{
    class 13th_uniforms
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
    class Uniform_Base;
    class UniformItem;

    class 13th_UniformBase: Uniform_Base 
    {
        scope = 0;
		author = "13th MEF";
        displayName = "I HATE BOHEMIA INTERACTIVE i mean LOVE bohemia interactive";
        picture = "";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="";
			containerClass="Supply40";
			mass=40;
		};        
    };

    class 13th_FROG_NOGLOVES1_D: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (D / Loose)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_NOGLOVES1_D_veh";
        };
    };

    class 13th_FROG_NOGLOVES1_WD: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (WD / Loose)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_NOGLOVES1_WD_veh";
        };
    };    

    class 13th_FROG_NOGLOVES2_D: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (D / Tight)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_NOGLOVES2_D_veh";
        };
    };

    class 13th_FROG_NOGLOVES2_WD: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (WD / Tight)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_NOGLOVES2_WD_veh";
        };
    };    

    class 13th_FROG_NOGLOVES3_D: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (D / Rolled)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_NOGLOVES3_D_veh";
        };
    };

    class 13th_FROG_NOGLOVES3_WD: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (WD / Rolled)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_NOGLOVES3_WD_veh";
        };
    };    

	////////////////////////////////////////////////////////////

	///// KYLE GLOVES //////

    class 13th_FROG_KYLEGLOVES1_D: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (D / Tight / Gloves 1)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_KYLEGLOVES1_D_veh";
        };
    };

    class 13th_FROG_KYLEGLOVES1_WD: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (WD / Tight / Gloves 1)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_KYLEGLOVES1_WD_veh";
        };
    };    

    class 13th_FROG_KYLEGLOVES2_D: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (D / Loose / Gloves 1)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_KYLEGLOVES2_D_veh";
        };
    };

    class 13th_FROG_KYLEGLOVES2_WD: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (WD / Loose / Gloves 1)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_KYLEGLOVES2_WD_veh";
        };
    };    

    class 13th_FROG_KYLEGLOVES3_D: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (D / Rolled / Gloves 1)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_KYLEGLOVES3_D_veh";
        };
    };

    class 13th_FROG_KYLEGLOVES3_WD: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (WD / Rolled / Gloves 1)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_KYLEGLOVES3_WD_veh";
        };
    };    

	/////////////////////////////////////////////////////////////////////////////////////

		///// OAKLEY GLOVES //////

    class 13th_FROG_OAKLEYGLOVES1_D: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (D / Tight / Gloves 2)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_OAKLEYGLOVES1_D_veh";
        };
    };

    class 13th_FROG_OAKLEYGLOVES1_WD: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (WD / Tight / Gloves 2)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_OAKLEYGLOVES1_WD_veh";
        };
    };    

    class 13th_FROG_OAKLEYGLOVES2_D: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (D / Loose / Gloves 2)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_OAKLEYGLOVES2_D_veh";
        };
    };

    class 13th_FROG_OAKLEYGLOVES2_WD: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (WD / Loose / Gloves 2)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_OAKLEYGLOVES2_WD_veh";
        };
    };    

    class 13th_FROG_OAKLEYGLOVES3_D: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (D / Rolled / Gloves 2)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_OAKLEYGLOVES3_D_veh";
        };
    };

    class 13th_FROG_OAKLEYGLOVES3_WD: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (WD / Rolled / Gloves 2)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_OAKLEYGLOVES3_WD_veh";
        };
    };    

	/////////////////////////////////////////////////////////////////////////////////////

		///// MEKANIX GLOVES //////

    class 13th_FROG_MEKANIXGLOVES1_D: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (D / Tight / Gloves 3)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_MEKANIXGLOVES1_D_veh";
        };
    };

    class 13th_FROG_MEKANIXGLOVES1_WD: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (WD / Tight / Gloves 3)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_MEKANIXGLOVES1_WD_veh";
        };
    };    

    class 13th_FROG_MEKANIXGLOVES2_D: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (D / Loose / Gloves 3)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_MEKANIXGLOVES2_D_veh";
        };
    };

    class 13th_FROG_MEKANIXGLOVES2_WD: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (WD / Loose / Gloves 3)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_MEKANIXGLOVES2_WD_veh";
        };
    };    

    class 13th_FROG_MEKANIXGLOVES3_D: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (D / Rolled / Gloves 3)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_MEKANIXGLOVES3_D_veh";
        };
    };

    class 13th_FROG_MEKANIXGLOVES3_WD: 13th_UniformBase 
    {
        scope = 2;
        displayName = "[13] FROG Uniform (WD / Rolled / Gloves 3)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "13th_FROG_MEKANIXGLOVES3_WD_veh";
        };
    };    

	/////////////////////////////////////////////////////////////////////////////////////

};

//	    	"x\13thMEF\addons\13th_uniforms\data\FROG_top_desert.paa",
// 	    	"x\13thMEF\addons\13th_uniforms\data\FROG_top_woodland.paa",


class cfgVehicles
{
    class B_Soldier_base_F;

    class 13th_FROG_NOGLOVES1_WD_veh: B_Soldier_base_F
    {
        scope = 2;
		model="\XYI_USMC_FROG\model\FROG_Base.p3d";
		uniformClass="13th_FROG_NOGLOVES1_WD";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"x\13thMEF\addons\13th_uniforms\data\FROG_top_woodland.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatWoodland_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa"
		};
    };

    class 13th_FROG_NOGLOVES1_D_veh: B_Soldier_base_F
    {
        scope = 2;
		model="\XYI_USMC_FROG\model\FROG_Base.p3d";
		uniformClass="13th_FROG_NOGLOVES1_D";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
	    	"x\13thMEF\addons\13th_uniforms\data\FROG_top_desert.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatDesert_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa"
		};
    };

    class 13th_FROG_NOGLOVES2_WD_veh: B_Soldier_base_F
    {
        scope = 2;
		model="\XYI_USMC_FROG\model\FROG_V2.p3d";
		uniformClass="13th_FROG_NOGLOVES2_WD";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"x\13thMEF\addons\13th_uniforms\data\FROG_top_woodland.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatWoodland_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa"
		};
    };

    class 13th_FROG_NOGLOVES2_D_veh: B_Soldier_base_F
    {
        scope = 2;
		model="\XYI_USMC_FROG\model\FROG_V2.p3d";
		uniformClass="13th_FROG_NOGLOVES2_D";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
	    	"x\13thMEF\addons\13th_uniforms\data\FROG_top_desert.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatDesert_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa"
		};
    };

    class 13th_FROG_NOGLOVES3_WD_veh: B_Soldier_base_F
    {
        scope = 2;
		model="\XYI_USMC_FROG\model\FROG_Coverall.p3d";
		uniformClass="13th_FROG_NOGLOVES3_WD";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"x\13thMEF\addons\13th_uniforms\data\FROG_top_woodland.paa",
			"XYI_USMC_FROG\data\Uni\G3_HD_Top_cove_MarpatWoodland_co.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatWoodland_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa"
		};
    };

    class 13th_FROG_NOGLOVES3_D_veh: B_Soldier_base_F
    {
        scope = 2;
		model="\XYI_USMC_FROG\model\FROG_Coverall.p3d";
		uniformClass="13th_FROG_NOGLOVES3_D";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
	    	"x\13thMEF\addons\13th_uniforms\data\FROG_top_desert.paa",
			"XYI_USMC_FROG\data\Uni\G3_HD_Top_cove_MarpatDesert_co.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatDesert_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa"
		};
    };

	//////////////////////////////////////////////////////////////////////////

	///		KYLE GLOVES		/////

    class 13th_FROG_KYLEGLOVES1_WD_veh: B_Soldier_base_F
    {
        scope = 2;
		model="\XYI_USMC_FROG\model\FROG_Base_KG.p3d";
		uniformClass="13th_FROG_KYLEGLOVES1_WD";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"x\13thMEF\addons\13th_uniforms\data\FROG_top_woodland.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatWoodland_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa",
			"XYI_USMC_FROG\data\Uni\Kyle_Gloves_Coyote_co.paa"
		};
    };

    class 13th_FROG_KYLEGLOVES1_D_veh: B_Soldier_base_F
    {
        scope = 2;
		model="\XYI_USMC_FROG\model\FROG_Base_KG.p3d";
		uniformClass="13th_FROG_KYLEGLOVES1_D";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
	    	"x\13thMEF\addons\13th_uniforms\data\FROG_top_desert.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatDesert_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa",
			"XYI_USMC_FROG\data\Uni\Kyle_Gloves_Coyote_co.paa"
		};
    };

    class 13th_FROG_KYLEGLOVES2_WD_veh: B_Soldier_base_F
    {
        scope = 2;
		model="\XYI_USMC_FROG\model\FROG_Long_Coverall_KG.p3d";
		uniformClass="13th_FROG_KYLEGLOVES2_WD";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"x\13thMEF\addons\13th_uniforms\data\FROG_top_woodland.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatWoodland_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa",
			"XYI_USMC_FROG\data\Uni\Kyle_Gloves_Coyote_co.paa"
		};
    };

    class 13th_FROG_KYLEGLOVES2_D_veh: B_Soldier_base_F
    {
        scope = 2;
		model="\XYI_USMC_FROG\model\FROG_Long_Coverall_KG.p3d";
		uniformClass="13th_FROG_KYLEGLOVES2_D";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
	    	"x\13thMEF\addons\13th_uniforms\data\FROG_top_desert.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatDesert_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa",
			"XYI_USMC_FROG\data\Uni\Kyle_Gloves_Coyote_co.paa"
		};
    };

    class 13th_FROG_KYLEGLOVES3_WD_veh: B_Soldier_base_F
    {
     	scope = 2;
		model="\XYI_USMC_FROG\model\FROG_Coverall_KG.p3d";
		uniformClass="13th_FROG_KYLEGLOVES3_WD";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"x\13thMEF\addons\13th_uniforms\data\FROG_top_woodland.paa",
			"XYI_USMC_FROG\data\Uni\G3_HD_Top_cove_MarpatWoodland_co.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatWoodland_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa",
			"XYI_USMC_FROG\data\Uni\Kyle_Gloves_Coyote_co.paa"
		};
    };

    class 13th_FROG_KYLEGLOVES3_D_veh: B_Soldier_base_F
    {
        scope = 2;
		model="\XYI_USMC_FROG\model\FROG_Coverall_KG.p3d";
		uniformClass="13th_FROG_KYLEGLOVES3_D";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
	    	"x\13thMEF\addons\13th_uniforms\data\FROG_top_desert.paa",
			"XYI_USMC_FROG\data\Uni\G3_HD_Top_cove_MarpatDesert_co.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatDesert_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa",
			"XYI_USMC_FROG\data\Uni\Kyle_Gloves_Coyote_co.paa"
		};
    };

	//////////////////////////////////////////////////////////////////////////

	///		OAKLEY GLOVES		/////

    class 13th_FROG_OAKLEYGLOVES1_WD_veh: B_Soldier_base_F
    {
        scope = 2;
		model="\XYI_USMC_FROG\model\FROG_Base_OG.p3d";
		uniformClass="13th_FROG_OAKLEYGLOVES1_WD";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"x\13thMEF\addons\13th_uniforms\data\FROG_top_woodland.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatWoodland_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa",
			"XYI_USMC_FROG\data\Uni\Oakley_Coyote_co.paa"
		};
    };

    class 13th_FROG_OAKLEYGLOVES1_D_veh: B_Soldier_base_F
    {
        scope = 2;
		model="\XYI_USMC_FROG\model\FROG_Base_OG.p3d";
		uniformClass="13th_FROG_OAKLEYGLOVES1_D";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
	    	"x\13thMEF\addons\13th_uniforms\data\FROG_top_desert.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatDesert_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa",
			"XYI_USMC_FROG\data\Uni\Oakley_Coyote_co.paa"
		};
    };

    class 13th_FROG_OAKLEYGLOVES2_WD_veh: B_Soldier_base_F
    {
        scope = 2;
		model="\XYI_USMC_FROG\model\FROG_Long_Coverall_OG.p3d";
		uniformClass="13th_FROG_OAKLEYGLOVES2_WD";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"x\13thMEF\addons\13th_uniforms\data\FROG_top_woodland.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatWoodland_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa",
			"XYI_USMC_FROG\data\Uni\Oakley_Coyote_co.paa"
		};
    };

    class 13th_FROG_OAKLEYGLOVES2_D_veh: B_Soldier_base_F
    {
        scope = 2;
		model="\XYI_USMC_FROG\model\FROG_Long_Coverall_OG.p3d";
		uniformClass="13th_FROG_OAKLEYGLOVES2_D";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
	    	"x\13thMEF\addons\13th_uniforms\data\FROG_top_desert.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatDesert_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa",
			"XYI_USMC_FROG\data\Uni\Oakley_Coyote_co.paa"
		};
    };

    class 13th_FROG_OAKLEYGLOVES3_WD_veh: B_Soldier_base_F
    {
     	scope = 2;
		model="\XYI_USMC_FROG\model\FROG_Coverall_OG.p3d";
		uniformClass="13th_FROG_OAKLEYGLOVES3_WD";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"x\13thMEF\addons\13th_uniforms\data\FROG_top_woodland.paa",
			"XYI_USMC_FROG\data\Uni\G3_HD_Top_cove_MarpatWoodland_co.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatWoodland_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa",
			"XYI_USMC_FROG\data\Uni\Oakley_Coyote_co.paa"
		};
    };

    class 13th_FROG_OAKLEYGLOVES3_D_veh: B_Soldier_base_F
    {
        scope = 2;
		model="\XYI_USMC_FROG\model\FROG_Coverall_OG.p3d";
		uniformClass="13th_FROG_OAKLEYGLOVES3_D";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
	    	"x\13thMEF\addons\13th_uniforms\data\FROG_top_desert.paa",
			"XYI_USMC_FROG\data\Uni\G3_HD_Top_cove_MarpatDesert_co.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatDesert_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa",
			"XYI_USMC_FROG\data\Uni\Oakley_Coyote_co.paa"
		};
    };

	//////////////////////////////////////////////////////////////////////////	

		///		MEKANIX GLOVES		/////

    class 13th_FROG_MEKANIXGLOVES1_WD_veh: B_Soldier_base_F
    {
        scope = 2;
		model="\XYI_USMC_FROG\model\FROG_Base_MG.p3d";
		uniformClass="13th_FROG_MEKANIXGLOVES1_WD";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"x\13thMEF\addons\13th_uniforms\data\FROG_top_woodland.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatWoodland_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\E_Mexanix_co.paa"
		};
    };

    class 13th_FROG_MEKANIXGLOVES1_D_veh: B_Soldier_base_F
    {
        scope = 2;
		model="\XYI_USMC_FROG\model\FROG_Base_MG.p3d";
		uniformClass="13th_FROG_MEKANIXGLOVES1_D";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
	    	"x\13thMEF\addons\13th_uniforms\data\FROG_top_desert.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatDesert_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\E_Mexanix_co.paa"
		};
    };

    class 13th_FROG_MEKANIXGLOVES2_WD_veh: B_Soldier_base_F
    {
        scope = 2;
		model="\XYI_USMC_FROG\model\FROG_Long_Coverall_MG.p3d";
		uniformClass="13th_FROG_MEKANIXGLOVES2_WD";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"x\13thMEF\addons\13th_uniforms\data\FROG_top_woodland.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatWoodland_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\E_Mexanix_co.paa"
		};
    };

    class 13th_FROG_MEKANIXGLOVES2_D_veh: B_Soldier_base_F
    {
        scope = 2;
		model="\XYI_USMC_FROG\model\FROG_Long_Coverall_MG.p3d";
		uniformClass="13th_FROG_MEKANIXGLOVES2_D";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
	    	"x\13thMEF\addons\13th_uniforms\data\FROG_top_desert.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatDesert_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\E_Mexanix_co.paa"
		};
    };

    class 13th_FROG_MEKANIXGLOVES3_WD_veh: B_Soldier_base_F
    {
     	scope = 2;
		model="\XYI_USMC_FROG\model\FROG_Coverall_MG.p3d";
		uniformClass="13th_FROG_MEKANIXGLOVES3_WD";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"x\13thMEF\addons\13th_uniforms\data\FROG_top_woodland.paa",
			"XYI_USMC_FROG\data\Uni\G3_HD_Top_cove_MarpatWoodland_co.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatWoodland_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\E_Mexanix_co.paa"
		};
    };

    class 13th_FROG_MEKANIXGLOVES3_D_veh: B_Soldier_base_F
    {
        scope = 2;
		model="\XYI_USMC_FROG\model\FROG_Coverall_MG.p3d";
		uniformClass="13th_FROG_MEKANIXGLOVES3_D";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
	    	"x\13thMEF\addons\13th_uniforms\data\FROG_top_desert.paa",
			"XYI_USMC_FROG\data\Uni\G3_HD_Top_cove_MarpatDesert_co.paa",
			"XYI_USMC_FROG\data\Uni\C_USMC_Pants_MarpatDesert_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\C_USMC_Boots_Coyote_co.paa",
			"XYI_SEAL_TACTIC_UNI\data\E_Mexanix_co.paa"
		};
    };

	//////////////////////////////////////////////////////////////////////////	

};

class XtdGearModels {
	class CfgWeapons {

		class 13th_FROG_uni {
			label = "13th FROG Uniforms";
			options [] = {"camo","sleeve","gloves"};
			class camo 
			{
				alwaysSelectable = 1;
				label = "CAMO";
				values [] = {"WD","D"};		
				class WD {label = "WOODLAND"; image=XTP(wd);};
				class D {label = "DESERT"; image=XTP(d);}; 
			};
			class sleeve 
			{
				alwaysSelectable = 1;
				label = "SLEEVES";
				values [] = {"loose","rolled","tight"};
				class loose	{label = "LOOSE";};
				class rolled {label = "ROLLED";};
				class tight {label = "TIGHT";};
			};
			class gloves  
			{
				alwaysSelectable = 1;
				label = "SLEEVES";
				values [] = {"OAKLEYGLOVES","MEKANIXGLOVES","KYLEGLOVES","NOGLOVES"};
				class OAKLEYGLOVES {label = "OAKLEY";};
				class MEKANIXGLOVES {label = "MEKANIX";};
				class KYLEGLOVES {label = "KYLE";};
				class NOGLOVES {label = "NONE";};			
			};
		};

	};
};

class XtdGearInfos {
	class CfgWeapons {
		ALL_FROG_GI(WD)
		ALL_FROG_GI(D)
	};
};