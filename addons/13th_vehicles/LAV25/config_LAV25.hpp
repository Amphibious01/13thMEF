	class CUP_LAV25_Base;
	class CUP_B_LAV25_USMC: CUP_LAV25_Base
	{
		class AnimationSources;
		class Turrets;
		class MainTurret;
		class CommanderOptics;
		class CargoGunner_1;
		class CargoGunner_2;
		class HitPoints;
	};
	class CUP_B_LAV25_HQ_USMC: CUP_B_LAV25_USMC
	{
		class AnimationSources;
	};

	class 13th_LAV25: CUP_B_LAV25_USMC
	{
		displayName="[13th] LAV-25";
		author="Waylen";
		faction="b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Crewman_01";
		waterResistenceCoef=0.0049999999;
		waterResistance=0.1;
		waterAngularDampingCoef=3;
		engineShiftY=1;
		peakTorque=1500;
		enginePower=5000;
		hiddenSelectionsTextures[]=
		{
			"\x\13thMEF\addons\13th_vehicles\data\lav25_body_co.paa",
			"\x\13thMEF\addons\13th_vehicles\data\lav25_body2_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lav_hq_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavalfa_ca.paa"
		};

		LAV25_TEXTURESETS

		class ace_cargo
		{
			class cargo
			{
				class ACE_Wheel
				{
					type="Land_CanisterFuel_F";
					amount=6;
				};
			};
		};

		class AnimationSources:AnimationSources
		{
			class recoil_source
			{
				source="reload";
				weapon="CUP_Vacannon_M242_veh_LAV25";
			};
			class Hide_Deployment
			{
				DisplayName="$STR_CUP_dn_Core_as_Hide_Deployment";
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class Hide_Turret_Deployment: Hide_Deployment
			{
				DisplayName="$STR_CUP_dn_Core_as_Hide_Turret_Deployment";
				initPhase=0;
			};
			class Hide_Antenna
			{
				DisplayName="$STR_CUP_dn_Core_as_Hide_Antenna";
				source="user";
				animPeriod=0;
				initPhase=0;
			};
		};
		
		HIGHROLLERINVENTORY

		GROUND_SP_INFO(LAV-25,Default,2,0)
	};

	class 13th_LAV25_M240: CUP_B_LAV25_USMC
	{
		displayName="[13th] LAV-25 (M240)";
		author="Waylen";
		faction="b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Crewman_01";
		model="\cup\wheeledvehicles\cup_wheeledvehicles_lav25\cup_lav25m240.p3d";
		picture="\cup\wheeledvehicles\cup_wheeledvehicles_lav25\Data\UI\Picture_LAV25m240_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\x\13thMEF\addons\13th_vehicles\data\lav25_body_co.paa",
			"\x\13thMEF\addons\13th_vehicles\data\lav25_body2_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lav_hq_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavalfa_ca.paa"
		};
		waterResistenceCoef=0.0049999999;
		waterResistance=0.1;
		waterAngularDampingCoef=3;
		engineShiftY=1;
		peakTorque=1500;
		enginePower=5000;

		LAV25_TEXTURESETS

		class ace_cargo
		{
			class cargo
			{
				class ACE_Wheel
				{
					type="Land_CanisterFuel_F";
					amount=6;
				};
			};
		};

		cargoCompartments[]=
		{
			"Compartment3"
		};

		class AnimationSources: AnimationSources
		{
			class Hide_Deployment
			{
				DisplayName="$STR_CUP_dn_Core_as_Hide_Deployment";
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class Hide_Turret_Deployment: Hide_Deployment
			{
				DisplayName="$STR_CUP_dn_Core_as_Hide_Turret_Deployment";
				initPhase=0;
			};
			class Hide_Antenna
			{
				DisplayName="$STR_CUP_dn_Core_as_Hide_Antenna";
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class recoil_source
			{
				source="reload";
				weapon="CUP_Vacannon_M242_veh_LAV25";
			};
			class ReloadAnim
			{
				source="reload";
				weapon="CUP_Vlmg_M240_veh3";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="CUP_Vlmg_M240_veh3";
			};
			class Revolving
			{
				source="revolving";
				weapon="CUP_Vlmg_M240_veh3";
			};
			class muzzle_rot_CUP_M240_veh3_W
			{
				source="ammorandom";
				weapon="CUP_Vlmg_M240_veh3";
			};
		};

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"CUP_Vlmg_M240_veh3",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
							"CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
							"CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
							"SmokeLauncherMag"
						};
						minElev=-10;
						maxElev=20;
						initElev=0;
						minTurn=-60;
						maxTurn=60;
						initTurn=0;
						gunnerOpticsModel="\cup\wheeledvehicles\cup_wheeledvehicles_lav25\2dscope_com1";
						gunnerOutOpticsColor[]={0,0,0,1};
						gunnerForceOptics=1;
						gunnerOutForceOptics=0;
						proxyType="CPCommander";
						proxyIndex=1;
						gunnerName="$STR_POSITION_COMMANDER";
						viewGunnerInExternal=0;
						animationSourceHatch="hatchCommander";
						body="obsTurret";
						gun="obsGun";
						memoryPointGun="usti hlavne3";
						gunBeg="usti hlavne3";
						gunEnd="konec hlavne3";
						animationSourceBody="obsTurret";
						animationSourceGun="obsGun";
						memoryPointsGetInGunner="pos commander";
						memoryPointsGetInGunnerDir="pos commander dir";
						class ViewGunner
						{
							visionMode[]=
							{
								"Normal",
								"NVG",
								"TI"
							};
							thermalMode[]={2,3};
							initAngleX=5;
							minAngleX=-65;
							maxAngleX=85;
							initAngleY=0;
							minAngleY=-150;
							maxAngleY=150;
							initFov=0.69999999;
							minFov=0.25;
							maxFov=1.1;
						};
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
						gunnerInAction="CUP_LAV25_Commander";
						stabilizedInAxes=3;
						LODTurnedIn="View_Gunner";
						LODTurnedOut=1;
						ispersonturret=0;
						minOutElev=-20;
						maxOutElev=20;
						initOutElev=0;
						minOutTurn=-60;
						maxOutTurn=60;
						initOutTurn=0;
						gunnerLeftHandAnimName="OtocHlaven_Shake";
						gunnerRightHandAnimName="OtocHlaven_Shake";
						memoryPointGunnerOutOptics="comgunview";
						memoryPointGunnerOptics="commanderview";
						gunnerOutOpticsModel="\cup\wheeledvehicles\cup_wheeledvehicles_lav25\proxies\optika_empty";
						gunnerAction="CUP_LAV25_Commander_out_mg";
						selectionFireAnim="zasleh_2";
						InGunnerMayFire=1;
						outGunnerMayFire=1;
						gunnerOutOpticsShowCursor=0;
						gunnerOpticsShowCursor=0;
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
						discreteDistanceInitIndex=2;
						turretInfoType="RscWeaponRangeZeroing";
						primaryGunner=0;
						primaryObserver=1;
					};
				};
			};
			class CargoGunner_1: CargoGunner_1
			{
			};
			class CargoGunner_2: CargoGunner_2
			{
			};
		};



		AGM_FCSEnabled=1;
		editorPreview="CUP\WheeledVehicles\CUP_WheeledVehicles_LAV25\Data\preview\CUP_B_LAV25M240_USMC.jpg";
		HIGHROLLERINVENTORY

		GROUND_SP_INFO(LAV-25,M240,2,0)

	};

	class 13th_LAV25_C2: CUP_B_LAV25_HQ_USMC
	{
		displayName="[13th] LAV-25 C2";
		author="Waylen";
		faction="b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Crewman_01";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"camoAlfa"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\13thMEF\addons\13th_vehicles\data\lav25_c2_body_co.paa",
			"\x\13thMEF\addons\13th_vehicles\data\lav25_body2_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lav_hq_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavalfa_ca.paa"
		};
		waterResistenceCoef=0.0049999999;
		waterResistance=0.1;
		waterAngularDampingCoef=3;
		engineShiftY=1;
		peakTorque=1500;
		enginePower=5000;		

		class AnimationSources: AnimationSources
		{
			class Hide_Deployment
				{
					DisplayName="$STR_CUP_dn_Core_as_Hide_Deployment";
					source="user";
					animPeriod=0;
					initPhase=0;
				};
				class Hide_Turret_Deployment: Hide_Deployment
				{
					DisplayName="$STR_CUP_dn_Core_as_Hide_Turret_Deployment";
					initPhase=1;
				};
				class Hide_Antenna
				{
					DisplayName="$STR_CUP_dn_Core_as_Hide_Antenna";
					source="user";
					animPeriod=0;
					initPhase=0;
				};
		};

		class ace_cargo
		{
			class cargo
			{
				class ACE_Wheel
				{
					type="Land_CanisterFuel_F";
					amount=2;
				};
			};
		};

		BASICINV

	};

	class 13th_SUPERLAV25: 13th_LAV25_M240 
	{
		displayName="[13th] SUPERLAV";
		author="Waylen";
		faction="b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Crewman_01";
		waterResistenceCoef=9.9999997e-006;
		waterResistance=0.1;
		waterAngularDampingCoef=3;
		engineShiftY=1;
		maxSpeed=250;
		peakTorque=300000;
		enginePower=300000;
		class ace_cargo
		{
			class cargo
			{
				class ACE_Wheel
				{
					type="ACE_Wheel";
					amount=6;
				};
			};
		};

		HIGHROLLERINVENTORY

	};