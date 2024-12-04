#define SENSORS                                                                                         \
class TransportCounterMeasuresComponent {};                                                             \
class SensorsManagerComponent                                                                           \
{                                                                                                       \
	class Components                                                                                    \
	{                                                                                                   \
		class IRSensorComponent: SensorTemplateIR                                                       \
		{                                                                                               \
			class AirTarget                                                                             \
			{                                                                                           \
				minRange=0;                                                                             \
				maxRange=4000;                                                                          \
				objectDistanceLimitCoef=1;                                                              \
				viewDistanceLimitCoef=1;                                                                \
			};                                                                                          \
			class GroundTarget                                                                          \
			{                                                                                           \
				minRange=0;                                                                             \
				maxRange=4000;                                                                          \
				objectDistanceLimitCoef=1;                                                              \
				viewDistanceLimitCoef=1;                                                                \
			};                                                                                          \
			maxTrackableSpeed=300;                                                                      \
			animDirection="mainGun";                                                                    \
			angleRangeHorizontal=46;                                                                    \
			angleRangeVertical=34;                                                                      \
			aimdown=-0.25;                                                                              \
		};                                                                                              \
		class VisualSensorComponent: SensorTemplateVisual                                               \
		{                                                                                               \
			class AirTarget                                                                             \
			{                                                                                           \
				minRange=0;                                                                             \
				maxRange=1500;                                                                          \
				objectDistanceLimitCoef=1;                                                              \
				viewDistanceLimitCoef=1;                                                                \
			};                                                                                          \
			class GroundTarget                                                                          \
			{                                                                                           \
				minRange=0;                                                                             \
				maxRange=1500;                                                                          \
				objectDistanceLimitCoef=1;                                                              \
				viewDistanceLimitCoef=1;                                                                \
			};                                                                                          \
			maxTrackableSpeed=300;                                                                      \
			animDirection="mainGun";                                                                    \
			angleRangeHorizontal=46;                                                                    \
			angleRangeVertical=34;                                                                      \
			aimdown=-0.25;                                                                              \
		};                                                                                              \
		class ActiveRadarSensorComponent: SensorTemplateActiveRadar                                     \
		{                                                                                               \
			class AirTarget                                                                             \
			{                                                                                           \
				minRange=0;                                                                             \
				maxRange=4000;                                                                          \
				objectDistanceLimitCoef=-1;                                                             \
				viewDistanceLimitCoef=-1;                                                               \
			};                                                                                          \
			class GroundTarget                                                                          \
			{                                                                                           \
				minRange=0;                                                                             \
				maxRange=4000;                                                                          \
				objectDistanceLimitCoef=-1;                                                             \
				viewDistanceLimitCoef=-1;                                                               \
			};                                                                                          \
			maxTrackableSpeed=300;                                                                      \
			angleRangeHorizontal=120;                                                                   \
			angleRangeVertical=90;                                                                      \
			groundNoiseDistanceCoef=-1;                                                                 \
			maxGroundNoiseDistance=-1;                                                                  \
			minSpeedThreshold=0;                                                                        \
			maxSpeedThreshold=0;                                                                        \
			aimDown=30;                                                                                 \
		};                                                                                              \
		class PassiveRadarSensorComponent: SensorTemplatePassiveRadar                                   \
		{                                                                                               \
		};                                                                                              \
		class LaserSensorComponent: SensorTemplateLaser                                                 \
		{                                                                                               \
		};                                                                                              \
		class NVSensorComponent: SensorTemplateNV                                                       \
		{                                                                                               \
		};                                                                                              \
	};                                                                                                  \
};                                                                                                      \
class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft                \
{                                                                                                       \
	class Components: Components                                                                        \
	{                                                                                                   \
		class VehiclePrimaryGunnerDisplay                                                               \
		{                                                                                               \
			componentType="TransportFeedDisplayComponent";                                              \
			source="PrimaryGunner";                                                                     \
		};                                                                                              \
		class VehicleMissileDisplay                                                                     \
		{                                                                                               \
			componentType="TransportFeedDisplayComponent";                                              \
			source="Missile";                                                                           \
		};                                                                                              \
		class SensorDisplay                                                                             \
		{                                                                                               \
			componentType="SensorsDisplayComponent";                                                    \
			range[]={4000,2000,16000,8000};                                                             \
			resource="RscCustomInfoSensors";                                                            \
		};                                                                                              \
	};                                                                                                  \
};                                                                                                      \
class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight              \
{                                                                                                       \
	defaultDisplay="SensorDisplay";                                                                     \
	class Components: Components                                                                        \
	{                                                                                                   \
		class VehiclePrimaryGunnerDisplay                                                               \
		{                                                                                               \
			componentType="TransportFeedDisplayComponent";                                              \
			source="PrimaryGunner";                                                                     \
		};                                                                                              \
		class VehicleMissileDisplay                                                                     \
		{                                                                                               \
			componentType="TransportFeedDisplayComponent";                                              \
			source="Missile";                                                                           \
		};                                                                                              \
		class SensorDisplay                                                                             \
		{                                                                                               \
			componentType="SensorsDisplayComponent";                                                    \
			range[]={4000,2000,16000,8000};                                                             \
			resource="RscCustomInfoSensors";                                                            \
		};                                                                                              \
	};                                                                                                  \
};                                                                                                      


