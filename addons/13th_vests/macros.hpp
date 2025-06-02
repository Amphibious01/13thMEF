#define XYIP(PATH) \XYI_USMC_ASSET\model\##PATH
#define QXYIP(PATH) #XYIP(PATH)

#define P(PATH) x\13thMEF\addons\13th_vests\data\##PATH##
#define QP(PATH) #P(PATH)

#define VESTITEMINFO                  \
armor = 20;                           \
passThrough = 1;                      \
containerClass = "Supply100";         \
mass = 50;                            \
class HitpointsProtectionInfo         \
{                                     \
    class Chest                       \
    {                                 \
        HitpointName="HitChest";      \
        armor=" 28 +  3";             \
        PassThrough=0.1;              \
    };                                \
    class Diaphragm                   \
    {                                 \
        HitpointName="HitDiaphragm";  \
        armor=" 28 +  3";             \
        PassThrough=0.1;              \
    };                                \
    class Abdomen                     \
    {                                 \
        hitpointName="HitAbdomen";    \
        armor=3;                      \
        passThrough=0.6;              \
    };                                \
    class Body                        \
    {                                 \
        hitpointName="HitBody";       \
        armor=0;                      \
        passThrough=0.4;              \
    };                                \
};                                    


#define IMTV_VEST_MACRO(VARIANT,MODEL,DISPLAYNAME,PATCHPATH)                            \
    class 13th_IMTV_##VARIANT##_##PATCHPATH##: 13th_IMTV_base {                         \
        scope = 2;                                                                      \
        displayname = #DISPLAYNAME;                                                     \
        model = QXYIP(MODEL);                                                           \
        hiddenSelections [] =                                                           \
        {                                                                               \
            "camo1",                                                                    \
            "camo2",                                                                    \
            "camo3",                                                                    \
            "camo4",                                                                    \
            "camo9"                                                                     \
        };                                                                              \
        hiddenSelectionsTextures [] =                                                   \
        {                                                                               \
			"XYI_VEST_PACK_1\data\Retex\Coyote\mtv_vest_Coyote_co.paa",                 \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_magpouch_Coyote_co.paa",               \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_grenadepouch_Coyote_co.paa",           \
			"XYI_VEST_PACK_1\data\Retex\Coyote\p_gear_Coyote_co.paa",                   \
            QP(##PATCHPATH##.paa)                                                       \
        };                                                                              \
        class ItemInfo: ItemInfo                                                        \
        {                                                                               \
			uniformModel = QXYIP(MODEL);                                                \
            hiddenSelections [] =                                                       \
            {                                                                           \
                "camo1",                                                                \
                "camo2",                                                                \
                "camo3",                                                                \
                "camo4",                                                                \
                "camo9"                                                                 \
            };                                                                          \
            hiddenSelectionsTextures [] =                                               \
            {                                                                           \
                "XYI_VEST_PACK_1\data\Retex\Coyote\mtv_vest_Coyote_co.paa",             \
                "XYI_VEST_PACK_1\data\Retex\Coyote\c_magpouch_Coyote_co.paa",           \
                "XYI_VEST_PACK_1\data\Retex\Coyote\c_grenadepouch_Coyote_co.paa",       \
                "XYI_VEST_PACK_1\data\Retex\Coyote\p_gear_Coyote_co.paa",               \
                QP(##PATCHPATH##.paa)                                                   \
            };                                                                          \
        };                                                                              \
    };                                                                                                              

#define IMTV_GI(VARIANT,PATCHPATH)             \
class 13th_IMTV_##VARIANT##_##PATCHPATH## {    \
    model = "13th_IMTV_vests";                 \
    variant = #VARIANT;                        \
    patch = #PATCHPATH;                        \
};                                             


#define ALLIMTV(PATCHPATH) \
IMTV_VEST_MACRO(ASSAULT_1,IMTV_USMC_1.p3d,[13] IMTV Vest (Assault 1),PATCHPATH) \
IMTV_VEST_MACRO(ASSAULT_2,IMTV_USMC_2.p3d,[13] IMTV Vest (Assault 2),PATCHPATH) \
IMTV_VEST_MACRO(ASSAULT_3,IMTV_USMC_6.p3d,[13] IMTV Vest (Assault 3),PATCHPATH) \
IMTV_VEST_MACRO(ASSAULT_4,IMTV_USMC_9.p3d,[13] IMTV Vest (Assault 4),PATCHPATH) \
IMTV_VEST_MACRO(LIGHT,IMTV_USMC_10.p3d,[13] IMTV Vest (Light),PATCHPATH) \
IMTV_VEST_MACRO(MG,IMTV_USMC_7.p3d,[13] IMTV Vest (MG),PATCHPATH) \
IMTV_VEST_MACRO(GRENADIER,IMTV_USMC_4.p3d,[13] IMTV Vest (Grenadier),PATCHPATH) \
IMTV_VEST_MACRO(RTO_1,IMTV_USMC_3.p3d,[13] IMTV Vest (RTO 1),PATCHPATH) \
IMTV_VEST_MACRO(RTO_2,IMTV_USMC_5.p3d,[13] IMTV Vest (RTO 2),PATCHPATH) \
IMTV_VEST_MACRO(TL,IMTV_USMC_8.p3d,[13] IMTV Vest (TL),PATCHPATH) \


#define ALLIMTVGI(PATCHPATH)      \
IMTV_GI(ASSAULT_1,PATCHPATH)      \
IMTV_GI(ASSAULT_2,PATCHPATH)      \
IMTV_GI(ASSAULT_3,PATCHPATH)      \
IMTV_GI(ASSAULT_4,PATCHPATH)      \
IMTV_GI(LIGHT,PATCHPATH)          \
IMTV_GI(MG,PATCHPATH)             \
IMTV_GI(GRENADIER,PATCHPATH)      \
IMTV_GI(RTO_1,PATCHPATH)          \
IMTV_GI(RTO_2,PATCHPATH)          \
IMTV_GI(TL,PATCHPATH)             

