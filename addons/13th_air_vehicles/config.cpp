#include "config_macros.hpp"
#include "config_magazines.hpp"

class SensorTemplateActiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateIR;
class SensorTemplateLaser;
class SensorTemplateMan;
class SensorTemplateNV;
class SensorTemplatePassiveRadar;
class SensorTemplateVisual;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class Components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class Components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class Components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class Components;
};
class CfgPatches
{
	class 13th_air
	{
		name="13th MEF Aircraft";
		author="13th Mod Team";
		requiredVersion=1;
		requiredAddons[]=
		{
			"rhsusf_a2port_air2",
			"RHS_US_A2_AirImport",
			"ojog_Helos",
			"rhsusf_c_airweapons"
		};
		units[]=
		{
			"13th_UH1Y",
			"13th_MH60S_DAP_4X",
			"13th_MH60S_DAP_2X",
			"13th_MH60",
			"13th_MH6",
			"13th_AH6",
			"13th_AH1Z",
			"13th_CH53E"
		};
	};
};
class CfgVehicles
{
	class Osean_MH6;
	class Osean_AH6M;

	class Osean_UH1Y;


	class CUP_Uh60S_Base;
	class CUP_MH60L_Dap_2x_Dynamic_Base: CUP_Uh60S_Base
	{
		class AnimationSources;
	};
	class CUP_B_MH60L_DAP_2x_US: CUP_MH60L_Dap_2x_Dynamic_Base 
	{
		class AnimationSources:AnimationSources{};
	};	

	class CUP_MH60L_Dap_4x_Dynamic_Base: CUP_Uh60S_Base
	{
		class AnimationSources;
	};
	class CUP_B_MH60L_DAP_4x_US: CUP_MH60L_Dap_4x_Dynamic_Base 
	{
		class AnimationSources:AnimationSources{};
	};
	class CUP_B_UH60S_USN: CUP_Uh60S_Base 
	{
		class AnimationSources;
	};

	class MainTurret;
	class RHS_AH1Z_base;
	class RHS_AH1Z:RHS_AH1Z_base
	{
		class Turrets;
		class MainTurret;
		class Wide;
		class Medium;
		class Narrow;
	};
	class Osean_CH53_Gau21;

	class Components;
	class BaseComponents: Components
	{
		class TransportCounterMeasuresComponent{};
		class SensorsManagerComponent
		{
			class Components
			{
				class IRSensorComponent: SensorTemplateIR
				{
					class AirTarget
					{
						minRange=0;
						maxRange=4000;
						objectDistanceLimitCoef=1;
						viewDistanceLimitCoef=1;
					};
					class GroundTarget
					{
						minRange=0;
						maxRange=4000;
						objectDistanceLimitCoef=1;
						viewDistanceLimitCoef=1;
					};
					maxTrackableSpeed=300;
					animDirection="mainGun";
					angleRangeHorizontal=46;
					angleRangeVertical=34;
					aimdown=-0.25;
				};
				class VisualSensorComponent: SensorTemplateVisual
				{
					class AirTarget
					{
						minRange=500;
						maxRange=1500;
						objectDistanceLimitCoef=1;
						viewDistanceLimitCoef=1;
					};
					class GroundTarget
					{
						minRange=500;
						maxRange=1500;
						objectDistanceLimitCoef=1;
						viewDistanceLimitCoef=1;
					};
					maxTrackableSpeed=300;
					animDirection="mainGun";
					angleRangeHorizontal=46;
					angleRangeVertical=34;
					aimdown=-0.25;
				};
				class ActiveRadarSensorComponent: SensorTemplateActiveRadar
				{
					class AirTarget
					{
						minRange=0;
						maxRange=4000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					class GroundTarget
					{
						minRange=0;
						maxRange=4000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					maxTrackableSpeed=300;
					angleRangeHorizontal=120;
					angleRangeVertical=90;
					groundNoiseDistanceCoef=-1;
					maxGroundNoiseDistance=-1;
					minSpeedThreshold=0;
					maxSpeedThreshold=0;
					aimDown=30;
				};
				class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
				{
				};
				class LaserSensorComponent: SensorTemplateLaser
				{
				};
				class NVSensorComponent: SensorTemplateNV
				{
				};
			};
		};
		class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
		{
			class Components: Components
			{
				class VehiclePrimaryGunnerDisplay
				{
					componentType="TransportFeedDisplayComponent";
					source="PrimaryGunner";
				};
				class VehicleMissileDisplay
				{
					componentType="TransportFeedDisplayComponent";
					source="Missile";
				};
				class SensorDisplay
				{
					componentType="SensorsDisplayComponent";
					range[]={4000,2000,16000,8000};
					resource="RscCustomInfoSensors";
				};
			};
		};
		class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
		{
			defaultDisplay="SensorDisplay";
			class Components: Components
			{
				class VehiclePrimaryGunnerDisplay
				{
					componentType="TransportFeedDisplayComponent";
					source="PrimaryGunner";
				};
				class VehicleMissileDisplay
				{
					componentType="TransportFeedDisplayComponent";
					source="Missile";
				};
				class SensorDisplay
				{
					componentType="SensorsDisplayComponent";
					range[]={4000,2000,16000,8000};
					resource="RscCustomInfoSensors";
				};
			};
		};
	};
	