#define PILOTCAMERA (MEMORYPOINTDRIVEROPTICS,MEMORYPOINTGUN,GUNBEG,GUNEND)                                    \
class pilotCamera                                                                                             \
{                                                                                                             \
	class OpticsIn                                                                                            \
	{                                                                                                         \
		class Wide                                                                                            \
		{                                                                                                     \
			opticsDisplayName="WFOV";                                                                         \
			initAngleX=0;                                                                                     \
			minAngleX=-180;                                                                                   \
			maxAngleX=180;                                                                                    \
			initAngleY=0;                                                                                     \
			minAngleY=-90;                                                                                    \
			maxAngleY=20;                                                                                     \
			initFov="(30 / 120)";                                                                             \
			minFov="(30 / 120)";                                                                              \
			maxFov="(30 / 120)";                                                                              \
			directionStabilized=1;                                                                            \
			visionMode[]=                                                                                     \
			{                                                                                                 \
				"Normal",                                                                                     \
				"NVG",                                                                                        \
				"Ti"                                                                                          \
			};                                                                                                \
			thermalMode[]={0,1};                                                                              \
			gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";            \
			opticsPPEffects[]=                                                                                \
			{                                                                                                 \
				"OpticsCHAbera2",                                                                             \
				"OpticsBlur2"                                                                                 \
			};                                                                                                \
		};                                                                                                    \
		class Medium: Wide                                                                                    \
		{                                                                                                     \
			opticsDisplayName="MFOV";                                                                         \
			initFov="(6 / 120)";                                                                              \
			minFov="(6 / 120)";                                                                               \
			maxFov="(6 / 120)";                                                                               \
			gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";          \
		};                                                                                                    \
		class Narrow: Wide                                                                                    \
		{                                                                                                     \
			opticsDisplayName="NFOV";                                                                         \
			initFov="(2 / 120)";                                                                              \
			minFov="(2 / 120)";                                                                               \
			maxFov="(2 / 120)";                                                                               \
			gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";          \
		};                                                                                                    \
		showMiniMapInOptics=0;                                                                                \
		showUAVViewInOptics=0;                                                                                \
		showSlingLoadManagerInOptics=0;                                                                       \
	};                                                                                                        \
	minTurn=-180;                                                                                             \
	maxTurn=180;                                                                                              \
	initTurn=0;                                                                                               \
	minElev=-80;                                                                                              \
	maxElev=90;                                                                                               \
	initElev=5;                                                                                               \
	maxXRotSpeed=1;                                                                                           \
	maxYRotSpeed=1;                                                                                           \
	maxMouseXRotSpeed=0.5;                                                                                    \
	maxMouseYRotSpeed=0.5;                                                                                    \
	pilotOpticsShowCursor=1;                                                                                  \
	controllable=1;                                                                                           \
	memoryPointGun = #MEMORYPOINTGUN;                                                                        \
    gunBeg= #GUNBEG;                                                                                         \
    gunEnd = #GUNEND;                                                                                        \
};                                                                                                            \
memoryPointDriverOptics = #MEMORYPOINTDRIVEROPTICS;                                                          