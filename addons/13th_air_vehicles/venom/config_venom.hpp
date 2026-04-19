	class RHS_UH1Y;
	class Osean_UH1Y: RHS_UH1Y
	{
		class UserActions;
		class MFD;
	};

	class 13th_UH1Y: Osean_UH1Y
		{
		displayName="[13th] UH-1Y";
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
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=-180;
					maxAngleX=180;
					initAngleY=0;
					minAngleY=-90;
					maxAngleY=20;
					initFov="(30 / 120)";
					minFov="(30 / 120)";
					maxFov="(30 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(6 / 120)";
					minFov="(6 / 120)";
					maxFov="(6 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(2 / 120)";
					minFov="(2 / 120)";
					maxFov="(2 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics=0;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=0;
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-80;
			maxElev=90;
			initElev=5;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
			gunBeg="gun_end";
			gunEnd="gun_begin";
			memoryPointGun="gun_end";
		};
		memoryPointDriverOptics="commanderview";

		lockDetectionSystem = "2+4+8";
		incomingMissileDetectionSystem = "1+2+4+8+16";
		class Components: BaseComponents
			{
			class TransportPylonsComponent
				{
					UIPicture = "\rhsusf\addons\rhsusf_a2port_air2\data\loadouts\RHS_UH1_EDEN_CA.paa";
					class pylons
					{
						class pylon1
						{
							hardpoints[] = 
							{
								"13th_VENOM"
							};
							UIposition[]		= {0.573,0.44};
							maxweight			= 1200;
							priority			= 1;
							attachment			= "13th_HYDRA_HE_19RND_M";
							bay					= -1;
						};
						class pylon2 : pylon1
						{
							hardpoints[] = 
							{
								"13th_VENOM"
							};
							attachment			= "13th_HYDRA_SMK_19RND_M";
							UIposition[]		= {0.10,0.44};
							mirroredMissilePos	= 1;
						};
					};
				};
    		};

		HMD

		SPAWNPADCONFIG(13th_rotary,13th Rotary,UH-1Y,Default,1)
		};