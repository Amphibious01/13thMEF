class CfgPatches {
    class 13th_air  {
        name = "13th MEF Aircraft";
        author = "13th Mod Team";
        requiredVersion = 1;
        requiredAddons [] = {
            "rhsusf_a2port_air2",
            "RHS_US_A2_AirImport"
        };
        units [] = {
            "13th_UH1Y",
			"13th_SH60L_DAP"
        };
    };
};

class CfgVehicles { 
    class RHS_UH1Y; //base class
	class Components;
	class SensorTemplateIR;
	class SensorTemplateVisual;
	class SensorTemplateLaser;
	class SensorTemplatePassiveRadar;
	class SensorTemplateNV;
	class DefaultVehicleSystemsDisplayManagerLeft;
	class DefaultVehicleSystemsDisplayManagerRight;
    class MainTurret;
	class CUP_B_MH60L_DAP_4x_US;

	class 13th_SH60S: CUP_B_MH60L_DAP_4x_US{
		displayName = "[13th] SH-60S Knighthawk";
		scopeCurator = 2;
		scope = 2;
		author = "Waylen";
		faction = "b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Helicopter_pilot_01";
        
		// livery
		hiddenSelections [] = 
		{			
			"camo1",
			"camo2",
			"camo3" 
		};
		hiddenSelectionsTextures [] = 
		{ 
			"cup\airvehicles\cup_airvehicles_uh60\data\textures\mh60s_fuselage_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\textures\mh60s_engine_co.paa",
			"cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"
		};

		// giving it radar B)
		incomingMissileDetectionSystem = "1+2+4+8+16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent : SensorTemplateIR //GFAS
					{
						class AirTarget
						{
							minRange = 0;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};

						class GroundTarget      // ranges for targets with ground background
						{
							minRange = 0;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						animDirection = "CopilotTurret";
						angleRangeHorizontal = 40;
						angleRangeVertical = 30;
						typeRecognitionDistance = -1;
						minSpeedThreshold = 0;        // target speed in km/h above which the target will start to become visible
						maxSpeedThreshold = 0;       // target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold
						maxFogSeeThrough = 0.95;
						minTrackableSpeed = 0;
						maxTrackableSpeed = 695;
					};
					class VisualSensorComponent : SensorTemplateVisual {
						class AirTarget {
							minRange = 0;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};

						class GroundTarget {
							minRange = 0;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 70;
						animDirection = "CopilotTurret";
						angleRangeHorizontal = 40;
						angleRangeVertical = 30;
					};
					class NVSensorComponent: SensorTemplateNV
					{
						aimDown=0;
						animDirection="CopilotTurret";
						angleRangeHorizontal=30;
						angleRangeVertical=30;
						maxTrackableSpeed=110;
						typeRecognitionDistance=1000;
						class AirTarget
						{
							maxRange=2000;
							minRange=50;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							maxRange=2000;
							minRange=50;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
					};
					class LaserSensorComponent: SensorTemplateLaser{};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
				};
			};

			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				defaultDisplay="SensorsDisplay";
				class Components
				{
					class SensorsDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={16000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorsDisplay";
				class Components
				{
					class SensorsDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={16000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
				};
			};
			class TransportPylonsComponent
			{
				UIPicture="\CUP\AirVehicles\CUP_AirVehicles_UH60\data\ui\CUP_UH60M_4_3DEN_CA.paa";
				class presets
				{
					class Empty
					{
						displayName="$STR_EMPTY";
						attachment[]={};
					};
					class AntiTank
					{
						displayName="$STR_A3_CFGMAGAZINES_TITAN_AT_DNS";
						attachment[]=
						{
							"CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
							"CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
							"CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
							"CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M"
						};
					};
					class MultiRole
					{
						displayName="$STR_CUP_dn_Core_Pylon_Multirole";
						attachment[]=
						{
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M",
							"CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
							"CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M"
						};
					};
					class Escort
					{
						displayName="$STR_CUP_dn_Core_Pylon_Escort";
						attachment[]=
						{
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M",
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M",
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M",
							"CUP_PylonPod_19Rnd_Rocket_FFAR_M"
						};
					};
				};
				class pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"DAR",
							"DAGR",
							"B_SHRIEKER",
							"CUP_NATO_HELO_SMALL",
							"CUP_NATO_HELO_LARGE",
							"CUP_NATO_HELO_UH60"
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

		// pilot camera (go fucking figure)
		weapons[] = 
		{
			"CMFlareLauncher",
			"CUP_weapon_mastersafe",
			"rhs_weap_laserDesignator_AI"
		};
        magazines[] = {
			"168Rnd_CMFlare_Chaff_Magazine",
			"CUP_fake_weapon_mag",
			"rhs_LaserMag_ai"
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
			memoryPointGun = "laser_start";
            gunBeg="laser_end";
            gunEnd = "gunnerview_flir";
		};
    	memoryPointDriverOptics = "gunnerview_flir";
	};

    class 13th_UH1Y: RHS_UH1Y {
        displayName = "[13th] UH-1Y";
        author = "Waylen";
        faction = "b_oseamarinecorps";
        crew = "B_BOseaMarineCorps_Helicopter_pilot_01";
        weapons[] = {"rhs_weap_laserDesignator_AI"};
        magazines[] = {"rhs_LaserMag_ai"};
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
            gunEnd = "gun_begin";
            memoryPointGun="gun_end";
		};
    memoryPointDriverOptics = "commanderview";
    
    };


};