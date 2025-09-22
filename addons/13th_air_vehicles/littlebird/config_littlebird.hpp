	class RHS_MELB_MH6M;
	class RHS_MELB_AH6M;
	class Osean_MH6:RHS_MELB_MH6M
	{
		class UserActions;
		class MFD;
		class EventHandlers;
	};
	class Osean_AH6M:RHS_MELB_AH6M
	{
		class UserActions;
		class MFD;
		class EventHandlers;
	};

		class 13th_MH6: Osean_MH6 
		{
			displayName = "[13th] MH-6";
			side = 1;
			author="Waylen";
			faction="b_oseamarinecorps";
			crew="B_BOseaMarineCorps_Helicopter_pilot_01";
			editorSubcategory  = "EdSubcat_Helicopters";
			weapons[]=
			{
				"Laserdesignator_mounted",
				"rhsusf_weap_LWIRCM"
			};
			magazines[]=
			{
				"Laserbatteries",
				"rhsusf_mag_LWIRCM",
				"rhsusf_mag_LWIRCM",
				"rhsusf_mag_LWIRCM",
				"rhsusf_mag_LWIRCM",
				"rhsusf_mag_LWIRCM",
				"rhsusf_mag_LWIRCM",
				"rhsusf_mag_LWIRCM",
				"rhsusf_mag_LWIRCM",
				"rhsusf_mag_LWIRCM",
				"rhsusf_mag_LWIRCM"
			};

			maxSpeed = 250;
			liftForceCoef = 1.35;
			cyclicAsideForceCoef = 1.725;
			cyclicForwardForceCoef = 0.5;
			bodyFrictionCoef = 0.2;
			backrotorforcecoef = 0.85;

			class EventHandlers: EventHandlers
			{
				postInit="(_this select 0) setMass 1350";
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
			class Components: BaseComponents {};
			
			SPAWNPADCONFIG(13th_rotary,13th Rotary,MH-6,Transport,2)

			HMD

		};


		class 13th_AH6: Osean_AH6M
		{
			displayName = "[13th] AH-6";
			side = 1;
			author="Waylen";
			faction="b_oseamarinecorps";
			crew="B_BOseaMarineCorps_Helicopter_pilot_01";
			editorSubcategory  = "EdSubcat_Helicopters";
			weapons[]=
			{
				"Laserdesignator_mounted",
				"rhsusf_weap_LWIRCM"
			};
			magazines[]=
			{
				"Laserbatteries",
				"rhsusf_mag_LWIRCM",
				"rhsusf_mag_LWIRCM",
				"rhsusf_mag_LWIRCM",
				"rhsusf_mag_LWIRCM",
				"rhsusf_mag_LWIRCM",
				"rhsusf_mag_LWIRCM",
				"rhsusf_mag_LWIRCM",
				"rhsusf_mag_LWIRCM",
				"rhsusf_mag_LWIRCM",
				"rhsusf_mag_LWIRCM"
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


			maxSpeed = 250;
			liftForceCoef = 1.35;
			cyclicAsideForceCoef = 1.725;
			cyclicForwardForceCoef = 0.5;
			bodyFrictionCoef = 0.2;
			backrotorforcecoef = 0.85;

			class EventHandlers: EventHandlers
			{
				postInit="(_this select 0) setMass 1350";
			};

			lockDetectionSystem = "2+4+8";
			incomingMissileDetectionSystem = "1+2+4+8+16";
			class Components: BaseComponents 
			{	
				class TransportPylonsComponent
				{
					UIPicture="\rhsusf\addons\rhsusf_melb\data\loadouts\RHS_AH6M_EDEN_CA.paa";
					class pylons
					{
						class pylon1
						{
							hardpoints[]=
							{
								"13th_MELB_OUTBOARD"
							};
							priority=2;
							attachment="13th_HYDRA_MELB_HE_7RND_M";
							maxweight=1200;
							UIposition[]={0.625,0.2};
							bay=-1;
							turret[]={};
							hitpoint="HitPylon1";
						};
						class pylon2: pylon1
						{
							hardpoints[]=
							{
								"RHS_HP_MELB_M134",
								"13TH_MELB_GAU19L"
							};
							UIposition[]={0.56199998,0.30000001};
							priority=1;
							attachment="rhs_mag_m134_pylon_3000";
							turret[]={};
							hitpoint="HitPylon2";
						};
						class pylon3: pylon2
						{
							UIposition[]={0.103,0.30000001};
							hardpoints[]=
							{
								"RHS_HP_MELB_M134",
								"13TH_MELB_GAU19R",
								"RHS_HP_ATAS"
							};
							mirroredMissilePos=2;
							attachment="rhs_mag_m134_pylon_3000";
							turret[]={};
							hitpoint="HitPylon3";
						};
						class pylon4: pylon1
							{
								hardpoints[]=
								{
									"13th_MELB_OUTBOARD"
								};
								UIposition[]={0.039999999,0.2};
								attachment="13th_HYDRA_MELB_HEAT_7RND_M";
								mirroredMissilePos=1;
								turret[]={};
								hitpoint="HitPylon4";
							};
						};
					class Presets
					{
						class Default
						{
							attachment[]=
							{
								"rhs_mag_M151_7",
								"rhs_mag_m134_pylon_3000",
								"rhs_mag_m134_pylon_3000",
								"rhs_mag_M151_7"
							};
							displayname="Default";
						};
					};
				};
			};
			SPAWNPADCONFIG(13th_rotary,13th Rotary,MH-6,Armed,2)

			HMD

		};