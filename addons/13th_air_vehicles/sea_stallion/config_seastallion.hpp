	class rhsusf_CH53E_USMC_GAU21;
	class Osean_CH53_Gau21: rhsusf_CH53E_USMC_GAU21
	{
		class UserActions;
		class MFD;
	};

	class 13th_CH53E: Osean_CH53_Gau21
		{
		displayName = "[13th] CH-53E";
		side = 1;
		author="Waylen";
		faction="b_oseamarinecorps";
		crew="B_BOseaMarineCorps_Helicopter_pilot_01";
		editorSubcategory  = "EdSubcat_Helicopters";
		weapons[]=
		{
			"rhs_weap_mastersafe",
			"Laserdesignator_mounted",
			"rhsusf_weap_CMDispenser_ANALE39"
		};
		magazines[]=
		{
			"Laserbatteries",
			"rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4",
			"rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4"
		};
		class Components: BaseComponents
			{
			class TransportPylonsComponent
				{
				UIPicture = "\rhsusf\addons\rhsusf_ch53\data\loadouts\RHS_CH53_EDEN_CA.paa";
				class pylons
				{
				};
			};
		};

		lockDetectionSystem = "2+4+8";
		incomingMissileDetectionSystem = "1+2+4+8+16";
		SPAWNPADCONFIG(13th_rotary,13th Rotary,CH-53E,Default,3)

		HMD
	};