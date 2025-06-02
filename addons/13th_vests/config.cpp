#include "macros.hpp"
#include "spc_macros.hpp"

class CfgPatches 
{    
    class 13thVests 
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1;
        requiredAddons[] = {};
    };
};

class cfgWeapons 
{

class V_PlateCarrier1_rgr;
class VestItem;


    class 13th_vestBase: V_PlateCarrier1_rgr
    {
        author = "CAP RAHHH";
        scope = 0;
        displayname = "you should not be seeing this";
        model="";
        class ItemInfo: VestItem
        {
            uniformModel = "";
            hiddenSelections [] = 
            {

            };
            hiddenSelectionsTextures [] =
            {

            };
            VESTITEMINFO
        };
    };

    ///// IMTV VESTS ///////

    class 13th_IMTV_base: 13th_vestBase 
    {
        author = "13th MEF";
        model = "";
        hiddenSelections[]=
         {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo9"
            };
        hiddenSelectionsTextures[]=
          {
			"XYI_VEST_PACK_1\data\Retex\Coyote\mtv_vest_Coyote_co.paa",
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_magpouch_Coyote_co.paa",
			"XYI_VEST_PACK_1\data\Retex\Coyote\c_grenadepouch_Coyote_co.paa",
			"XYI_VEST_PACK_1\data\Retex\Coyote\p_gear_Coyote_co.paa",
            "x\13thMEF\addons\13th_vests\data\OMC_ID_1.paa"
           };
        class ItemInfo: ItemInfo
        {
        hiddenSelections[]=
            {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo9"
           };
        hiddenSelectionsTextures[]=
            {
            "XYI_VEST_PACK_1\data\Retex\Coyote\mtv_vest_Coyote_co.paa",
            "XYI_VEST_PACK_1\data\Retex\Coyote\c_magpouch_Coyote_co.paa",
            "XYI_VEST_PACK_1\data\Retex\Coyote\c_grenadepouch_Coyote_co.paa",
            "XYI_VEST_PACK_1\data\Retex\Coyote\p_gear_Coyote_co.paa",
            "x\13thMEF\addons\13th_vests\data\OMC_ID_1.paa"
            };
        };
    };

ALLIMTV(13THCHAN)
ALLIMTV(OSEA)
ALLIMTV(CORPSMAN)
ALLIMTV(HIGHROLLER)
ALLIMTV(DEALER)
ALLIMTV(KICKER)
ALLIMTV(PILOT)
ALLIMTV(CHECKMATE)
ALLIMTV(PVT)
ALLIMTV(PFC)
ALLIMTV(LCPL)
ALLIMTV(CPL)
ALLIMTV(SGT)
ALLIMTV(SSGT)
ALLIMTV(CENTER)
ALLIMTV(SALAZAR)
ALLIMTV(PSY)
ALLIMTV(GOOSE)
ALLIMTV(TED)
ALLIMTV(RANDOM)

    ///// SPC VESTS ///////

ALLSPC(13THCHAN)
ALLSPC(OSEA)
ALLSPC(CORPSMAN)
ALLSPC(HIGHROLLER)
ALLSPC(DEALER)
ALLSPC(KICKER)
ALLSPC(PILOT)
ALLSPC(CHECKMATE)
ALLSPC(PVT)
ALLSPC(PFC)
ALLSPC(LCPL)
ALLSPC(CPL)
ALLSPC(SGT)
ALLSPC(SSGT)
ALLSPC(CENTER)
ALLSPC(SALAZAR)
ALLSPC(PSY)
ALLSPC(GOOSE)
ALLSPC(TED)
ALLSPC(RANDOM)

};

class XtdGearModels 
{
	class cfgWeapons
	{
		class 13th_IMTV_vests
		{
			label = "13th IMTV Vests";
			options[] = 
			{
				"variant",
				"patch"
			};
			class variant
			{
				alwaysSelectable = 1;
				label = "Vest Type";
				values[] =
				{
					"ASSAULT_1",
					"ASSAULT_2",
					"ASSAULT_3",
					"ASSAULT_4",
					"LIGHT",
					"MG",
					"GRENADIER",
					"RTO_1",
					"RTO_2",
					"TL"
				};
				class ASSAULT_1 {label = "Assault 1";};
				class ASSAULT_2 {label = "Assault 2";};
				class ASSAULT_3 {label = "Assault 3";};
				class ASSAULT_4 {label = "Assault 4";};
				class LIGHT {label = "Light";};
				class MG {label = "MG";};
				class GRENADIER {label = "Grenadier";};
				class RTO_1 {label = "RTO 1";};
				class RTO_2 {label = "RTO 2";};
				class TL {label = "Team Leader";};
			};
			class patch
			{
				alwaysSelectable = 1;
				label = "Patch";
				values[] = 
				{
					"OSEA",
					"13THCHAN",
					"CORPSMAN",
					"DEALER",
					"HIGHROLLER",
					"KICKER",
					"PILOT",
					"CHECKMATE",
					"PVT",
					"PFC",
					"LCPL",
					"CPL",
					"SGT",
					"SSGT",
					"CENTER",
					"SALAZAR",
					"PSY",
					"GOOSE",
					"TED",
					"RANDOM"
				};
				class OSEA {label = "OSEA";};
				class 13THCHAN {label = "13TH CHAN";};
				class CORPSMAN {label = "CORPSMAN";};
				class DEALER {label = "DEALER";};
				class HIGHROLLER {label = "HIGHROLLER";};
				class KICKER {label = "KICKER";};
				class PILOT {label = "PILOT";};
				class CHECKMATE {label = "CHECKMATE";};
				class PVT {label = "PVT";};
				class PFC {label = "PFC";};
				class LCPL {label = "LCPL";};
				class CPL {label = "CPL";};
				class SGT {label = "SGT";};
				class SSGT {label = "SSGT";};
				class CENTER {label = "CENTER";};
				class SALAZAR {label = "SALAZAR";};
				class PSY {label = "PSY";};
				class GOOSE {label = "GOOSE";};
				class TED {label = "TED";};
				class RANDOM {label = "RANDOM";};
			};
		};

