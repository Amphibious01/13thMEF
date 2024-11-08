
class CfgWeapons {
    class rhsusf_lwh_helmet_marpatd_headset; // base class for LWH helmet
    class rhsusf_hgu56p; // base class for HGU56
    class rhsusf_hgu56p_mask; 
    class rhsusf_hgu56p_visor; 
    class rhsusf_hgu56p_visor_mask; 
    class rhsusf_cvc_alt_helmet; // base class for CVC
    class rhsusf_cvc_ess;

    class 13_inf_helmet: rhsusf_lwh_helmet_marpatd_headset {
        displayName = "[13] BASE INF HELMET (DONT USE)";
        author = "13th Mod Team";
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {
            "",
            ""
        };
    };
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

    CUSTOM_HGU_MASK(Cap) // example, produces a custom HGU56 w/ mask
    CUSTOM_HGU_VISOR(Jello) // example where no patches are present
    CUSTOM_CVC(Michigan)

};