	class 13th_MH60: CUP_B_UH60S_USN
		{
		displayName="[13th] MH-60 Seahawk";
		scopeCurator=2;
		scope=2;
		author="Waylen";
		faction="b_oseamarinecorps";
		crew="B_BOseaMarineCorps_Helicopter_pilot_01";
		editorSubcategory  = "EdSubcat_Helicopters";
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\13thMEF\addons\13th_air_vehicles\data\mh60s_fuselage_co.paa",
			"\x\13thMEF\addons\13th_air_vehicles\data\mh60s_engine_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};
		class textureSources {
			class default {
				displayName = "Default";
				author = "CUP";
				textures[] = {
					"\x\13thMEF\addons\13th_air_vehicles\data\mh60s_fuselage_co.paa",
					"\x\13thMEF\addons\13th_air_vehicles\data\mh60s_engine_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
				};
				factions[] =
				{
					"Osea_F"
				};
			};
		};

		class AnimationSources: AnimationSources 
		{
			class Navyclan_hide { initPhase = 1; };
			class Navyclan2_hide { initPhase = 1; };
		};

		class Components: BaseComponents{};
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
			memoryPointGun="laser_start";
			gunBeg="laser_end";
			gunEnd="gunnerview_flir";
		};
		memoryPointDriverOptics="gunnerview_flir";
		lockDetectionSystem = "2+4+8";
		incomingMissileDetectionSystem = "1+2+4+8+16";

		SPAWNPADCONFIG(13th_rotary,13th Rotary,MH-60,Seahawk,0)
		};


	class 13th_MH60S_DAP_4X: CUP_B_MH60L_DAP_4x_US
		{
		displayName="[13th] MH-60S Knighthawk (4x)";
		scopeCurator=2;
		scope=2;
		author="Waylen";
		faction="b_oseamarinecorps";
		crew="B_BOseaMarineCorps_Helicopter_pilot_01";
		editorSubcategory  = "EdSubcat_Helicopters";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\13thMEF\addons\13th_air_vehicles\data\mh60s_fuselage_DAP_co.paa",
			"\x\13thMEF\addons\13th_air_vehicles\data\mh60s_engine_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};
		class textureSources 
			{
			class default 
				{
				displayName = "Default";
				author = "CUP";
				textures[] = 
				{
					"\x\13thMEF\addons\13th_air_vehicles\data\mh60s_fuselage_DAP_co.paa",
					"\x\13thMEF\addons\13th_air_vehicles\data\mh60s_engine_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
				};
				factions[] =
				{
					"Osea_F"
				};
			};
		};

		class AnimationSources: AnimationSources 
		{
			class Navyclan_hide { initPhase = 1; };
			class Navyclan2_hide { initPhase = 1; };
		};

