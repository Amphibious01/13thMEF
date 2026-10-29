turretInfoType = "RscOptics_13th_AH1Z_FLIR";

gunnerOpticsShowCursor = 1;
showAllTargets = 2;
allowTabLock = 1;

minTurn=-108;
maxTurn=108;
minElev=-85;
maxElev=20;

class OpticsIn
{
    class Wide
    {
        opticsDisplayName = "WIDE";
        gunnerOpticsModel =
            "\A3\weapons_f\Reticle\Optics_Gunner_AAA_01_m_F.p3d";
//\A3\weapons_f\Reticle\Optics_Gunner_AAA_01_m_F.p3d
        directionStabilized = 0;
        stabilizedInAxes = 0;

        initFov = 0.466;
        minFov = 0.466;
        maxFov = 0.466;

        initAngleX = 0;
        initAngleY = 0;

        minAngleX = -80;
        maxAngleX = 30;

        minAngleY = -120;
        maxAngleY = 120;

        visionMode[] = {"Normal", "NVG", "Ti"};
        thermalMode[] = {0,1};
    };

    class WideL: Wide
    {
        opticsDisplayName = "WIDE L";
        directionStabilized = 1;
        stabilizedInAxes = 3;
        initFov = 0.2;
        minFov = 0.2;
        maxFov = 0.2;
    };

    class Medium: Wide
    {
        opticsDisplayName = "MEDIUM";
        directionStabilized = 1;
        stabilizedInAxes = 3;
        initFov = 0.1;
        minFov = 0.1;
        maxFov = 0.1;
    };

    class Narrow: Wide
    {
        opticsDisplayName = "NARROW";
        directionStabilized = 1;
        stabilizedInAxes = 3;
        initFov = 0.02;
        minFov = 0.02;
        maxFov = 0.02;
    };

    class Narrower: Wide
    {
        opticsDisplayName = "NARROWER";
        directionStabilized = 1;
        stabilizedInAxes = 3;
        initFov = 0.01;
        minFov = 0.01;
        maxFov = 0.01;
    };
};
