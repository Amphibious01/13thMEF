class AZM_miclic_config {
	class AZM_miclic_vehiclesClasses {
		class BaseConfig;
        class 13thConfig: BaseConfig {
            rounds = 4;
        };
        class 13th_M1132: 13thConfig {
            ropeStartPosition[] = {-0.515,-2.747,0.471};
			bagLaunchPoint[] = {-0.515,-2.747,0.638};
        };
        class 13th_M1126_M2: 13th_M1132 {};
    };
};