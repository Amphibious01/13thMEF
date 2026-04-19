#include "config_macros.hpp"
#include "hmd_macro.hpp"
#include "cfgFunctions.hpp"

class RscOpticsText;
class RscOpticsValue;
class RscButton;
class RscText;
class RscPicture;
class RscControlsGroup
{
	class VScrollbar;
	class HScrollbar;
};
class RscButtonMenu; 
class RscTextCheckBox;

class HScrollbar;
class VScrollbar;
class RscShortcutButton;
class IGUIBack;
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
			"rhsusf_c_airweapons",
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

class RscInGameUI
{
	class RscUnitInfo;
	class RHS_RscOptics_Heli_Attack_01_gunner: RscUnitInfo
	{
		idd=300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');";
		controls[]=
		{
			"CA_Zeroing",
			"CA_IGUI_elements_group"
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc=170;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_OpticsZoom: RscText
				{
					idc=180;
					style=1;
					colorText[]={0.47999999,0.76999998,0.46000001,1};
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="rhsusf_digital_font_var";
					text="4.5";
					x="43.85 * 		(0.01875 * SafezoneH)";
					y="19.6 * 		(0.025 * SafezoneH)";
					w="0* 		(0.01875 * SafezoneH)";
					h="0 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsMode: CA_OpticsZoom
				{
					idc=154;
				};
				class CA_Distance: RscText
				{
					idc=198;
					style=2;
					sizeEx="0.0295*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="2456";
					x="24.78 * 		(0.01875 * SafezoneH)";
					y="30.88 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc=179;
					style=0;
					sizeEx="0.0295*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="VIS";
					x="9.3 * 		(0.01875 * SafezoneH)";
					y="15.34 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					idc=153;
					style=0;
					sizeEx="0.0295*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="BHOT";
					x="11.15 * 		(0.01875 * SafezoneH)";
					y="15.34 * 		(0.025 * SafezoneH)";
					w="4.5 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					idc=158;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					x="31.1 * 		(0.01875 * SafezoneH)";
					y="12.85 * 		(0.025 * SafezoneH)";
					w="3.5 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
};

class Extended_InitPost_EventHandlers {
  class Tank {
    class 13th_UH1Y { init = "(_this select 0) allowCrewInImmobile true;"; };
  };
};

class CfgVehicles
{
    class Heli_Attack_01_base_F; // AH-99 Blackfoot base
    class B_Heli_Attack_01_F: Heli_Attack_01_base_F {
        class Turrets {
            class MainTurret; // copilot/gunner
        };
        // Give pilot radar control
        driverCanSee = 31;            // Pilot can use sensors
        gunnerCanSee = 31;            // Keep gunner sensors
        enableManualFire = 1;         // Allow pilot to fire guided weapons
    };
	

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
	
	#include "\x\13thMEF\addons\13th_air_vehicles\seahawk\config_seahawk.hpp"
	#include "\x\13thMEF\addons\13th_air_vehicles\littlebird\config_littlebird.hpp"
	#include "\x\13thMEF\addons\13th_air_vehicles\venom\config_venom.hpp"
	#include "\x\13thMEF\addons\13th_air_vehicles\sea_stallion\config_seastallion.hpp"
	#include "\x\13thMEF\addons\13th_air_vehicles\viper\config_viper.hpp"

};
