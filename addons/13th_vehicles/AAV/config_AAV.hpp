	class CUP_AAV_BASE;
	class CUP_B_AAV_USMC: CUP_AAV_BASE
	{
		class Wheels;
		class L2;
	};
	class CUP_B_AAV_Unarmed_USMC:CUP_AAV_BASE
	{
		class Wheels;
		class L2;
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

		maxSpeed = 90;
		enginePower = 750;
		peakTorque = 2800;
		tankTurnForce = 378000;
		tankTurnForceAngMinSpd	= 0.92;
		tankTurnForceAngSpd		= 1.04;
		engineShiftY = 0.6;

		class Wheels: Wheels
		{
			class L2:L2
			{
				sprungMass = 1916;
				springStrength = 47900;
				springDamperRate = 19160;
				moi = 8.4;
				dampingRate = 1;
				dampingRateDamaged = 1290;
				dampingRateDestroyed = 10000;
				dampingRateInAir = 2148;
				longitudinalStiffnessPerUnitGravity = 10000;
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

		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-2.2,
				"N",
				0,
				"D1",
				4.5,
				"D2",
				4.1,
				"D3",
				3.0,
				"D4",
				1.3
			};
			TransmissionRatios[]=
			{
				"High",
				8.5
			};
			AmphibiousRatios[]=
			{
				"R1",
				-20,
				"N",
				0,
				"D1",
				10
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};

		BASICINV

		GROUND_SP_INFO(AAVP,AAVP w/ MK19/M2,0,0)
	};

	class 13th_AAV_UNARMED: CUP_B_AAV_Unarmed_USMC
	{
		displayName = "[13th] AAVP/7A1 (Unarmed)";
		author="Waylen";
		side = 1;
		faction="b_oseamarinecorps";
		crew = "B_BOseaMarineCorps_Crewman_01";

		scope = 2;
		scopeCurator = 2;

		maxSpeed = 90;
		enginePower = 750;
		peakTorque = 2800;
		tankTurnForce = 378000;
		tankTurnForceAngMinSpd	= 0.92;
		tankTurnForceAngSpd		= 1.04;
		engineShiftY = 0.6;

		class Wheels: Wheels
		{
			class L2:L2
			{
				sprungMass = 1916;
				springStrength = 47900;
				springDamperRate = 19160;
				moi = 8.4;
				dampingRate = 1;
				dampingRateDamaged = 1290;
				dampingRateDestroyed = 10000;
				dampingRateInAir = 2148;
				longitudinalStiffnessPerUnitGravity = 10000;
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

		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-2.2,
				"N",
				0,
				"D1",
				4.5,
				"D2",
				4.1,
				"D3",
				3.0,
				"D4",
				1.3
			};
			TransmissionRatios[]=
			{
				"High",
				8.5
			};
			AmphibiousRatios[]=
			{
				"R1",
				-20,
				"N",
				0,
				"D1",
				10
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};

		BASICINV

		GROUND_SP_INFO(AAVP,AAVP,0,0)
	};

