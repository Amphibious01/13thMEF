class CfgPatches
{
	class 13th_johnsons_bags
	{
		author="Johnson";
		name="Johnson's Backpacks";
		units[]=
		{
			"13th_EagleAIII_Coyote",
			"13th_anprc155_coyote"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"13_Osean_CustomBackpack"
		};
	};
};
class cfgVehicles
{
	
	class rhsusf_assault_eagleaiii_coy;
	class 13th_EagleAIII_Coyote: rhsusf_assault_eagleaiii_coy
	{
		dlc="13th_backpacks";
		author="Johnson";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		isbackpack=1;
		displayName="[13th] Eagle A-III Coyote";
		allowedSlots[]={901};
		maximumLoad=700;
		mass=35;
		hiddenSelectionsTextures[]=
		{
			"13_Osean_CustomBackpack\data\13th_eagleaii_coy_co.paa"
		};
	};
	class TFAR_anprc155_coyote;
	class 13th_anprc155_coyote: TFAR_anprc155_coyote
	{
		dlc="13th_backpacks";
		author="Johnson";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		isbackpack=1;
		displayName="[13th] AN/PRC-155 Coyote";
		allowedSlots[]={901};
		maximumLoad=550;
		mass=35;
		tf_range=35000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		hiddenSelectionsTextures[]=
		{
			"13_Osean_CustomBackpack\data\13th_clf_nicecomm2_coyote_co.paa"
		};
	};
};
