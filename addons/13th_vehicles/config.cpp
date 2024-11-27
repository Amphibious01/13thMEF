class CfgPatches {
    class 13th_vehicles  {
        name = "13th MEF Vehicles";
        author = "13th Mod Team";
        requiredVersion = 1;
        requiredAddons [] = {
            "cup_wheeledvehicles_lav25",
        };
        units [] = {
            "13th_LAV25",
            "13th_LAV25_M240",
            "13th_SUPERLAV25",
			"13th_kitty_car"
        };
    };
};

class CfgVehicles {
    class CUP_B_LAV25M240_USMC;
    class CUP_B_LAV25_USMC;
	class CUP_C_Golf4_kitty_Civ;
  	class CUP_B_M1030_USMC; 

	class 13th_kitty_car: CUP_C_Golf4_kitty_Civ{
		displayName = "[13th] Hellokitty Car";
		action = "b_oseamarinecorps";
		side = 1;

		enginePower = 500000000000;
		peakTorque = 50000000;
		armor = 50000000;
	};


    class 13th_LAV25: CUP_B_LAV25_USMC {
        displayName = "[13th] LAV-25";
        author = "Waylen";
        faction = "b_oseamarinecorps";

        waterResistenceCoef = 0.005;
        waterResistance = 0.1;
        waterAngularDampingCoef = 3;
        engineShiftY=1;

        peakTorque = 1500;
        enginePower = 5000;

        class HitPoints: HitPoints
		{
			class HitBody
			{
				armor=1;
				material=-1;
				name="zbytek";
				visual="zbytek";
				minimalHit=0.2;
				passThrough=0;
				explosionShielding=0.0089999996;
			};
			class HitEngine
			{
				armor=0.69999999;
				material=-1;
				name="motor";
				visual="zbytek";
				passThrough=0;
			};
			class HitFuel
			{
				armor=1;
				material=-1;
				name="palivo";
				visual="zbytek";
				passThrough=0;
			};
			class HitLFWheel: HitLFWheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitLBWheel: HitLBWheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitLMWheel: HitLMWheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRBWheel: HitRBWheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRMWheel: HitRMWheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
		};

        class ace_cargo {
            class cargo { class ACE_Wheel { type = "ACE_Wheel"; amount = 6; }; };
        };
    };

    class 13th_LAV25_M240: CUP_B_LAV25_USMC {
        displayName = "[13th] LAV-25 (M240)";
        author = "Waylen";
        faction = "b_oseamarinecorps";

        waterResistenceCoef = 0.005;
        waterResistance = 0.1;
        waterAngularDampingCoef = 3;
        engineShiftY=1;

        peakTorque = 1500;
        enginePower = 5000;

                class HitPoints: HitPoints
		{
			class HitBody
			{
				armor=1;
				material=-1;
				name="zbytek";
				visual="zbytek";
				minimalHit=0.2;
				passThrough=0;
				explosionShielding=0.0089999996;
			};
			class HitEngine
			{
				armor=0.69999999;
				material=-1;
				name="motor";
				visual="zbytek";
				passThrough=0;
			};
			class HitFuel
			{
				armor=1;
				material=-1;
				name="palivo";
				visual="zbytek";
				passThrough=0;
			};
			class HitLFWheel: HitLFWheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitLBWheel: HitLBWheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitLMWheel: HitLMWheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRBWheel: HitRBWheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRMWheel: HitRMWheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
		};

        class ace_cargo {
            class cargo { class ACE_Wheel { type = "ACE_Wheel"; amount = 6; }; };
        };
    };

    class 13th_SUPERLAV25: CUP_B_LAV25_USMC {
        displayName = "[13th] SUPERLAV";
        author = "Waylen";
        faction = "b_oseamarinecorps";

        waterResistenceCoef = 0.00001;
        waterResistance = 0.1;
        waterAngularDampingCoef = 3;
        engineShiftY=1;

        maxSpeed = 250;
        peakTorque = 300000;
        enginePower = 300000;

        class HitPoints: HitPoints
		{
			class HitBody
			{
				armor=1;
				material=-1;
				name="zbytek";
				visual="zbytek";
				minimalHit=0.2;
				passThrough=0;
				explosionShielding=0.0089999996;
			};
			class HitEngine
			{
				armor=0.69999999;
				material=-1;
				name="motor";
				visual="zbytek";
				passThrough=0;
			};
			class HitFuel
			{
				armor=1;
				material=-1;
				name="palivo";
				visual="zbytek";
				passThrough=0;
			};
			class HitLFWheel: HitLFWheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitLBWheel: HitLBWheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitLMWheel: HitLMWheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRBWheel: HitRBWheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRMWheel: HitRMWheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=0.72;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
		};

        class ace_cargo {
            class cargo { class ACE_Wheel { type = "ACE_Wheel"; amount = 6; }; };
        };
    };

};