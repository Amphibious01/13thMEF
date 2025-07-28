#include "config_macros.hpp"

class CfgPatches
{
	class 13th_vehicles
	{
		name="13th MEF Vehicles";
		author="13th Mod Team";
		requiredVersion=1;
		requiredAddons[]=
		{
			"CUP_WheeledVehicles_LAV25",
			"rhsusf_c_m11xx",
			"rhsusf_c_stryker",
			"CUP_WheeledVehicles_Stryker",
			"CUP_TrackedVehicles_AAV",
			"rhsusf_c_hmmwv",
			"cba_main",
      		"ace_main",
		};
		units[]=
		{
			"13th_LAV25",
			"13th_LAV25_M240",
			"13th_LAV25_C2",
			"13th_SUPERLAV25",
			"13th_kitty_car",
			"13th_M1126_M2",
			"13th_M1126_MK16",
			"13th_M1128_MGS",
			"13th_M1132",
			"13th_AAV",
			"13th_M1165A1",
			"13th_M1151_M2",
			"13th_M1151_M240",
			"13th_M1151",
			"13th_M998",
			"13th_M1043",
			"13th_M1043_M2",
			"13th_M1045"
		};
	};
};
class CfgVehicles
{
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

	class CUP_AAV_BASE;
	class CUP_B_AAV_USMC: CUP_AAV_BASE
	{
		class Wheels;
		class L2;
	};

	class rhsusf_m1151_m2_v3_usmc_wd;
	class rhsusf_m1151_m240_v3_usmc_wd;
	class rhsusf_m1151_usmc_wd;
	class rhsusf_m998_w_4dr;

	class rhsusf_m1045_w;
	class rhsusf_m1043_w_m2;
	class rhsusf_m1025_w;

	class rhsusf_m1045_w_s: rhsusf_m1045_w
	{
		class AnimationSources;
	};
	class rhsusf_m1043_w_s: rhsusf_m1025_w
	{
		class AnimationSources;
	};
	class rhsusf_m1043_w_s_m2: rhsusf_m1043_w_m2
	{
		class AnimationSources;
	};

	class rhsusf_M1165A1_GMV_SAG2_M134D_M240_base;
	class rhsusf_m1165a1_gmv_m134d_m240_socom_d:rhsusf_M1165A1_GMV_SAG2_M134D_M240_base
	{
		class AnimationSources;
		class Turrets;
		class SAG_Turret;
		class CoDriverTurret;
		class SwingArm_L_Turret;
		class SwingArm_R_Turret;
		class CargoTurret_01;
		class CargoTurret_02;
		class CargoTurret_03;
		class CargoTurret_04;
	};

	class CUP_C_Golf4_kitty_Civ;

	class CUP_B_M1128_MGS_Woodland;
	class rhsusf_stryker_m1126_m2_base;
	class rhsusf_stryker_m1126_m2_wd: rhsusf_stryker_m1126_m2_base
	{
		class AnimationSources;
	};
	class rhsusf_stryker_m1132_m2_base: rhsusf_stryker_m1126_m2_base
	{
		class EventHandlers;
		class AnimationSources;
	};


//B_BOseaMarineCorps_Rifleman_01
//B_BOseaMarineCorps_Crewman_01

	class 13th_M1165A1: rhsusf_m1165a1_gmv_m134d_m240_socom_d 
	{
		displayName = "[13th] M1165A1 HMMVW (M134/M240)";
		author="Waylen";
		side = 1;
		faction="b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Rifleman_01";

		scope = 2;
		scopeCurator = 2;