		class 13th_SPC_vests
		{
			label = "13th SPC Vests";
			options[] = 
			{
				"variant",
				"patch"
			};
			class variant
			{
				alwaysSelectable = 1;
				label = "Vest Type";
				values[] =
				{
					"ASSAULT1",
					"ASSAULT2",
					"ASSAULT3",
					"ASSAULT4",
					"MG",
					"TL1",
					"TL2",
					"RTO1",
					"RTO2",
					"GRENADIER"
				};
				class ASSAULT1 {label = "Assault 1";};
				class ASSAULT2 {label = "Assault 2";};
				class ASSAULT3 {label = "Assault 3";};
				class ASSAULT4 {label = "Assault 4";};
				class MG {label = "MG";};
				class GRENADIER {label = "Grenadier";};
				class RTO_1 {label = "RTO 1";};
				class RTO_2 {label = "RTO 2";};
				class TL1 {label = "TL 1";};
				class TL2 {label = "TL 2";};
			};
			class patch
			{
				alwaysSelectable = 1;
				label = "Patch";
				values[] = 
				{
					"OSEA",
					"13THCHAN",
					"CORPSMAN",
					"DEALER",
					"HIGHROLLER",
					"KICKER",
					"PILOT",
					"CHECKMATE",
					"PVT",
					"PFC",
					"LCPL",
					"CPL",
					"SGT",
					"SSGT",
					"CENTER",
					"SALAZAR",
					"PSY",
					"GOOSE",
					"TED",
					"RANDOM"
				};
				class OSEA {label = "OSEA";};
				class 13THCHAN {label = "13TH CHAN";};
				class CORPSMAN {label = "CORPSMAN";};
				class DEALER {label = "DEALER";};
				class HIGHROLLER {label = "HIGHROLLER";};
				class KICKER {label = "KICKER";};
				class PILOT {label = "PILOT";};
				class CHECKMATE {label = "CHECKMATE";};
				class PVT {label = "PVT";};
				class PFC {label = "PFC";};
				class LCPL {label = "LCPL";};
				class CPL {label = "CPL";};
				class SGT {label = "SGT";};
				class SSGT {label = "SSGT";};
				class CENTER {label = "CENTER";};
				class SALAZAR {label = "SALAZAR";};
				class PSY {label = "PSY";};
				class GOOSE {label = "GOOSE";};
				class TED {label = "TED";};
				class RANDOM {label = "RANDOM";};
			};
		};

	};
};

class XtdGearInfos 
{
	class CfgWeapons
	{
		ALLIMTVGI(OSEA)
		ALLIMTVGI(13THCHAN)
		ALLIMTVGI(CORPSMAN)
		ALLIMTVGI(DEALER)
		ALLIMTVGI(HIGHROLLER)
		ALLIMTVGI(KICKER)
		ALLIMTVGI(PILOT)
		ALLIMTVGI(CHECKMATE)
		ALLIMTVGI(PVT)
		ALLIMTVGI(PFC)
		ALLIMTVGI(LCPL)
		ALLIMTVGI(CPL)
		ALLIMTVGI(SGT)
		ALLIMTVGI(SSGT)
		ALLIMTVGI(CENTER)
		ALLIMTVGI(SALAZAR)
		ALLIMTVGI(GOOSE)
		ALLIMTVGI(PSY)
		ALLIMTVGI(TED)
		ALLIMTVGI(RANDOM)

		ALLSPCGI(OSEA)
		ALLSPCGI(13THCHAN)
		ALLSPCGI(CORPSMAN)
		ALLSPCGI(DEALER)
		ALLSPCGI(HIGHROLLER)
		ALLSPCGI(KICKER)
		ALLSPCGI(PILOT)
		ALLSPCGI(CHECKMATE)
		ALLSPCGI(PVT)
		ALLSPCGI(PFC)
		ALLSPCGI(LCPL)
		ALLSPCGI(CPL)
		ALLSPCGI(SGT)
		ALLSPCGI(SSGT)
		ALLSPCGI(CENTER)
		ALLSPCGI(SALAZAR)
		ALLSPCGI(GOOSE)
		ALLSPCGI(PSY)
		ALLSPCGI(TED)
		ALLSPCGI(RANDOM)
	};
};
