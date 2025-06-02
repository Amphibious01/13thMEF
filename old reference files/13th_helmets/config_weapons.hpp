
class CfgWeapons {
    class Item_Base_F;
    class rhsusf_lwh_helmet_marpatd: Item_Base_F // base class for LWH helmet
    {
        class ItemInfo;
    }; 
    class rhsusf_hgu56p; // base class for HGU56
    class rhsusf_hgu56p_mask; 
    class rhsusf_hgu56p_visor; 
    class rhsusf_hgu56p_visor_mask; 
    class rhsusf_cvc_alt_helmet; // base class for CVC
    class rhsusf_cvc_ess;
    class HeadgearItem;

    // infantry helmets
    class 13_inf_helmet: rhsusf_lwh_helmet_marpatd {
        displayName = "[13] BASE INF HELMET (DONT USE)";
        author = "13th Mod Team";
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections [] = { "camo", "camo2" };
        hiddenSelectionsTextures[] = {
            "",
            ""
        };
        class ItemInfo: ItemInfo
	    {
	    	mass = 40;
	    	allowedSlots[] = {801,901,701,605};
	    	modelSides[] = {6};
	    };
    };

    // hgu56s
    class 13_hgu56: rhsusf_hgu56p {
        displayName = "[13] BASE HGU56 HELMET (DONT USE)";
        author = "";
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {
            "",
            ""
        };        
    };
    // i could just make these inherit from 13_hgu56 and define the model but im too lazy to look for each one - cap
    class 13_hgu56_mask: rhsusf_hgu56p_mask {
        displayName = "[13] BASE HGU56 HELMET (DONT USE)";
        author = "";
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {
            "",
            ""
        };        
    };
    class 13_hgu56_visor: rhsusf_hgu56p_visor {
        displayName = "[13] BASE HGU56 HELMET (DONT USE)";
        author = "";
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {
            "",
            ""
        };        
    };
    class 13_hgu56_visor_mask: rhsusf_hgu56p_visor_mask {
        displayName = "[13] BASE HGU56 HELMET (DONT USE)";
        author = "";
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {
            "",
            ""
        };        
    };

    // cvc / tanker helms
    class 13_cvc: rhsusf_cvc_alt_helmet {
        displayName = "[13] BASE CVC HELMET (DONT USE)";
        author = "";
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {
            ""
        }; 
    };
    class 13_cvc_ess: rhsusf_cvc_ess {
        displayName = "[13] BASE CVC HELMET (DONT USE)";
        author = "";
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {
            ""
        }; 
    };

    // END BASE CLASS DEFINITIONS

    /*
    CUSTOM_INF requires two inputs, the name AND the model, list of models is below;
    lwh_wd 
    lwh_wd_ess01 - blk
    lwh_wd_headset 
    lwh_wd_headset_2 - blk
    */

    CUSTOM_HGU(Cap) // example, produces a custom HGU56
    CUSTOM_CVC(Michigan)
    //CUSTOM_INF(Mixer,lwh_wd)
    //CUSTOM_INF(Lemming,lwh_wd)
    //CUSTOM_INF(Ouroboros,lwh_wd)
    //CUSTOM_INF(Salazar,lwh_wd)
    //CUSTOM_INF(Carver,lwh_wd)
    //CUSTOM_INF(Johnson,lwh_wd)
    //CUSTOM_INF(Xcom,lwh_wd)
    //CUSTOM_INF(Ted,lwh_wd)
    //CUSTOM_INF(Random,lwh_wd)
    //CUSTOM_INF(Whiskey,lwh_wd)
    //CUSTOM_INF(Westerwald,lwh_wd)
    //CUSTOM_INF(Hollow,lwh_wd)
    //CUSTOM_INF(Psy,lwh_wd)
    //CUSTOM_INF(Q,lwh_wd)
    //CUSTOM_INF(Oliver,lwh_wd)
    //CUSTOM_INF(Boomer,lwh_wd)
};