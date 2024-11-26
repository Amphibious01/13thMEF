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
			"13th_SUPERBIKE",
			"13th_kitty_car"
        };
    };
};

class CfgVehicles {
    class CUP_B_LAV25M240_USMC;
    class CUP_B_LAV25_USMC;
	class CUP_C_Golf4_kitty_Civ;
  	class CUP_B_M1030_USMC; 

  	class 13th_SUPERBIKE: CUP_B_M1030_USMC{
  	  displayName = "[13th] super awesome and cool motorcycle";
  	  author = "Waylen B)";
	  faction = "b_oseamarinecorps";

  	  enginePower = 500000000000;
	  peakTorque = 50000000000;
	  maxSpeed = 800;
	  
  	};

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

        torqueCurve[]=
        {
	        {
	        	"(550/2500)",
	        	"(0/1300)"
	        },

	        {
	        	"(900/2500)",
	        	"(1300/1300)"
	        },

	        {
	        	"(2764/2500)",
	        	"(0/1300)"
	        }
        };
        peakTorque = 1300;
        enginePower = 5000;
        class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-4.8400002,
				"N",
				0,
                "D1",
                5.5,
				"D2",
				3,
				"D3",
				2.0899999,
				"D4",
				1.39,
				"D5",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				3.04
			};
			AmphibiousRatios[]=
			{
				"R1",
				-10,
				"N",
				0,
				"D1",
				20,
                "D2",
                10
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
        switchTime=0.0009;


        class ace_cargo {
            class cargo { class ACE_Wheel { type = "ACE_Wheel"; amount = 6; }; };
        };
    };

};