		textureList[]=
		{
			"rhs_sofwoodland", 1
		};

		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="CUP_Vlmg_M134_veh";
			};
			class Revolving
			{
				source="revolving";
				weapon="CUP_Vlmg_M134_veh";
			};
			class muzzle_rot_MG
			{
				source="ammorandom";
				weapon="CUP_Vlmg_M134_veh";
			};
			class Hide_Scopes
			{
				source="user";
				initPhase=0;
				useSource=1;
				animPeriod=0.1;
				displayName="Hide DCL-120 sights";
			};
			class Gatling_1
			{
				source="revolving";
				weapon="CUP_Vlmg_M134_veh";
			};
		};

		class Turrets: Turrets
		{
			class SAG_Turret: SAG_Turret
			{
				weapons[]=
				{
					"CUP_Vlmg_M134_veh"
				};
				magazines[]=
				{
					"CUP_4000Rnd_TE1_Red_Tracer_762x51_M134_M",
					"CUP_4000Rnd_TE1_Red_Tracer_762x51_M134_M"
				};
			};
			class CoDriverTurret: CoDriverTurret
			{
			};
			class SwingArm_L_Turret: SwingArm_L_Turret
			{
			};
			class SwingArm_R_Turret: SwingArm_R_Turret
			{
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};

		KICKERINVENTORY

		GROUND_SP_INFO(HMMVWs,M1165A1 w/ M134D,0,0)
	};

	class 13th_AAV: CUP_B_AAV_USMC
	{
		displayName = "[13th] AAVP/7A1";
		author="Waylen";
		side = 1;
		faction="b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Crewman_01";

		scope = 2;
		scopeCurator = 2;

		maxSpeed = 150;
		enginePower = 300;
		peakTorque = 2200;
		tankTurnForce = 150000;

		class Wheels: Wheels
		{
			class L2:L2
			{
				sprungMass = 1916;
				springStrength = 47900;
				springDamperRate = 19160;
				moi = 10;
				dampingRate = 1;
				dampingRateDamaged = 1290;
				dampingRateDestroyed = 10000;
				dampingRateInAir = 2148;
			};
			class L3: L2
			{
				boneName="wheel_podkolol2";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName="wheel_podkolol3";
				center="wheel_1_4_axis";
				boundary="wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName="wheel_podkolol4";
				center="wheel_1_5_axis";
				boundary="wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName="wheel_podkolol5";
				center="wheel_1_6_axis";
				boundary="wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName="wheel_podkolol6";
				center="wheel_1_7_axis";
				boundary="wheel_1_7_bound";
			};
			class L9: L2
			{
				boneName="wheel_podkolol9";
				center="wheel_1_9_axis";
				boundary="wheel_1_9_bound";
				sprungMass = 1916;
				springStrength = 47900;
				springDamperRate = 19160;
				maxDroop=0;
				maxCompression=0;
			};
			class L1: L2
			{
				boneName="";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				sprungMass = 1916;
				springStrength = 47900;
				springDamperRate = 19160;
				maxDroop=0;
				maxCompression=0;
			};
			class R2: L2
			{
				boneName="wheel_podkolop1";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				side="right";
			};
			class R3: R2
			{
				boneName="wheel_podkolop2";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName="wheel_podkolop3";
				center="wheel_2_4_axis";
				boundary="wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName="wheel_podkolop4";
				center="wheel_2_5_axis";
				boundary="wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName="wheel_podkolop5";
				center="wheel_2_6_axis";
				boundary="wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName="wheel_podkolop6";
				center="wheel_2_7_axis";
				boundary="wheel_2_7_bound";
			};
			class R9: R2
			{
				boneName="wheel_podkolop9";
				center="wheel_2_9_axis";
				boundary="wheel_2_9_bound";
				sprungMass = 1916;
				springStrength = 47900;
				springDamperRate = 19160;
				maxDroop=0;
				maxCompression=0;
			};
			class R1: R2
			{
				boneName="";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				sprungMass = 1916;
				springStrength = 47900;
				springDamperRate = 19160;
				maxDroop=0;
				maxCompression=0;
			};
		};

		BASICINV

		GROUND_SP_INFO(AAVP,AAVP w/ MK19/M2,0,0)
	};

	class 13th_kitty_car: CUP_C_Golf4_kitty_Civ
	{
		displayName="[13th] Hello kitty Car";
		action="b_oseamarinecorps";
		side=1;
		maxSpeed = 5000000;
		enginePower = 500000000000;
		peakTorque = 50000000;
		armor = 50000000;
	};

	class 13th_M1132: rhsusf_stryker_m1132_m2_base
	{
		displayName = "[13th] M1132 Stryker (SMP/M2)";
		author="Waylen";
		faction="b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Crewman_01";
		rhs_decalParameters[]=
		{
			"['Label', 'dec_hull', 'HullDecals_Stryker_WD']"
		};
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_stryker_m1132_m2_wd.paa";

		scope = 2;
		scopeCurator = 2;
		side = 1;

		ace_repair_canRepair = 1;

		enginePower = 500;
		peakTorque = 2450;
		dampingRateDamaged = 1;

		class AnimationSources
		{
			class Hide_DUKE
			{
				initPhase = 1;
			};
		};

		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3,
				"N",
				0,
				"D1",
				3,
				"D2",
				1.85,
				"D3",
				1.41,
				"D4",
				1,
				"D5",
				0.75,
				"D6",
				0.64999998
			};
			TransmissionRatios[]=
			{
				"High",
				8
			};
			AmphibiousRatios[]=
			{
				"R1",
				-10,
				"N",
				0,
				"D1",
				30
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};

		//class EventHandlers: EventHandlers
		//{
		//	postInit="(_this select 0) execVM ""\x\13thMEF\addons\13th_vehicles\obstacle_clearing.sqf""";
		//};
		
		class ace_cargo
		{
			class cargo
			{
				class ACE_Wheel
				{
					type="FlexibleTank_01_forest_F";
					amount=2;
				};
			};
		};

		KICKERINVENTORY

		GROUND_SP_INFO(M1126 Stryker,M1132 w/ Plow,1,0)
	};

	class 13th_M1126_M2: rhsusf_stryker_m1126_m2_wd
	{
		displayName = "[13th] M1126 Stryker (M2)";
		author="Waylen";
		faction="b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Crewman_01";

		enginePower = 500;
		peakTorque = 2450;

		class AnimationSources
		{
			class Hide_DUKE
			{
				initPhase = 1;
			};
		};

		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3,
				"N",
				0,
				"D1",
				3,
				"D2",
				1.85,
				"D3",
				1.41,
				"D4",
				1,
				"D5",
				0.75,
				"D6",
				0.64999998
			};
			TransmissionRatios[]=
			{
				"High",
				8
			};
			AmphibiousRatios[]=
			{
				"R1",
				-10,
				"N",
				0,
				"D1",
				30
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};

		KICKERINVENTORY

		class ace_cargo
		{
			class cargo
			{
				class ACE_Wheel
				{
					type="FlexibleTank_01_forest_F";
					amount=2;
				};
			};
		};

		GROUND_SP_INFO(M1126 Stryker,M2,1,0)
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

	class 13th_M1151_M2: rhsusf_m1151_m2_v3_usmc_wd
	{
		displayName="[13th] M1151 HMMVW (M2)";
		author="Waylen";
		faction="b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Rifleman_01";

		BASICINV

		hiddenSelections [] = {
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo19",
		};
		HiddenSelectionsTextures[]=
		{
			"\x\13thMEF\addons\13th_vehicles\data\m1151_body_co.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
			"rhsusf\addons\rhsusf_rg33l\data\mctags_wd_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa"
		};
		class textureSources {
			class rhs_woodland
			{
				displayName="Woodland";
				author="$STR_RHSUSF_AUTHOR_FULL";
				textures[]=
				{
					"\x\13thMEF\addons\13th_vehicles\data\m1151_body_co.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
					"rhsusf\addons\rhsusf_rg33l\data\mctags_wd_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
					"rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa"
				};
				decals[]={8};
				factions[]={};
			};
		};
		
	};

	class 13th_M1151_M240: rhsusf_m1151_m240_v3_usmc_wd
	{
		displayName="[13th] M1151 HMMVW (M240)";
		author="Waylen";
		faction="b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Rifleman_01";

		BASICINV

		hiddenSelections [] = {
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo19",
		};
		HiddenSelectionsTextures[]=
		{
			"\x\13thMEF\addons\13th_vehicles\data\m1151_body_co.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
			"rhsusf\addons\rhsusf_rg33l\data\mctags_wd_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa"
		};
		class textureSources {
			class rhs_woodland
			{
				displayName="Woodland";
				author="$STR_RHSUSF_AUTHOR_FULL";
				textures[]=
				{
					"\x\13thMEF\addons\13th_vehicles\data\m1151_body_co.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
					"rhsusf\addons\rhsusf_rg33l\data\mctags_wd_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
					"rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa"
				};
				decals[]={8};
				factions[]={};
			};
		};

	};

	class 13th_M1151: rhsusf_m1151_usmc_wd
	{
		displayName="[13th] M1151 HMMVW";
		author="Waylen";
		faction="b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Rifleman_01";

		BASICINV

		hiddenSelections [] = {
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6"
		};
		HiddenSelectionsTextures[]=
		{
			"\x\13thMEF\addons\13th_vehicles\data\m1151_body_co.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa"
		};
		class textureSources {
			class rhs_woodland
			{
				displayName="Woodland";
				author="$STR_RHSUSF_AUTHOR_FULL";
				textures[]=
				{
					"\x\13thMEF\addons\13th_vehicles\data\m1151_body_co.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa"
				};
				decals[]={8};
				factions[]={};
			};
		};

	};

	class 13th_M998: rhsusf_m998_w_4dr
	{
		displayName="[13th] M998 HMMVW";
		author="Waylen";
		faction="b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Rifleman_01";

		BASICINV	
	};

	class 13th_M1043_M2: rhsusf_m1043_w_s_m2
	{
		displayName = "[13th] M1043 HMMVW (M2)";
		author = "Waylen";
		faction = "b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Rifleman_01";

		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"\x\13thMEF\addons\13th_vehicles\data\m1043_base_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"\x\13thMEF\addons\13th_vehicles\data\humvee_decals.paa",
			""
		};
		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				author="13th MEF";
				textures[]=
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"\x\13thMEF\addons\13th_vehicles\data\m1043_base_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
				};
				factions[]=
				{
					"b_oseamarinecorps"
				};
			};
		};

		BASICINV
		class AnimationSources: AnimationSources 
		{
			class hide_snorkel: hide_snorkel
			{
				initPhase = 1;
			};
			class hide_CIP: hide_CIP
			{
				initPhase = 1;
			};
			class hide_BFT: hide_BFT
			{
				initPhase = 1;
			};
		};
	};
	
	class 13th_M1043: rhsusf_m1043_w_s
	{
		displayName = "[13th] M1043 HMMVW";
		author = "Waylen";
		faction = "b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Rifleman_01";

		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"\x\13thMEF\addons\13th_vehicles\data\m1043_base_co.paa",
			"\x\13thMEF\addons\13th_vehicles\data\humvee_decals.paa",
			""
		};
		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				author="13th MEF";
				textures[]=
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"\x\13thMEF\addons\13th_vehicles\data\m1043_base_co.paa",
				};
				factions[]=
				{
					"b_oseamarinecorps"
				};
			};
		};

		BASICINV
		class AnimationSources: AnimationSources 
		{
			class hide_snorkel: hide_snorkel
			{
				initPhase = 1;
			};
			class hide_CIP: hide_CIP
			{
				initPhase = 1;
			};
			class hide_BFT: hide_BFT
			{
				initPhase = 1;
			};
		};
	};

	class 13th_M1045: rhsusf_m1045_w_s
	{
		displayName = "[13th] M1045A2 HMMVW (TOW)";
		author = "Waylen";
		faction = "b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Rifleman_01";

		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"\x\13thMEF\addons\13th_vehicles\data\m1043_base_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",
			""
		};
		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				author="13th MEF";
				textures[]=
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"\x\13thMEF\addons\13th_vehicles\data\m1043_base_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",
					""
				};
				factions[]=
				{
					"b_oseamarinecorps"
				};
			};
		};

		BASICINV
		class AnimationSources: AnimationSources 
		{
			class hide_snorkel: hide_snorkel
			{
				initPhase = 1;
			};
			class hide_CIP: hide_CIP
			{
				initPhase = 1;
			};
			class hide_BFT: hide_BFT
			{
				initPhase = 1;
			};
		};
	};

};
