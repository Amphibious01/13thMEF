#define HGUTEXPATH (SUFFIX) \x\13thMEF\addons\13th_helmets\data\hgu56\Helm_co_##SUFFIX.paa
#define HGUPREFIX (NAME) [13th] HGU-56 [##NAME] 

#define GLUE(A,B) A##B
#define GLUE3(A,B,C) A##B##C

/*

#define HGUNOVISOR (NAME)                           \
class 13th_HGU56_##NAME: rhsusf_hgu56p_mask_green   \
{                                                   \
    displayName = #HGUPREFIX(NAME)                  \
    hiddenSelections [] = {"camo"};                 \
    hiddenSelectionsTextures [] =                   \
    {                                               \
        #HGUTEXPATH(NAME)                           \
    };                                              \
    class ItemInfo: HeadgearItem                    \
    {                                               \
        hiddenSelections [] = {"camo"};             \
        hiddenSelectionsTextures [] =               \
        {                                           \
            #HGUTEXPATH(NAME)                       \
        };                                          \
    };                                              \
};                                                  

#define HGUIMPERIAL (NAME)                                       \
class 13th_HGU56_##NAME: rhsusf_hgu56p_visor_mask_Empire_black   \
{                                                   \
    displayName = #HGUPREFIX(NAME)                  \
    hiddenSelections [] = {"camo"};                 \
    hiddenSelectionsTextures [] =                   \
    {                                               \
        #HGUTEXPATH(NAME),                          \
        "\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_patches_empire_co.paa"           \
    };                                              \
    class ItemInfo: HeadgearItem                    \
    {                                               \
        hiddenSelections [] = {"camo"};             \
        hiddenSelectionsTextures [] =               \
        {                                           \
            #HGUTEXPATH(NAME)                       \
        };                                          \
    };                                              \
};                                                  

#define HGU (NAME)                                        \
class 13th_HGU56_##NAME##: rhsusf_hgu56p_visor_mask_green   \
{                                                   \
    displayName = #HGUPREFIX(NAME)                  \
    hiddenSelections [] = {"camo"};                 \
    hiddenSelectionsTextures [] =                   \
    {                                               \
        #HGUTEXPATH(NAME)                           \
    };                                              \
    class ItemInfo: HeadgearItem                    \
    {                                               \
        hiddenSelections [] = {"camo"};             \
        hiddenSelectionsTextures [] =               \
        {                                           \
            #HGUTEXPATH(NAME)                       \
        };                                          \
    };                                              \
};  

#define HGUNOMASKNOVISOR (NAME)                     \
class 13th_HGU56_##NAME: rhsusf_hgu56p_green        \
{                                                   \
    displayName = #HGUPREFIX(NAME)                  \
    hiddenSelections [] = {"camo"};                 \
    hiddenSelectionsTextures [] =                   \
    {                                               \
        #HGUTEXPATH(NAME)                           \
    };                                              \
    class ItemInfo: HeadgearItem                    \
    {                                               \
        hiddenSelections [] = {"camo"};             \
        hiddenSelectionsTextures [] =               \
        {                                           \
            #HGUTEXPATH(NAME)                       \
        };                                          \
    };                                              \
};  


