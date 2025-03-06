#define GROUND_SP_INFO(VEHICLE,TYPE,PRIORITY,COST)	                    \
    class VehicleSpawnerInfo											\
    {																	\
        class 13th_ground_spawner									    \
        {																\
            scope = 1;													\
            spawner = "13th Ground"; 								    \
            vehicle= #VEHICLE; 											\
            type = #TYPE; 												\
            cost = COST; 												\
            priority = PRIORITY;										\
            };															\
        };																

#define BASICINV                                                                                                               \
class TransportMagazines {                                                                                                     \
    class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag { magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag"; count = 10;};              \
};                                                                                                                             \
class TransportWeapons {                                                                                                       \
    class _xx_rhs_weap_M136 { weapon = "rhs_weap_M136"; count = 2;};                                                           \
};                                                                                                                             \
class TransportItems {};                                                                                                       \
class TransportBackpacks {};

#define HIGHROLLERINVENTORY                                                                                                   \
class TransportMagazines {                                                                                                    \
    class _xx_rhsusf_100Rnd_762x51_m62_tracer { magazine = "rhsusf_100Rnd_762x51_m62_tracer"; count = 5;};                    \
    class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249 { magazine = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"; count = 7;};        \
    class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag { magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag"; count = 10;};             \
    class _xx_rhs_fgm148_magazine_AT { magazine = "rhs_fgm148_magazine_AT"; count = 4;};                                      \
    class _xx_rhs_mag_smaw_HEDP { magazine = "rhs_mag_smaw_HEDP"; count = 5;};                                                \
};                                                                                                                            \
class TransportWeapons {                                                                                                      \
    class _xx_rhs_weap_m4a1_carryhandle { weapon = "rhs_weap_m4a1_carryhandle"; count = 3;};                                  \
    class _xx_rhs_weap_M136_hedp { weapon = "rhs_weap_M136_hedp"; count = 3;};                                                \
    class _xx_rhs_weap_smaw_green { weapon = "rhs_weap_smaw_green"; count = 1;};                                              \
    class _xx_Rangefinder { weapon = "Rangefinder"; count = 2;};                                                              \
};                                                                                                                            \
class TransportItems {                                                                                                        \
    class _xx_MineDetector { name = "MineDetector"; count = 2;};                                                              \
    class _xx_ToolKit { name = "ToolKit"; count = 1;};                                                                        \
    class _xx_ACE_DefusalKit { name = "ACE_DefusalKit"; count = 2;};                                                          \
    class _xx_ACE_bloodIV_250 { name = "ACE_bloodIV_250"; count = 5;};                                                        \
    class _xx_ACE_bloodIV_500 { name = "ACE_bloodIV_500 "; count = 5;};                                                       \
    class _xx_ACE_bloodIV { name = "ACE_bloodIV"; count = 4;};                                                                \
    class _xx_ACE_elasticBandage { name = "ACE_elasticBandage"; count = 30;};                                                 \
    class _xx_ACE_epinephrine { name = "ACE_epinephrine"; count = 5;};                                                        \
    class _xx_ACE_morphine { name = "ACE_morphine"; count = 5;};                                                              \
};                                                                                                                            \
class TransportBackpacks{};

#define KICKERINVENTORY                                                                                                       \
class TransportMagazines {                                                                                                    \
    class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag { magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag"; count = 10;};             \
    class _xx_CUP_SMAW_NE_M { magazine = "CUP_SMAW_NE_M"; count = 5;};                                                        \
    class _xx_SmokeShell { weapon = "SmokeShell"; count = 8;};                                                                \
    class _xx_SmokeShellYellow { weapon = "SmokeShellYellow"; count = 8;};                                                    \
};                                                                                                                            \
class TransportWeapons {                                                                                                      \
    class _xx_rhs_weap_M136 { weapon = "rhs_weap_M136"; count = 6;};                                                          \
};                                                                                                                            \
class TransportItems {                                                                                                        \
    class _xx_ToolKit { name = "ToolKit"; count = 1;};                                                                        \
    class _xx_ACE_bloodIV { name = "ACE_bloodIV"; count = 4;};                                                                \
    class _xx_ACE_elasticBandage { name = "ACE_elasticBandage"; count = 30;};                                                 \
    class _xx_ACE_epinephrine { name = "ACE_epinephrine"; count = 5;};                                                        \
    class _xx_ACE_morphine { name = "ACE_morphine"; count = 5;};                                                              \
};                                                                                                                            \
class TransportBackpacks{};


#define LAV25_TEXTURESETS                                                          \
class textureSources {                                                             \
    class 13th_LAV25_default {                                                     \
        displayName = "Default";                                                   \
        author = "Cap";                                                            \
        textures[] = {                                                             \
            "\x\13thMEF\addons\13th_vehicles\data\lav_body_co.paa",                \
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavbody2_co.paa", \
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lav_hq_co.paa",   \
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavalfa_ca.paa"   \
        };                                                                         \
        factions[] = {"b_oseamarinecorps"};                                        \
    };                                                                             \
};                                                                                 