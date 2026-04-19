#define P(PATH) \x\13thMEF\addons\13th_uniforms\##PATH
#define QP(PATH) #P(PATH)

#define GLUE(A,B) A##B
#define GLUE3(A,B,C) A##B##C

#define XTP(SFX) QP(xtd_icons\##SFX.paa)

#define UNIFORM_FROG_GI(GLOVES,VARIANT,CAMO,SLEEVE)  \
class 13th_FROG_##GLOVES##VARIANT##_##CAMO##         \
{                                                    \
    model = "13th_FROG_uni";                         \
    sleeve = #SLEEVE;                                \
    camo = #CAMO;                                    \
    gloves = #GLOVES;                                \
};                                                   

#define ALL_FROG_GI(CAMO)                       \
UNIFORM_FROG_GI(NOGLOVES,1,CAMO,rolled)         \
UNIFORM_FROG_GI(NOGLOVES,2,CAMO,tight)          \
UNIFORM_FROG_GI(NOGLOVES,3,CAMO,loose)          \
UNIFORM_FROG_GI(KYLEGLOVES,1,CAMO,rolled)       \
UNIFORM_FROG_GI(KYLEGLOVES,2,CAMO,tight)        \
UNIFORM_FROG_GI(KYLEGLOVES,3,CAMO,loose)        \
UNIFORM_FROG_GI(OAKLEYGLOVES,1,CAMO,rolled)     \
UNIFORM_FROG_GI(OAKLEYGLOVES,2,CAMO,tight)      \
UNIFORM_FROG_GI(OAKLEYGLOVES,3,CAMO,loose)      \
UNIFORM_FROG_GI(MEKANIXGLOVES,1,CAMO,rolled)    \
UNIFORM_FROG_GI(MEKANIXGLOVES,2,CAMO,tight)     \
UNIFORM_FROG_GI(MEKANIXGLOVES,3,CAMO,loose)     

