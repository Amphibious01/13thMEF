#define INFTEXPATH(NAME) \x\13thMEF\addons\13th_helmets\data\inf\Helm_co_##NAME.paa
#define HGUTEXPATH(NAME) \x\13thMEF\addons\13th_helmets\data\hgu\Helm_co_##NAME.paa
#define PATCHTEXPATH(NAME) \x\13thMEF\addons\13th_helmets\data\hgu\Patches_co_##NAME.paa
#define CVCTEXPATH(NAME) \x\13thMEF\addons\13th_helmets\data\cvc\Helm_co_##NAME.paa

//pulls model path 
#define LWHMODELPATH(MODEL) \rhsusf\addons\rhsusf_infantry\gear\head\##MODEL

//formatting should be obvious here
#define INF_PREFIX(NAME) [13th][LWH] NAME
#define HGU_PREFIX(NAME) [13th][HGU56] NAME
#define CVC_PREFIX(NAME) [13th][CVC] NAME

#define HELMETARMOR                             \
class HitpointsProtectionInfo {                 \
	class Head                                  \
	{                                           \
		hitpointName = "HitHead";               \
		armor = 6;                              \
		passThrough = 0.5;                      \
	};                                          \
};                                              \

// NAME = user's name
// MODEL = model of particular helmet variant (ess, etc, can be found at the file path on line 5)
#define CUSTOM_INF(NAME,MODEL)                                                   \
class 13_inf_helmet_##NAME: 13_inf_helmet {                                      \
    scope = 2;                                                                   \
    scopeArsenal = 2;                                                            \
    author = "TED";                                                              \
    displayName = #INF_PREFIX(NAME);                                             \
    model = #LWHMODELPATH(MODEL);                                                \
    hiddenSelections [] = { "camo", "camo2" };                                   \
    hiddenSelectionsTextures[] =                                                 \
    {                                                                            \
        #INFTEXPATH(NAME),                                                       \
        "\x\13thMEF\addons\13th_helmets\data\inf\defaults\lwh_acc_d_co.paa"      \
    };                                                                           \
    class ItemInfo: HeadgearItem {                                               \
        uniformModel = #LWHMODELPATH(MODEL);                                     \
        hiddenSelections [] = { "camo", "camo2" };                               \
        hiddenSelectionsTextures[] =                                             \
        {                                                                        \
            #INFTEXPATH(NAME),                                                   \
            "\x\13thMEF\addons\13th_helmets\data\inf\defaults\lwh_acc_d_co.paa"  \
        };                                                                       \
        HELMETARMOR                                                              \
    };                                                                           \
};                                                                               \

#define CUSTOM_INF_BLK(NAME,MODEL)                                                   \
class 13_inf_helmet_##NAME: 13_inf_helmet {                                          \
    scope = 2;                                                                       \
    scopeArsenal = 2;                                                                \
    author = "TED";                                                                  \
    displayName = #INF_PREFIX(NAME);                                                 \
    model = #LWHMODELPATH(MODEL);                                                    \
    hiddenSelections [] = { "camo", "camo2" };                                       \
    hiddenSelectionsTextures[] =                                                     \
    {                                                                                \
        #INFTEXPATH(NAME),                                                           \
        "\x\13thMEF\addons\13th_helmets\data\inf\defaults\lwh_acc_wd_co.paa"         \
    };                                                                               \
    class ItemInfo: HeadgearItem {                                                   \
        uniformModel = #LWHMODELPATH(MODEL);                                         \
        hiddenSelections [] = { "camo", "camo2" };                                   \
        hiddenSelectionsTextures[] =                                                 \
        {                                                                            \
            #INFTEXPATH(NAME),                                                       \
            "\x\13thMEF\addons\13th_helmets\data\inf\defaults\lwh_acc_d_co.paa"      \
        };                                                                           \
        HELMETARMOR                                                                  \
    };                                                                               \
};            

#define CUSTOM_HGU(NAME)                                            \
class 13_hgu56_##NAME: 13_hgu56 {                                   \
    scope = 2;                                                      \
    scopeArsenal = 2;                                               \
    author = "CAP";                                                 \
    displayName = #HGU_PREFIX(NAME);                                \
    hiddenSelections[] = { "camo", "patches"};                      \
    hiddenSelectionsTextures[] =                                    \
    {                                                               \
        #HGUTEXPATH(NAME),                                          \
        #PATCHTEXPATH(NAME)                                         \
    };                                                              \
};                                                                  \
 
#define CUSTOM_HGU_MASK(NAME)                                       \
class 13_hgu56_##NAME: 13_hgu56_mask {                              \
    scope = 2;                                                      \
    scopeArsenal = 2;                                               \
    author = "CAP";                                                 \
    displayName = #HGU_PREFIX(NAME);                                \
    hiddenSelections[] = { "camo", "patches"};                      \
    hiddenSelectionsTextures[] =                                    \
    {                                                               \
        #HGUTEXPATH(NAME),                                          \
        #PATCHTEXPATH(NAME)                                         \
    };                                                              \
};                                                                  \

#define CUSTOM_HGU_VISOR(NAME)                                      \
class 13_hgu56_##NAME: 13_hgu56_visor {                             \
    scope = 2;                                                      \
    scopeArsenal = 2;                                               \
    author = "CAP";                                                 \
    displayName = #HGU_PREFIX(NAME);                                \
    hiddenSelections[] = { "camo", "patches"};                      \
    hiddenSelectionsTextures[] =                                    \
    {                                                               \
        #HGUTEXPATH(NAME),                                          \
        #PATCHTEXPATH(NAME)                                         \
    };                                                              \
};                                                                  \

#define CUSTOM_HGU_VISOR_MASK(NAME)                                 \
class 13_hgu56_##NAME: 13_hgu56_visor_mask {                        \
    scope = 2;                                                      \
    scopeArsenal = 2;                                               \
    author = "CAP";                                                 \
    displayName = #HGU_PREFIX(NAME);                                \
    hiddenSelections[] = { "camo", "patches"};                      \
    hiddenSelectionsTextures[] =                                    \
    {                                                               \
        #HGUTEXPATH(NAME),                                          \
        #PATCHTEXPATH(NAME)                                         \
    };                                                              \
};                                                                  \

#define CUSTOM_CVC(NAME)                                            \
class 13_cvc_##NAME: 13_cvc {                                       \
    scope = 2;                                                      \
    scopeArsenal = 2;                                               \
    author = "CAP";                                                 \
    displayName = #CVC_PREFIX(NAME);                                \
    hiddenSelectionsTextures[] =                                    \
    {                                                               \
        #CVCTEXPATH(NAME)                                           \
    };                                                              \
};                                                                  \

#define CUSTOM_CVC_ESS(NAME)                                        \
class 13_cvc_##NAME: 13_cvc {                                       \
    scope = 2;                                                      \
    scopeArsenal = 2;                                               \
    author = "CAP";                                                 \
    displayName = #CVC_PREFIX(NAME);                                \
    hiddenSelectionsTextures[] =                                    \
    {                                                               \
        #CVCTEXPATH(NAME)                                           \
    };                                                              \
};                                                                  \