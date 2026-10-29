class 13th_CH46: ttt_ch46d
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[13th] CH-46D Sea Knight";
    author = "13th Mod Team";
    faction = "b_oseamarinecorps";
    crew = "B_BOseaMarineCorps_Helicopter_pilot_01";
    editorSubcategory = "EdSubcat_Helicopters"; 
    slingLoadMaxCargoMass = 14000;
    liftForceCoef = 1.5;
    weapons[]=
		{
			"rhsusf_weap_CMDispenser_ANALE39"
		};
		magazines[]=
		{
			"rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4",
			"rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4"
		};

    hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
            "",
			"",
            "\x\13thMEF\addons\13th_air_vehicles\data\seaknight\ch46_cockpit_ca.paa"
		};
    class textureSources
    {
        class default
        {
            displayName="Default";
            author="13th Mod Team";
            textures[]=
            {
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "\x\13thMEF\addons\13th_air_vehicles\data\seaknight\ch46_cockpit_ca.paa"
            };
            factions[]=
            {
                "Osea_F"
            };
        };
    };

    // SENSOR

    lockDetectionSystem="1+2+4+8+16";
	incomingMissileDetectionSystem="1+2+4+8+16"; 

    
    class Components: Components
    {
        class VehicleSystemsDisplayManagerComponentLeft:
            DefaultVehicleSystemsDisplayManagerLeft
        {
            class Components: Components
            {
                class SensorsDisplay
                {
                    componentType = "SensorsDisplayComponent";
                    range[] = {2000,4000,8000,16000};
                    resource = "RscCustomInfoSensors";
                };
            };
        };

        class VehicleSystemsDisplayManagerComponentRight:
            DefaultVehicleSystemsDisplayManagerRight
        {
            class Components: Components
            {
                class SensorsDisplay
                {
                    componentType = "SensorsDisplayComponent";
                    range[] = {2000,4000,8000,16000};
                    resource = "RscCustomInfoSensors";
                };
            };
        };
    };

    // Leave the currently working Kimi HMD configuration unchanged.
    defaultUserMFDvalues[] = {1,0,0,0,1,0,0.2};
    #include "\x\13thMEF\addons\13th_air_vehicles\hmds\cfg_HMD_AH64D_104_Pilot_Ghost_Hawk.hpp"

    // Explicit replacement: source CH-46 actions + native Kimi HMD actions.
    // Do not write 'class UserActions: UserActions' here.
    class UserActions
    {

            class Ramp_level
            {
                displayName="<t color='#cbb8b4'>Level ramp</t>";
                showWindow=0;
                onlyForPlayer=0;
                radius=5;
                priority=0;
                position="pilot_control";
                condition="alive this and (driver this == player or gunner this == player) and this animationSourcePhase 'CargoRamp' != 0.35";
                statement="this animateSource ['cargoRamp', 0.35];";
            };
            class Ramp_lower: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Lower ramp</t>";
                condition="alive this and (driver this == player or gunner this == player) and this animationSourcePhase 'CargoRamp' > 0";
                statement="this animateSource ['cargoRamp', 0];";
            };
            class Ramp_raise: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Raise ramp</t>";
                condition="alive this and (driver this == player or gunner this == player) and this animationSourcePhase 'CargoRamp' < 1";
                statement="this animateSource ['cargoRamp', 1];";
            };
            class Door_open: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Open side door</t>";
                condition="alive this and (driver this == player or gunner this == player) and this animationSourcePhase 'SideDoor' < 1 and this animationSourcePhase 'SideDoorLowHide' > 0";
                statement="this animateSource ['SideDoor', 1];";
            };
            class Door_halfOpen: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Open upper side door</t>";
                condition="alive this and (driver this == player or gunner this == player) and this animationSourcePhase 'SideDoor' != 0.5 and this animationSourcePhase 'SideDoorUpHide' > 0";
                statement="this animateSource ['SideDoor', 0.5];";
            };
            class Door_close: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Close side door</t>";
                condition="alive this and (driver this == player or gunner this == player) and this animationSourcePhase 'SideDoor' > 0 and this animationSourcePhase 'SideDoorLowHide' > 0";
                statement="this animateSource ['SideDoor', 0];";
            };
            class Door_upHide: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Stow upper side door</t>";
                condition="alive this and (driver this == player or gunner this == player) and this animationSourcePhase 'SideDoorUpHide' > 0";
                statement="this animateSource ['SideDoorUpHide', 0];";
            };
            class Door_upShow: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Attach upper side door</t>";
                condition="alive this and (driver this == player or gunner this == player) and this animationSourcePhase 'SideDoorUpHide' < 1";
                statement="this animateSource ['SideDoorUpHide', 1];";
            };
            class Door_lowHide: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Stow lower side door</t>";
                condition="alive this and (driver this == player or gunner this == player) and this animationSourcePhase 'SideDoorLowHide' > 0";
                statement="this animateSource ['SideDoorLowHide', 0];";
            };
            class Door_lowShow: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Attach lower side door</t>";
                condition="alive this and (driver this == player or gunner this == player) and this animationSourcePhase 'SideDoorLowHide' < 1";
                statement="this animateSource ['SideDoorLowHide', 1];";
            };
            class FoldRotors: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Fold rotors</t>";
                condition="alive this and (driver this == player or gunner this == player) and speed this < 1 and !isEngineOn this and this animationSourcePhase 'PackRotors' < 0.1";
                statement="[this] spawn ttt_ch46_fnc_foldRotors;";
            };
            class UnfoldRotors: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Unfold rotors</t>";
                condition="alive this and (driver this == player or gunner this == player) and speed this < 1 and !isEngineOn this and this animationSourcePhase 'PackRotors' > 0.9";
                statement="[this] spawn ttt_ch46_fnc_unfoldRotors;";
            };
            class AttachWinch: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Attach winch</t>";
                condition="alive this and (driver this == player or gunner this == player) and this animationSourcePhase 'WinchHide' < 1";
                statement="this animateSource ['WinchHide', 1];";
            };
            class DetachWinch: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Detach winch</t>";
                condition="alive this and (driver this == player or gunner this == player) and this animationSourcePhase 'WinchHide' > 0";
                statement="this animateSource ['WinchHide', 0];";
            };
            class LightsUnhide: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Cabin Light On</t>";
                condition="alive this and (driver this == player or gunner this == player) and this animationSourcePhase 'LightsHide' < 0.5";
                statement="this animateSource ['LightsHide', 1];";
            };
            class LightsHide: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Cabin Lights Off</t>";
                condition="alive this and (driver this == player or gunner this == player) and this animationSourcePhase 'LightsHide' > 0.5";
                statement="this animateSource ['LightsHide', 0];";
            };
            class BasketDeploy: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Deploy Basket</t>";
                condition="alive this and (driver this == player or gunner this == player) and (this getVariable ['ttt_basketDeployed', 0]) isEqualTo 0";
                statement="this spawn ttt_ch46_fnc_basketDeploy;";
            };
            class BasketRecover: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Recover Basket</t>";
                condition="alive this and (driver this == player or gunner this == player) and (this getVariable ['ttt_basketDeployed', 0]) isEqualTo 1";
                statement="this spawn ttt_ch46_fnc_basketRecover;";
                priority=4;
            };
            class BasketEnter: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Enter Basket</t>";
                condition="alive this and (player in this) and (this getVariable ['ttt_basketDeployed', 0]) isEqualTo 1";
                statement="[this, player] spawn ttt_ch46_fnc_basketEnter;";
                priority=4;
            };
            class BasketLower: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Lower Basket</t>";
                condition="alive this and (driver this == player or gunner this == player) and (this getVariable ['ttt_basketDeployed', 0]) isEqualTo 1";
                statement="this spawn ttt_ch46_fnc_basketLower;";
                priority=5;
            };
            class BasketRaise: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Raise Basket</t>";
                condition="alive this and (driver this == player or gunner this == player) and (this getVariable ['ttt_basketDeployed', 0]) isEqualTo 1";
                statement="this spawn ttt_ch46_fnc_basketRaise;";
                priority=5;
            };
            class BasketDeployDoor: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Deploy Basket</t>";
                condition="alive this and (vehicle player turretUnit [2] == player) and (this getVariable ['ttt_basketDeployed', 0]) isEqualTo 0";
                statement="this spawn ttt_ch46_fnc_basketDeploy;";
                position="right_door";
            };
            class BasketRecoverDoor: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Recover Basket</t>";
                condition="alive this and (vehicle player turretUnit [2] == player) and (this getVariable ['ttt_basketDeployed', 0]) isEqualTo 1";
                statement="this spawn ttt_ch46_fnc_basketRecover;";
                priority=4;
                position="right_door";
            };
            class BasketLowerDoor: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Lower Basket</t>";
                condition="alive this and (vehicle player turretUnit [2] == player) and (this getVariable ['ttt_basketDeployed', 0]) isEqualTo 1";
                statement="this spawn ttt_ch46_fnc_basketLower;";
                priority=5;
                position="right_door";
            };
            class BasketRaiseDoor: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Raise Basket</t>";
                condition="alive this and (vehicle player turretUnit [2] == player) and (this getVariable ['ttt_basketDeployed', 0]) isEqualTo 1";
                statement="this spawn ttt_ch46_fnc_basketRaise;";
                priority=5;
                position="right_door";
            };
            class RearHatchUp: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Rear Hatch unhinge</t>";
                condition="alive this and (driver this == player or gunner this == player) and this animationSourcePhase 'hatch_middle_up' == 0 and this animationSourcePhase 'hatch_middle_down' == 0 ";
                statement="this animateSource ['hatch_middle_down', 1];";
            };
            class RearHatchDown: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Rear Hatch hinge</t>";
                condition="alive this and (driver this == player or gunner this == player) and this animationSourcePhase 'hatch_middle_down' > 0";
                statement="this animateSource ['hatch_middle_down', 0];";
            };
            class foldHatchUp: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Rear Hatch up</t>";
                condition="alive this and (driver this == player or gunner this == player) and (this animationSourcePhase 'hatch_middle_down' == 0) and (this animationSourcePhase 'hatch_middle_up' == 0)";
                statement="[this] spawn ttt_ch46_fnc_foldHatchUp;";
            };
            class foldHatchDown: Ramp_level
            {
                displayName="<t color='#cbb8b4'>Rear Hatch down</t>";
                condition="alive this and (driver this == player or gunner this == player) and (this animationSourcePhase 'hatch_middle_down' == 0) and (this animationSourcePhase 'hatch_middle_up' > 0)";
                statement="[this] spawn ttt_ch46_fnc_foldHatchDown;";
            };

        // 13th Kimi HMD additions (pilot-only)

            class Kimi_HMD_ON
            {
                displayName = "<t color='#26ff00'>HMD ON</t>";
                condition = "alive this && {driver this == player}";
                statement = "this setUserMFDValue [0,1];";
                position = "pilot_control";
                radius = 20;
                priority = -1;
                onlyForPlayer = 1;
                showWindow = 0;
                hideOnUse = 1;
            };

            class Kimi_HMD_OFF
            {
                displayName = "HMD OFF";
                condition = "alive this && {driver this == player}";
                statement = "this setUserMFDValue [0,0];";
                position = "pilot_control";
                radius = 20;
                priority = -2;
                onlyForPlayer = 1;
                showWindow = 0;
                hideOnUse = 1;
            };

            class Kimi_HMD_IMPERIAL
            {
                displayName = "HMD IMPERIAL";
                condition = "alive this && {driver this == player}";
                statement = "this setUserMFDValue [1,1];";
                position = "pilot_control";
                radius = 20;
                priority = -3;
                onlyForPlayer = 1;
                showWindow = 0;
                hideOnUse = 1;
            };

            class Kimi_HMD_METRIC
            {
                displayName = "HMD METRIC";
                condition = "alive this && {driver this == player}";
                statement = "this setUserMFDValue [1,0];";
                position = "pilot_control";
                radius = 20;
                priority = -4;
                onlyForPlayer = 1;
                showWindow = 0;
                hideOnUse = 1;
            };

            class Kimi_HMD_FULL
            {
                displayName = "HMD FULL";
                condition = "alive this && {driver this == player}";
                statement = "this setUserMFDValue [2,0];";
                position = "pilot_control";
                radius = 20;
                priority = -5;
                onlyForPlayer = 1;
                showWindow = 0;
                hideOnUse = 1;
            };

            class Kimi_HMD_DECLUTTER
            {
                displayName = "HMD DECLUTTER";
                condition = "alive this && {driver this == player}";
                statement = "this setUserMFDValue [2,1];";
                position = "pilot_control";
                radius = 20;
                priority = -6;
                onlyForPlayer = 1;
                showWindow = 0;
                hideOnUse = 1;
            };

            class Kimi_HMD_GREEN
            {
                displayName = "<t color='#00ff00'>HMD GREEN</t>";
                condition = "alive this && {driver this == player}";
                statement = "this setUserMFDValue [3,0]; this setUserMFDValue [4,1]; this setUserMFDValue [5,0];";
                position = "pilot_control";
                radius = 20;
                priority = -7;
                onlyForPlayer = 1;
                showWindow = 0;
                hideOnUse = 1;
            };

            class Kimi_HMD_YELLOW
            {
                displayName = "<t color='#ffff00'>HMD YELLOW</t>";
                condition = "alive this && {driver this == player}";
                statement = "this setUserMFDValue [3,1]; this setUserMFDValue [4,1]; this setUserMFDValue [5,0];";
                position = "pilot_control";
                radius = 20;
                priority = -8;
                onlyForPlayer = 1;
                showWindow = 0;
                hideOnUse = 1;
            };

            class Kimi_HMD_BRIGHT_HIGH
            {
                displayName = "HMD BRT HIGH";
                condition = "alive this && {driver this == player}";
                statement = "this setUserMFDValue [6,0.5];";
                position = "pilot_control";
                radius = 20;
                priority = -9;
                onlyForPlayer = 1;
                showWindow = 0;
                hideOnUse = 1;
            };

            class Kimi_HMD_BRIGHT_MED
            {
                displayName = "HMD BRT MED";
                condition = "alive this && {driver this == player}";
                statement = "this setUserMFDValue [6,0.2];";
                position = "pilot_control";
                radius = 20;
                priority = -10;
                onlyForPlayer = 1;
                showWindow = 0;
                hideOnUse = 1;
            };

            class Kimi_HMD_BRIGHT_LOW
            {
                displayName = "HMD BRT LOW";
                condition = "alive this && {driver this == player}";
                statement = "this setUserMFDValue [6,0.05];";
                position = "pilot_control";
                radius = 20;
                priority = -11;
                onlyForPlayer = 1;
                showWindow = 0;
                hideOnUse = 1;
            };
            class KICK_PASSENGERS
            {
                displayName="<t color='#730901'>Kick passengers</t>";
                condition="(player in [driver this, this turretUnit [0]]) && (alive this) && (speed this <= 60) && ((getPosATL this select 2) <= 2)";
                statement="this call OMDF_fnc_kickPassengers";
                position="pilotcontrol";
                radius=10;
                priority=10.1;
                onlyforplayer=1;
                showWindow=0;
                hideOnUse=1;
            };
    };
};