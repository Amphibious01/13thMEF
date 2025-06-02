/*
    this is seperated to maintain my sanity and readability of the other macro file
    (help me)
*/


#define SPC_VEST_MACRO_ASSAULT1(PATCHPATH)                                  	    \
    class 13th_SPC_ASSAULT1_##PATCHPATH##: 13th_IMTV_base {                         \
        scope = 2;                                                                  \
        displayname = "[13] SPC Vest (Assault 1)";                                  \
        model = "\XYI_USMC_ASSET\model\SPC_USMC_1.p3d";                             \
        hiddenSelections [] =                                                       \
        {                                                                           \
			"camo1",                                                                \
			"camo2",                                                                \
			"camo3",                                                                \
			"camo4",                                                                \
			"camo5",                                                                \
			"camo9"                                                                 \
        };                                                                          \
        hiddenSelectionsTextures [] =                                               \
        {                                                                           \
			"XYI_VEST_PACK_1\data\Retex\Coyote\M_SPC_Vest_Coyote_co.paa",           \
			"XYI_VEST_PACK_1\data\Retex\Coyote\C_MagPouch_Coyote_co.paa",           \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_grenadepouch_Coyote_co.paa",       \
			"XYI_VEST_PACK_1\data\Retex\Coyote\p_gear_Coyote_2_co.paa",             \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_fannydrop_Coyote_co.paa",          \
            QP(##PATCHPATH##.paa)                                                   \
        };                                                                          \
        class ItemInfo: ItemInfo                                                    \
        {                                                                           \
			uniformModel = "\XYI_USMC_ASSET\model\SPC_USMC_1.p3d";                  \
            hiddenSelections [] =                                                   \
            {                                                                       \
			    "camo1",                                                            \
			    "camo2",                                                            \
			    "camo3",                                                            \
			    "camo4",                                                            \
			    "camo5",                                                            \
			    "camo9"                                                             \
            };                                                                      \
            hiddenSelectionsTextures [] =                                           \
            {                                                                       \
			    "XYI_VEST_PACK_1\data\Retex\Coyote\M_SPC_Vest_Coyote_co.paa",       \
			    "XYI_VEST_PACK_1\data\Retex\Coyote\C_MagPouch_Coyote_co.paa",       \
			    "XYI_VEST_PACK_1\data\Retex\Coyote\c_grenadepouch_Coyote_co.paa",   \
			    "XYI_VEST_PACK_1\data\Retex\Coyote\p_gear_Coyote_2_co.paa",         \
			    "XYI_VEST_PACK_1\data\Retex\Coyote\c_fannydrop_Coyote_co.paa",      \
                QP(##PATCHPATH##.paa)                                               \
            };                                                                      \
        };                                                                          \
    };                                                                             


#define SPC_VEST_MACRO_ASSAULT2(PATCHPATH)                                  	    \
    class 13th_SPC_ASSAULT2_##PATCHPATH##: 13th_IMTV_base {                         \
        scope = 2;                                                                  \
        displayname = "[13] SPC Vest (Assault 2)";                                  \
        model = "\XYI_USMC_ASSET\model\SPC_USMC_2.p3d";                             \
        hiddenSelections [] =                                                       \
        {                                                                           \
			"camo1",                                                                \
			"camo2",                                                                \
			"camo3",                                                                \
			"camo4",                                                                \
			"camo5",                                                                \
			"camo9"                                                                 \
        };                                                                          \
        hiddenSelectionsTextures [] =                                               \
        {                                                                           \
			"XYI_VEST_PACK_1\data\Retex\Coyote\M_SPC_Vest_Coyote_co.paa",           \
			"XYI_VEST_PACK_1\data\Retex\Coyote\C_MagPouch_Coyote_co.paa",           \
			"XYI_VEST_PACK_1\data\Retex\Coyote\g_mbav_Coyote_co.paa",               \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_pistolpouchb_Coyote_co.paa",       \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_fannydrop_Coyote_co.paa",          \
            QP(##PATCHPATH##.paa)                                                   \
        };                                                                          \
        class ItemInfo: ItemInfo                                                    \
        {                                                                           \
			uniformModel = "\XYI_USMC_ASSET\model\SPC_USMC_2.p3d";                  \
            hiddenSelections [] =                                                   \
            {                                                                       \
			    "camo1",                                                            \
			    "camo2",                                                            \
			    "camo3",                                                            \
			    "camo4",                                                            \
			    "camo5",                                                            \
			    "camo9"                                                             \
            };                                                                      \
            hiddenSelectionsTextures [] =                                           \
            {                                                                       \
			"XYI_VEST_PACK_1\data\Retex\Coyote\M_SPC_Vest_Coyote_co.paa",           \
			"XYI_VEST_PACK_1\data\Retex\Coyote\C_MagPouch_Coyote_co.paa",           \
			"XYI_VEST_PACK_1\data\Retex\Coyote\g_mbav_Coyote_co.paa",               \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_pistolpouchb_Coyote_co.paa",       \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_fannydrop_Coyote_co.paa",          \
                QP(##PATCHPATH##.paa)                                               \
            };                                                                      \
        };                                                                          \
    };                                                                             

#define SPC_VEST_MACRO_ASSAULT3(PATCHPATH)                                 		   \
    class 13th_SPC_ASSAULT3_##PATCHPATH##: 13th_IMTV_base {                         \
        scope = 2;                                                                  \
        displayname = "[13] SPC Vest (Assault 3)";                                  \
        model = "\XYI_USMC_ASSET\model\SPC_USMC_3.p3d";                             \
        hiddenSelections [] =                                                       \
        {                                                                           \
			"camo1",                                                                \
			"camo2",                                                                \
			"camo3",                                                                \
			"camo4",                                                                \
			"camo5",                                                                \
			"camo9"                                                                 \
        };                                                                          \
        hiddenSelectionsTextures [] =                                               \
        {                                                                           \
			"XYI_VEST_PACK_1\data\Retex\Coyote\M_SPC_Vest_Coyote_co.paa",           \
			"XYI_VEST_PACK_1\data\Retex\Coyote\C_MagPouch_Coyote_co.paa",           \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_grenadepouch_Coyote_co.paa",       \
			"XYI_VEST_PACK_1\data\Retex\Coyote\p_gear_Coyote_co.paa",               \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_fannydrop_Coyote_co.paa",          \
            QP(##PATCHPATH##.paa)                                                   \
        };                                                                          \
        class ItemInfo: ItemInfo                                                    \
        {                                                                           \
			uniformModel = "\XYI_USMC_ASSET\model\SPC_USMC_3.p3d";                                            \
            hiddenSelections [] =                                                   \
            {                                                                       \
			    "camo1",                                                            \
			    "camo2",                                                            \
			    "camo3",                                                            \
			    "camo4",                                                            \
			    "camo5",                                                            \
			    "camo9"                                                             \
            };                                                                      \
            hiddenSelectionsTextures [] =                                           \
            {                                                                       \
                "XYI_VEST_PACK_1\data\Retex\Coyote\M_SPC_Vest_Coyote_co.paa",       \
                "XYI_VEST_PACK_1\data\Retex\Coyote\C_MagPouch_Coyote_co.paa",       \
                "XYI_VEST_PACK_1\data\Retex\Coyote\c_grenadepouch_Coyote_co.paa",   \
                "XYI_VEST_PACK_1\data\Retex\Coyote\p_gear_Coyote_co.paa",           \
                "XYI_VEST_PACK_1\data\Retex\Coyote\c_fannydrop_Coyote_co.paa",      \
                QP(##PATCHPATH##.paa)                                               \
            };                                                                      \
        };                                                                          \
    };                                                                             


#define SPC_VEST_MACRO_ASSAULT4(PATCHPATH)                                    \
    class 13th_SPC_ASSAULT4_##PATCHPATH##: 13th_IMTV_base {                         \
        scope = 2;                                                                  \
        displayname = "[13] SPC Vest (Assault 4)";                                  \
        model = "\XYI_USMC_ASSET\model\SPC_USMC_5.p3d";                                                       \
        hiddenSelections [] =                                                       \
        {                                                                           \
			"camo1",                                                                \
			"camo2",                                                                \
			"camo3",                                                                \
			"camo4",                                                                \
			"camo5",                                                                \
			"camo9"                                                                 \
        };                                                                          \
        hiddenSelectionsTextures [] =                                               \
        {                                                                           \
			"XYI_VEST_PACK_1\data\Retex\Coyote\M_SPC_Vest_Coyote_co.paa",           \
			"XYI_VEST_PACK_1\data\Retex\Coyote\C_MagPouch_Coyote_co.paa",           \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_grenadepouch_Coyote_co.paa",       \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_u_pouch_Coyote_co.paa",            \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_fannydrop_Coyote_co.paa",          \
            QP(##PATCHPATH##.paa)                                                   \
        };                                                                          \
        class ItemInfo: ItemInfo                                                    \
        {                                                                           \
			uniformModel = "\XYI_USMC_ASSET\model\SPC_USMC_5.p3d";                                            \
            hiddenSelections [] =                                                   \
            {                                                                       \
			    "camo1",                                                            \
			    "camo2",                                                            \
			    "camo3",                                                            \
			    "camo4",                                                            \
			    "camo5",                                                            \
			    "camo9"                                                             \
            };                                                                      \
            hiddenSelectionsTextures [] =                                           \
            {                                                                       \
				"XYI_VEST_PACK_1\data\Retex\Coyote\M_SPC_Vest_Coyote_co.paa",       \
				"XYI_VEST_PACK_1\data\Retex\Coyote\C_MagPouch_Coyote_co.paa",       \
				"XYI_VEST_PACK_1\data\Retex\Coyote\c_grenadepouch_Coyote_co.paa",   \
				"XYI_VEST_PACK_1\data\Retex\Coyote\c_u_pouch_Coyote_co.paa",        \
				"XYI_VEST_PACK_1\data\Retex\Coyote\c_fannydrop_Coyote_co.paa",      \
                QP(##PATCHPATH##.paa)                                               \
            };                                                                      \
        };                                                                          \
    };                                                                             


#define SPC_VEST_MACRO_MG(PATCHPATH)                                          \
    class 13th_SPC_MG_##PATCHPATH##: 13th_IMTV_base {                               \
        scope = 2;                                                                  \
        displayname = "[13] SPC Vest (MG)";                                         \
        model = "\XYI_USMC_ASSET\model\SPC_USMC_4.p3d";                                                       \
        hiddenSelections [] =                                                       \
        {                                                                           \
			"camo1",                                                                \
			"camo2",                                                                \
			"camo3",                                                                \
			"camo4",                                                                \
			"camo5",                                                                \
			"camo9"                                                                 \
        };                                                                          \
        hiddenSelectionsTextures [] =                                               \
        {                                                                           \
			"XYI_VEST_PACK_1\data\Retex\Coyote\M_SPC_Vest_Coyote_co.paa",           \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_u_pouch_Coyote_co.paa",            \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_grenadepouch_Coyote_co.paa",       \
			"XYI_VEST_PACK_1\data\Retex\Coyote\p_gear_Coyote_co.paa",               \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_fannydrop_Coyote_co.paa",          \
            QP(##PATCHPATH##.paa)                                                   \
        };                                                                          \
        class ItemInfo: ItemInfo                                                    \
        {                                                                           \
			uniformModel = "\XYI_USMC_ASSET\model\SPC_USMC_4.p3d";                                            \
            hiddenSelections [] =                                                   \
            {                                                                       \
			    "camo1",                                                            \
			    "camo2",                                                            \
			    "camo3",                                                            \
			    "camo4",                                                            \
			    "camo5",                                                            \
			    "camo9"                                                             \
            };                                                                      \
            hiddenSelectionsTextures [] =                                           \
            {                                                                       \
				"XYI_VEST_PACK_1\data\Retex\Coyote\M_SPC_Vest_Coyote_co.paa",       \
				"XYI_VEST_PACK_1\data\Retex\Coyote\c_u_pouch_Coyote_co.paa",        \
				"XYI_VEST_PACK_1\data\Retex\Coyote\c_grenadepouch_Coyote_co.paa",   \
				"XYI_VEST_PACK_1\data\Retex\Coyote\p_gear_Coyote_co.paa",           \
				"XYI_VEST_PACK_1\data\Retex\Coyote\c_fannydrop_Coyote_co.paa",      \
                QP(##PATCHPATH##.paa)                                               \
            };                                                                      \
        };                                                                          \
    };                                                                             


#define SPC_VEST_MACRO_TL1(PATCHPATH)                                          \
    class 13th_SPC_TL1_##PATCHPATH##: 13th_IMTV_base {                               \
        scope = 2;                                                                   \
        displayname = "[13] SPC Vest (TL 1)";                                        \
        model = "\XYI_USMC_ASSET\model\SPC_USMC_6.p3d";                                                        \
        hiddenSelections [] =                                                        \
        {                                                                            \
			"camo1",                                                                 \
			"camo2",                                                                 \
			"camo3",                                                                 \
			"camo4",                                                                 \
			"camo5",                                                                 \
			"camo9"                                                                  \
        };                                                                           \
        hiddenSelectionsTextures [] =                                                \
        {                                                                            \
			"XYI_VEST_PACK_1\data\Retex\Coyote\M_SPC_Vest_Coyote_co.paa",            \
			"XYI_VEST_PACK_1\data\Retex\Coyote\C_MagPouch_Coyote_co.paa",            \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_grenadepouch_Coyote_co.paa",        \
			"XYI_VEST_PACK_1\data\Retex\Coyote\p_gear_Coyote_2_co.paa",              \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_fannydrop_Coyote_co.paa",           \
            QP(##PATCHPATH##.paa)                                                    \
        };                                                                           \
        class ItemInfo: ItemInfo                                                     \
        {                                                                            \
			uniformModel = "\XYI_USMC_ASSET\model\SPC_USMC_6.p3d";                                             \
            hiddenSelections [] =                                                    \
            {                                                                        \
			    "camo1",                                                             \
			    "camo2",                                                             \
			    "camo3",                                                             \
			    "camo4",                                                             \
			    "camo5",                                                             \
			    "camo9"                                                              \
            };                                                                       \
            hiddenSelectionsTextures [] =                                            \
            {                                                                        \
				"XYI_VEST_PACK_1\data\Retex\Coyote\M_SPC_Vest_Coyote_co.paa",        \
				"XYI_VEST_PACK_1\data\Retex\Coyote\C_MagPouch_Coyote_co.paa",        \
				"XYI_VEST_PACK_1\data\Retex\Coyote\c_grenadepouch_Coyote_co.paa",    \
				"XYI_VEST_PACK_1\data\Retex\Coyote\p_gear_Coyote_2_co.paa",          \
				"XYI_VEST_PACK_1\data\Retex\Coyote\c_fannydrop_Coyote_co.paa",       \
                QP(##PATCHPATH##.paa)                                                \
            };                                                                       \
        };                                                                           \
    };                                                                             

#define SPC_VEST_MACRO_TL2(PATCHPATH)                                          \
    class 13th_SPC_TL2_##PATCHPATH##: 13th_IMTV_base {                               \
        scope = 2;                                                                   \
        displayname = "[13] SPC Vest (TL 2)";                                        \
        model = "\XYI_USMC_ASSET\model\SPC_USMC_9.p3d";                                                        \
        hiddenSelections [] =                                                        \
        {                                                                            \
			"camo1",                                                                 \
			"camo2",                                                                 \
			"camo3",                                                                 \
			"camo4",                                                                 \
			"camo5",                                                                 \
			"camo6",                                                                 \
			"camo9"                                                                  \
        };                                                                           \
        hiddenSelectionsTextures [] =                                                \
        {                                                                            \
			"XYI_VEST_PACK_1\data\Retex\Coyote\M_SPC_Vest_Coyote_co.paa",            \
			"XYI_VEST_PACK_1\data\Retex\Coyote\C_MagPouch_Coyote_co.paa",            \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_grenadepouch_Coyote_co.paa",        \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_u_pouch_Coyote_co.paa",             \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_fannydrop_Coyote_co.paa",           \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_radiopouchb_Coyote_co.paa",         \
            QP(##PATCHPATH##.paa)                                                    \
        };                                                                           \
        class ItemInfo: ItemInfo                                                     \
        {                                                                            \
			uniformModel = "\XYI_USMC_ASSET\model\SPC_USMC_9.p3d";                                             \
            hiddenSelections [] =                                                    \
            {                                                                        \
				"camo1",                                                             \
				"camo2",                                                             \
				"camo3",                                                             \
				"camo4",                                                             \
				"camo5",                                                             \
				"camo6",                                                             \
				"camo9"                                                              \
            };                                                                       \
            hiddenSelectionsTextures [] =                                            \
            {                                                                        \
				"XYI_VEST_PACK_1\data\Retex\Coyote\M_SPC_Vest_Coyote_co.paa",        \
				"XYI_VEST_PACK_1\data\Retex\Coyote\C_MagPouch_Coyote_co.paa",        \
				"XYI_VEST_PACK_1\data\Retex\Coyote\c_grenadepouch_Coyote_co.paa",    \
				"XYI_VEST_PACK_1\data\Retex\Coyote\c_u_pouch_Coyote_co.paa",         \
				"XYI_VEST_PACK_1\data\Retex\Coyote\c_fannydrop_Coyote_co.paa",       \
				"XYI_VEST_PACK_1\data\Retex\Coyote\c_radiopouchb_Coyote_co.paa",     \
                QP(##PATCHPATH##.paa)                                                \
            };                                                                       \
        };                                                                           \
    };                                                                             

#define SPC_VEST_MACRO_RTO1(PATCHPATH)                                         \
    class 13th_SPC_RTO1_##PATCHPATH##: 13th_IMTV_base {                              \
        scope = 2;                                                                   \
        displayname = "[13] SPC Vest (RTO 1)";                                       \
        model = "\XYI_USMC_ASSET\model\SPC_USMC_7.p3d";                                                        \
        hiddenSelections [] =                                                        \
        {                                                                            \
			"camo1",                                                                 \
			"camo2",                                                                 \
			"camo3",                                                                 \
			"camo4",                                                                 \
			"camo5",                                                                 \
			"camo6",                                                                 \
			"camo9"                                                                  \
        };                                                                           \
        hiddenSelectionsTextures [] =                                                \
        {                                                                            \
			"XYI_VEST_PACK_1\data\Retex\Coyote\M_SPC_Vest_Coyote_co.paa",            \
			"XYI_VEST_PACK_1\data\Retex\Coyote\C_MagPouch_Coyote_co.paa",            \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_grenadepouch_Coyote_co.paa",        \
			"XYI_VEST_PACK_1\data\Retex\Coyote\p_gear_Coyote_co.paa",                \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_fannydrop_Coyote_co.paa",           \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_radiopouchb_Coyote_co.paa",         \
            QP(##PATCHPATH##.paa)                                                    \
        };                                                                           \
        class ItemInfo: ItemInfo                                                     \
        {                                                                            \
			uniformModel = "\XYI_USMC_ASSET\model\SPC_USMC_7.p3d";                                             \
            hiddenSelections [] =                                                    \
            {                                                                        \
				"camo1",                                                             \
				"camo2",                                                             \
				"camo3",                                                             \
				"camo4",                                                             \
				"camo5",                                                             \
				"camo6",                                                             \
				"camo9"                                                              \
            };                                                                       \
            hiddenSelectionsTextures [] =                                            \
            {                                                                        \
				"XYI_VEST_PACK_1\data\Retex\Coyote\M_SPC_Vest_Coyote_co.paa",        \
				"XYI_VEST_PACK_1\data\Retex\Coyote\C_MagPouch_Coyote_co.paa",        \
				"XYI_VEST_PACK_1\data\Retex\Coyote\c_grenadepouch_Coyote_co.paa",    \
				"XYI_VEST_PACK_1\data\Retex\Coyote\p_gear_Coyote_co.paa",            \
				"XYI_VEST_PACK_1\data\Retex\Coyote\c_fannydrop_Coyote_co.paa",       \
				"XYI_VEST_PACK_1\data\Retex\Coyote\c_radiopouchb_Coyote_co.paa",     \
                QP(##PATCHPATH##.paa)                                                \
            };                                                                       \
        };                                                                           \
    };                                                                             


#define SPC_VEST_MACRO_RTO2(PATCHPATH)                                         \
    class 13th_SPC_RTO2_##PATCHPATH##: 13th_IMTV_base {                              \
        scope = 2;                                                                   \
        displayname = "[13] SPC Vest (RTO 2)";                                       \
        model = "\XYI_USMC_ASSET\model\SPC_USMC_10.p3d";                                                        \
        hiddenSelections [] =                                                        \
        {                                                                            \
			"camo1",                                                                 \
			"camo2",                                                                 \
			"camo3",                                                                 \
			"camo4",                                                                 \
			"camo5",                                                                 \
			"camo6",                                                                 \
			"camo9"                                                                  \
        };                                                                           \
        hiddenSelectionsTextures [] =                                                \
        {                                                                            \
			"XYI_VEST_PACK_1\data\Retex\Coyote\M_SPC_Vest_Coyote_co.paa",            \
			"XYI_VEST_PACK_1\data\Retex\Coyote\C_MagPouch_Coyote_co.paa",            \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_grenadepouch_Coyote_co.paa",        \
			"XYI_VEST_PACK_1\data\Retex\Coyote\p_gear_Coyote_co.paa",                \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_fannydrop_Coyote_co.paa",           \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_radiopouchb_Coyote_co.paa",         \
            QP(##PATCHPATH##.paa)                                                    \
        };                                                                           \
        class ItemInfo: ItemInfo                                                     \
        {                                                                            \
			uniformModel = "\XYI_USMC_ASSET\model\SPC_USMC_10.p3d";                                             \
            hiddenSelections [] =                                                    \
            {                                                                        \
				"camo1",                                                             \
				"camo2",                                                             \
				"camo3",                                                             \
				"camo4",                                                             \
				"camo5",                                                             \
				"camo6",                                                             \
				"camo9"                                                              \
            };                                                                       \
            hiddenSelectionsTextures [] =                                            \
            {                                                                        \
				"XYI_VEST_PACK_1\data\Retex\Coyote\M_SPC_Vest_Coyote_co.paa",        \
				"XYI_VEST_PACK_1\data\Retex\Coyote\C_MagPouch_Coyote_co.paa",        \
				"XYI_VEST_PACK_1\data\Retex\Coyote\c_grenadepouch_Coyote_co.paa",    \
				"XYI_VEST_PACK_1\data\Retex\Coyote\p_gear_Coyote_co.paa",            \
				"XYI_VEST_PACK_1\data\Retex\Coyote\c_fannydrop_Coyote_co.paa",       \
				"XYI_VEST_PACK_1\data\Retex\Coyote\c_radiopouchb_Coyote_co.paa",     \
                QP(##PATCHPATH##.paa)                                                \
            };                                                                       \
        };                                                                           \
    };                                                                             


#define SPC_VEST_MACRO_GRENADIER(PATCHPATH)                                    \
    class 13th_SPC_GRENADIER_##PATCHPATH##: 13th_IMTV_base {                         \
        scope = 2;                                                                   \
        displayname = "[13] SPC Vest (Grenadier)";                                   \
        model = "\XYI_USMC_ASSET\model\SPC_USMC_8.p3d";                                                        \
        hiddenSelections [] =                                                        \
        {                                                                            \
			"camo1",                                                                 \
			"camo2",                                                                 \
			"camo3",                                                                 \
			"camo4",                                                                 \
			"camo5",                                                                 \
			"camo6",                                                                 \
			"camo9"                                                                  \
        };                                                                           \
        hiddenSelectionsTextures [] =                                                \
        {                                                                            \
			"XYI_VEST_PACK_1\data\Retex\Coyote\M_SPC_Vest_Coyote_co.paa",            \
			"XYI_VEST_PACK_1\data\Retex\Coyote\C_MagPouch_Coyote_co.paa",            \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_grenadepouch_Coyote_co.paa",        \
			"XYI_VEST_PACK_1\data\Retex\Coyote\p_gear_Coyote_co.paa",                \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_fannydrop_Coyote_co.paa",           \
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_radiopouchb_Coyote_co.paa",         \
            QP(##PATCHPATH##.paa)                                                    \
        };                                                                           \
        class ItemInfo: ItemInfo                                                     \
        {                                                                            \
			uniformModel = "\XYI_USMC_ASSET\model\SPC_USMC_8.p3d";                                             \
            hiddenSelections [] =                                                    \
            {                                                                        \
				"camo1",                                                             \
				"camo2",                                                             \
				"camo3",                                                             \
				"camo4",                                                             \
				"camo5",                                                             \
				"camo6",                                                             \
				"camo9"                                                              \
            };                                                                       \
            hiddenSelectionsTextures [] =                                            \
            {                                                                        \
				"XYI_VEST_PACK_1\data\Retex\Coyote\M_SPC_Vest_Coyote_co.paa",        \
				"XYI_VEST_PACK_1\data\Retex\Coyote\C_MagPouch_Coyote_co.paa",        \
				"XYI_VEST_PACK_1\data\Retex\Coyote\c_grenadepouch_Coyote_co.paa",    \
				"XYI_VEST_PACK_1\data\Retex\Coyote\p_gear_Coyote_co.paa",            \
				"XYI_VEST_PACK_1\data\Retex\Coyote\c_fannydrop_Coyote_co.paa",       \
				"XYI_VEST_PACK_1\data\Retex\Coyote\c_radiopouchb_Coyote_co.paa",     \
                QP(##PATCHPATH##.paa)                                                \
            };                                                                       \
        };                                                                           \
    };                                                                             


#define SPC_GI(VARIANT,PATCHPATH)             \
class 13th_SPC_##VARIANT##_##PATCHPATH## {    \
    model = "13th_SPC_vests";                 \
    variant = #VARIANT;                       \
    patch = #PATCHPATH;                       \
};                                             


#define ALLSPC(PATCHPATH)           \
SPC_VEST_MACRO_ASSAULT1(PATCHPATH)  \
SPC_VEST_MACRO_ASSAULT2(PATCHPATH)  \
SPC_VEST_MACRO_ASSAULT3(PATCHPATH)  \
SPC_VEST_MACRO_ASSAULT4(PATCHPATH)  \
SPC_VEST_MACRO_MG(PATCHPATH)        \
SPC_VEST_MACRO_TL1(PATCHPATH)       \
SPC_VEST_MACRO_TL2(PATCHPATH)       \
SPC_VEST_MACRO_RTO1(PATCHPATH)      \
SPC_VEST_MACRO_RTO2(PATCHPATH)      \
SPC_VEST_MACRO_GRENADIER(PATCHPATH) \


#define ALLSPCGI(PATCHPATH)	\
SPC_GI(ASSAULT1,PATCHPATH)	\
SPC_GI(ASSAULT2,PATCHPATH)	\
SPC_GI(ASSAULT3,PATCHPATH)	\
SPC_GI(ASSAULT4,PATCHPATH)	\
SPC_GI(MG,PATCHPATH)		\
SPC_GI(TL1,PATCHPATH)		\
SPC_GI(TL2,PATCHPATH)		\
SPC_GI(RTO1,PATCHPATH)		\
SPC_GI(RTO2,PATCHPATH)		\
SPC_GI(GRENADIER,PATCHPATH)	\