		lockDetectionSystem = "2+4+8";
		incomingMissileDetectionSystem = "1+2+4+8+16";
		class components: BaseComponents
		{
			class TransportPylonsComponent
			{
				UIPicture="\CUP\AirVehicles\CUP_AirVehicles_UH60\data\ui\CUP_UH60M_4_3DEN_CA.paa";
				class presets
				{
					class Default
					{
						displayName="Default";
						attachment[]=
						{
							"PylonRack_4Rnd_ACE_Hellfire_AGM114L",
							"FIR_Hydra_M247_P_19rnd_M",
							"13th_M789",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114L"
						};
					};
				};
				class pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"RHS_HP_MELB",
							"RHS_HP_MELB_L",
							"RHS_HP_FFAR_ARMY",
							"UNI_SCALPEL",
							"13th_HEAVY_ROTARY"
						};
						attachment="CUP_PylonPod_19Rnd_Rocket_FFAR_M";
						bay=-1;
						priority=5;
						UIposition[]={0.059999999,0.34999999};
						turret[]={};
					};
					class pylons2: pylons1
					{
						priority=4;
						UIposition[]={0.079999998,0.40000001};
					};
					class pylons3: pylons1
					{
						priority=4;
						UIposition[]={0.56999999,0.40000001};
						mirroredMissilePos=2;
					};
					class pylons4: pylons1
					{
						priority=5;
						UIposition[]={0.58999997,0.34999999};
						mirroredMissilePos=1;
					};
				};
			};
		};
		weapons[]=
		{
			"CMFlareLauncher",
			"Laserdesignator_mounted"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
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
			memoryPointGun="laser_start";
			gunBeg="laser_end";
			gunEnd="gunnerview_flir";
		};
		memoryPointDriverOptics="gunnerview_flir";

		SPAWNPADCONFIG(13th_rotary,13th Rotary,MH-60,Knighthawk,1)
		};

		class 13th_MH60S_DAP_2X: CUP_B_MH60L_DAP_2x_US
		{
		displayName="[13th] MH-60S Knighthawk (2x)";
		scopeCurator=2;
		scope=2;
		author="Waylen";
		faction="b_oseamarinecorps";
		crew="B_BOseaMarineCorps_Helicopter_pilot_01";
		editorSubcategory  = "EdSubcat_Helicopters";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\13thMEF\addons\13th_air_vehicles\data\mh60s_fuselage_DAP_co.paa",
			"\x\13thMEF\addons\13th_air_vehicles\data\mh60s_engine_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};
		class textureSources 
			{
			class default 
				{
				displayName = "Default";
				author = "CUP";
				textures[] = 
				{
					"\x\13thMEF\addons\13th_air_vehicles\data\mh60s_fuselage_DAP_co.paa",
					"\x\13thMEF\addons\13th_air_vehicles\data\mh60s_engine_co.paa",
					"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
				};
				factions[] =
				{
					"Osea_F"
				};
			};
		};

		class AnimationSources: AnimationSources 
		{
			class Navyclan_hide { initPhase = 1; };
			class Navyclan2_hide { initPhase = 1; };
		};

		lockDetectionSystem = "2+4+8";
		incomingMissileDetectionSystem = "1+2+4+8+16";
		class components: BaseComponents
		{
			class TransportPylonsComponent
			{
				UIPicture="\CUP\AirVehicles\CUP_AirVehicles_UH60\data\ui\CUP_UH60M_2_3DEN_CA.paa";
				class presets
				{
					class Default
					{
						displayName="Default";
						attachment[]=
						{
							"",
							"FIR_Hydra_M247_P_19rnd_M",
							"13th_M789",
							""
						};
					};
				};
				class pylons
				{
					class pylons1
					{
						hardpoints[]={};
						attachment="";
						bay=-1;
						priority=5;
						UIposition[]={2,0.34999999};
						turret[]={};
					};
					class pylons2: pylons1
					{
						hardpoints[]=
						{
							"RHS_HP_MELB",
							"RHS_HP_MELB_L",
							"RHS_HP_FFAR_ARMY",
							"UNI_SCALPEL",
							"13th_HEAVY_ROTARY"
						};
						attachment="CUP_PylonPod_19Rnd_Rocket_FFAR_M";
						priority=4;
						UIposition[]={0.079999998,0.40000001};
					};
					class pylons3: pylons1
					{
						hardpoints[]=
						{
							"RHS_HP_MELB",
							"RHS_HP_MELB_L",
							"RHS_HP_FFAR_ARMY",
							"UNI_SCALPEL",
							"13th_HEAVY_ROTARY"
						};
						attachment="CUP_PylonPod_19Rnd_Rocket_FFAR_M";
						priority=4;
						UIposition[]={0.56999999,0.40000001};
						mirroredMissilePos=2;
					};
					class pylons4: pylons1
					{
						priority=5;
						UIposition[]={2,0.34999999};
						mirroredMissilePos=1;
					};
				};
			};
		};
		weapons[]=
		{
			"CMFlareLauncher",
			"Laserdesignator_mounted"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
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
			memoryPointGun="laser_start";
			gunBeg="laser_end";
			gunEnd="gunnerview_flir";
		};
		memoryPointDriverOptics="gunnerview_flir";

		SPAWNPADCONFIG(13th_rotary,13th Rotary,MH-60,Knighthawk,1)
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
			"Laserdesignator_mounted"
		};
		magazines[]=
		{
			"Laserbatteries"
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
								"RHS_HP_MELB",
								"RHS_HP_MELB_L",
								"RHS_HP_FFAR_ARMY",
								"13th_HEAVY_ROTARY"
							};
							UIposition[]		= {0.573,0.44};
							maxweight			= 1200;
							priority			= 1;
							attachment			= "rhs_mag_M151_19_green";
							bay					= -1;
						};
						class pylon2 : pylon1
						{
							hardpoints[] = 
							{
								"RHS_HP_MELB",
								"RHS_HP_MELB_R",
								"RHS_HP_FFAR_ARMY",
								"13th_HEAVY_ROTARY"
							};
							UIposition[]		= {0.10,0.44};
							mirroredMissilePos	= 1;
						};
						class cmDispenser
						{
							hardpoints[]	= {"RHSUSF_cm_ANALE39","RHSUSF_cm_ANALE39_x2","RHSUSF_cm_ANALE39_x4"};
							priority		= 1;
							attachment		= "rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4";
							maxweight		= 800;
							UIposition[]	= {0.33,0.0};
						};
					};
				};
    		};

		SPAWNPADCONFIG(13th_rotary,13th Rotary,UH-1Y,Default,1)
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
								"RHS_HP_MELB",
								"RHS_HP_MELB_L",
								"RHS_HP_FFAR_ARMY"
							};
							priority=2;
							attachment="rhs_mag_M151_7";
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
							"RHS_HP_MELB_L"
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
								"RHS_HP_MELB",
								"RHS_HP_MELB_L",
								"RHS_HP_FFAR_ARMY"
							};
							UIposition[]={0.039999999,0.2};
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
		};

	class 13th_CH53E: Osean_CH53_Gau21
		{
		displayName = "[13th] CH-53E";
		side = 1;
		author="Waylen";
		faction="b_oseamarinecorps";
		crew="B_BOseaMarineCorps_Helicopter_pilot_01";
		editorSubcategory  = "EdSubcat_Helicopters";
		class Components: BaseComponents
			{
			class TransportPylonsComponent
				{
				UIPicture = "\rhsusf\addons\rhsusf_ch53\data\loadouts\RHS_CH53_EDEN_CA.paa";
				class pylons
					{
					class cmDispenser
						{
						hardpoints[]	= {"RHSUSF_cm_ANALE39","RHSUSF_cm_ANALE39_x2"};
						priority		= 1;
						attachment		= "rhsusf_ANALE39_CMFlare_Chaff_Magazine_x2";
						maxweight		= 800;
						UIposition[]	= {0.33,0.0};
					};
				};
			};
		};

		lockDetectionSystem = "2+4+8";
		incomingMissileDetectionSystem = "1+2+4+8+16";
		SPAWNPADCONFIG(13th_rotary,13th Rotary,CH-53E,Default,3)
	};
	
	class 13th_AH1Z: RHS_AH1Z 
		{
		displayName = "[13th] AH-1Z";
		side = 1;
		author="Waylen";
		faction="b_oseamarinecorps";
		crew="B_BOseaMarineCorps_Helicopter_pilot_01";
		editorSubcategory  = "EdSubcat_Helicopters";
		hiddenSelectionsTextures[]=
		{
			"\ojog_Helos\data\ah1z_body_osea_co.paa",
			"\rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_engines_co.paa",
			"#(argb,8,8,3)color(0,0,0,1.0,co)",
			"#(argb,8,8,3)color(0,0,0,1.0,co)",
			"#(argb,8,8,3)color(0,0,0,1.0,co)",
			"#(argb,8,8,3)color(0,0,0,1.0,co)"
		};
		class textureSources
		{
			class OseaViper
			{
				displayName="Osean";
				author="matheusgc02";
				textures[]=
				{
					"\ojog_Helos\data\ah1z_body_osea_co.paa",
					"\rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_engines_co.paa"
				};
				factions[]=
				{
					"Osea_F"
				};
			};
		};

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev=-85;
				maxElev=20;
				minTurn=-108;
				maxTurn=108;
				gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-120;
						maxAngleY=120;
						initFov=0.456;
						minFov=0.456;
						maxFov=0.456;
						directionStabilized=0;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class Medium: Wide
					{
						directionStabilized=0;
						opticsDisplayName="M";
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class Narrow: Medium
					{
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
					};					
				};
			};
		};

		SPAWNPADCONFIG(13th_rotary,13th Rotary,AH-1Z,Default,1)
		lockDetectionSystem = "2+4+8";
		incomingMissileDetectionSystem = "1+2+4+8+16";
	};
		
};
