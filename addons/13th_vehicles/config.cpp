class CfgPatches
{
	class 13th_vehicles
	{
		name="13th MEF Vehicles";
		author="13th Mod Team";
		requiredVersion=1;
		requiredAddons[]=
		{
			"CUP_WheeledVehicles_LAV25"
		};
		units[]=
		{
			"13th_LAV25",
			"13th_LAV25_M240",
			"13th_SUPERLAV25",
			"13th_kitty_car"
		};
	};
};
class CfgVehicles
{
	class CUP_B_LAV25M240_USMC;
	class CUP_B_LAV25_USMC;
	class CUP_C_Golf4_kitty_Civ;
	class CUP_B_M1030_USMC;
	class 13th_kitty_car: CUP_C_Golf4_kitty_Civ
	{
		displayName="[13th] Hellokitty Car";
		action="b_oseamarinecorps";
		side=1;
		enginePower=500000000000;
		peakTorque=50000000;
		armor=50000000;
	};
	class 13th_LAV25: CUP_B_LAV25_USMC
	{
		displayName="[13th] LAV-25";
		author="Waylen";
		faction="b_oseamarinecorps";
		waterResistenceCoef=0.0049999999;
		waterResistance=0.1;
		waterAngularDampingCoef=3;
		engineShiftY=1;
		peakTorque=1500;
		enginePower=5000;
		hiddenSelectionsTextures[]=
		{
			"\x\13thMEF\addons\13th_vehicles\data\lav_body_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavbody2_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lav_hq_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavalfa_ca.paa"
		};
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

		class AnimationSources
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
		
		GROUND_SP_INFO(LAV-25,Default,2)
	};
	class 13th_LAV25_M240: CUP_B_LAV25M240_USMC
	{
		displayName="[13th] LAV-25 (M240)";
		author="Waylen";
		faction="b_oseamarinecorps";
		model="\cup\wheeledvehicles\cup_wheeledvehicles_lav25\cup_lav25m240.p3d";
		picture="\cup\wheeledvehicles\cup_wheeledvehicles_lav25\Data\UI\Picture_LAV25m240_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\x\13thMEF\addons\13th_vehicles\data\lav_body_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavbody2_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lav_hq_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavalfa_ca.paa"
		};
		waterResistenceCoef=0.0049999999;
		waterResistance=0.1;
		waterAngularDampingCoef=3;
		engineShiftY=1;
		peakTorque=1500;
		enginePower=5000;
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
		class AnimationSources
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
			class front_panel_anim
			{
				source="user";
				animperiod=2;
				initPhase=0;
				sound="ServoRampSound_2";
			};
			class recoil_source
			{
				source="reload";
				weapon="CUP_Vacannon_M242_veh_LAV25";
			};
			class HitLFWheel
			{
				source="Hit";
				hitpoint="HitLFWheel";
				raw=1;
			};
			class HitLF2Wheel
			{
				source="Hit";
				hitpoint="HitLBWheel";
				raw=1;
			};
			class HitLMWheel
			{
				source="Hit";
				hitpoint="HitLMWheel";
				raw=1;
			};
			class HitLBWheel
			{
				source="Hit";
				hitpoint="HitLF2Wheel";
				raw=1;
			};
			class HitRFWheel
			{
				source="Hit";
				hitpoint="HitRFWheel";
				raw=1;
			};
			class HitRF2Wheel
			{
				source="Hit";
				hitpoint="HitRBWheel";
				raw=1;
			};
			class HitRMWheel
			{
				source="Hit";
				hitpoint="HitRMWheel";
				raw=1;
			};
			class HitRBWheel
			{
				source="Hit";
				hitpoint="HitRF2Wheel";
				raw=1;
			};
			class muzzle_rot_CUP_M240_veh_W
			{
				source="ammorandom";
				weapon="CUP_Vlmg_M240_veh";
			};
			class muzzle_rot_CUP_M242_W
			{
				source="ammorandom";
				weapon="CUP_Vacannon_M242_veh_LAV25";
			};
			class muzzle_hide_CUP_M242_W
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

		GROUND_SP_INFO(LAV-25,M240,2)
		};
	};
	class 13th_SUPERLAV25: CUP_B_LAV25_USMC
	{
		displayName="[13th] SUPERLAV";
		author="Waylen";
		faction="b_oseamarinecorps";
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
	};
};
