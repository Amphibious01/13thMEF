#include "config_macros.hpp" // macro include
#include "config_weapons.hpp" // helmet configs

class CfgPatches
{
    class 13th_custom_helmets
    {
        name="13th Custom Helmets";
        author="13th Mod Team";
        requiredVersion=1;
        requiredAddons[]=
        {
            "A3_Characters_F",
            "A3_Data_F",
        };
        weapons[]= // MAKE SURE YOU INCLUDE THE CLASSNAME OF EVERY NEW PERSONS HELMET HERE YOU MONKEY
        {
            "13_inf_helmet",
            "13_hgu56",
            "13_hgu56_mask",
            "13_hgu56_visor",
            "13_cvc",
            "13_cvc_ess",
            "13_hgu56_visor_mask", // end base classes
            "13_hgu56_mask_Cap",
            "13_hgu56_visor_Jello",
            "13_cvc_Michigan",
            "13th_inf_Mixer"
        };
        units[]={};
    };
};