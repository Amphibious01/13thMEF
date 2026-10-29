class RscOptics_13th_AH1Z_FLIR: RscUnitInfo
{
    idd=300;
    controls[]=
    {
        "HAFM_CA_IGUI_elements_group"
    };
    class HAFM_CA_IGUI_elements_group: RscControlsGroup
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
        x="0 *    (0.01875 * SafezoneH) +     (SafezoneX + ((SafezoneW - SafezoneH) / 2))";
        y="0 *    (0.025 * SafezoneH) +     (SafezoneY)";
        w="53.5 *     (0.01875 * SafezoneH)";
        h="40 *     (0.025 * SafezoneH)";
        class controls
        {
            class CamText: RscText
            {
                style=0;
                sizeEx="0.02*SafezoneH";
                shadow=0;
                font="EtelkaMonospacePro";
                idc=10010;
            };
            class CamText_Output: CamText
            {
                font="EtelkaMonospaceProBold";
                colorBackground[]={0,0,0,0.30000001};
            };
            class CamText_Red: CamText_Output
            {
                colorText[]={1,0,0,1};
            };
            class TimeText: CamText
            {
                idc=10011;
                Text="Time:";
                x="5 *    (0.01875 * SafezoneH)";
                y="3 *    (0.025 * SafezoneH)";
                w="5 *    (0.01875 * SafezoneH)";
                h="1 *    (0.025 * SafezoneH)";
            };
            class ValueTime: CamText
            {
                idc=190;
                text="20:28:35";
                x="4.64 *     (0.01875 * SafezoneH)";
                y="3.8 *    (0.025 * SafezoneH)";
                w="5 *    (0.01875 * SafezoneH)";
                h="1 *    (0.025 * SafezoneH)";
            };
            class TextSpd: CamText
            {
                idc=1009;
                text="SPD [KM/H]:";
                x="5 *    (0.01875 * SafezoneH)";
                y="10 *     (0.025 * SafezoneH)";
                w="5 *    (0.01875 * SafezoneH)";
                h="1 *    (0.025 * SafezoneH)";
            };
            class CA_Speed: CamText_Output
            {
                idc=188;
                text="120";
                x="5 *    (0.01875 * SafezoneH)";
                y="11 *     (0.025 * SafezoneH)";
                w="5 *    (0.01875 * SafezoneH)";
                h="1 *    (0.025 * SafezoneH)";
            };
            class TextAlt: CamText
            {
                idc=1007;
                text="ALT [AGL]:";
                x="5 *    (0.01875 * SafezoneH)";
                y="12 *     (0.025 * SafezoneH)";
                w="5 *    (0.01875 * SafezoneH)";
                h="1 *    (0.025 * SafezoneH)";
            };
            class CA_Alt: CamText_Output
            {
                idc=189;
                text="3825";
                x="5 *    (0.01875 * SafezoneH)";
                y="13 *     (0.025 * SafezoneH)";
                w="5 *    (0.01875 * SafezoneH)";
                h="1 *    (0.025 * SafezoneH)";
            };
            class TextGrid: CamText
            {
                idc=1005;
                text="ACFT POS:";
                x="5 *    (0.01875 * SafezoneH)";
                y="14 *     (0.025 * SafezoneH)";
                w="5 *    (0.01875 * SafezoneH)";
                h="1 *    (0.025 * SafezoneH)";
            };
            class ValueGrid: CamText_Output
            {
                idc=171;
                text="382546";
                x="5 *    (0.01875 * SafezoneH)";
                y="15 *     (0.025 * SafezoneH)";
                w="5 *    (0.01875 * SafezoneH)";
                h="1 *    (0.025 * SafezoneH)";
            };
            class ModeText: CamText
            {
                idc=1002;
                text="CAM MODE:";
                x="5 *    (0.01875 * SafezoneH)";
                y="20 *     (0.025 * SafezoneH)";
                w="5 *    (0.01875 * SafezoneH)";
                h="1 *    (0.025 * SafezoneH)";
            };
            class CA_VisionMode: CamText_Output
            {
                idc=179;
                style=0;
                text="DTV";
                x="5 *    (0.01875 * SafezoneH)";
                y="21 *     (0.025 * SafezoneH)";
                w="5 *    (0.01875 * SafezoneH)";
                h="1 *    (0.025 * SafezoneH)";
            };
            class CA_FlirMode: CamText_Output
            {
                idc=153;
                style=0;
                text="BHOT";
                x="5 *    (0.01875 * SafezoneH)";
                y="22 *     (0.025 * SafezoneH)";
                w="5 *    (0.01875 * SafezoneH)";
                h="1 *    (0.025 * SafezoneH)";
            };
            class TextMag: CamText
            {
                idc=1011;
                text="ZOOM:";
                x="5 *    (0.01875 * SafezoneH)";
                y="23 *     (0.025 * SafezoneH)";
                w="5 *    (0.01875 * SafezoneH)";
                h="1 *    (0.025 * SafezoneH)";
            };
            class CA_OpticsZoom: CamText_Output
            {
                idc=180;
                text="28x";
                x="5 *    (0.01875 * SafezoneH)";
                y="24 *     (0.025 * SafezoneH)";
                w="5 *    (0.01875 * SafezoneH)";
                h="1 *    (0.025 * SafezoneH)";
            };
            class TextBearing: CamText
            {
                idc=10006;
                text="BEARING:";
                x="45 *     (0.01875 * SafezoneH)";
                y="10 *     (0.025 * SafezoneH)";
                w="5 *    (0.01875 * SafezoneH)";
                h="1 *    (0.025 * SafezoneH)";
            };
            class CA_Heading: CamText_Red
            {
                idc=156;
                text="023";
                x="45 *     (0.01875 * SafezoneH)";
                y="11 *     (0.025 * SafezoneH)";
                w="5 *    (0.01875 * SafezoneH)";
                h="1 *    (0.025 * SafezoneH)";
            };
            class TextGrid_Target: CamText
            {
                idc=10005;
                text="TGT POS:";
                x="45 *     (0.01875 * SafezoneH)";
                y="12 *     (0.025 * SafezoneH)";
                w="5 *    (0.01875 * SafezoneH)";
                h="1 *    (0.025 * SafezoneH)";
            };
            class ValueGrid_Target: CamText_Red
            {
                idc=172;
                x="45 *     (0.01875 * SafezoneH)";
                y="13 *     (0.025 * SafezoneH)";
                w="5 *    (0.01875 * SafezoneH)";
                h="1 *    (0.025 * SafezoneH)";
            };
            class RangeText: CamText
            {
                idc=1000;
                text="TGT RANGE:";
                x="45 *     (0.01875 * SafezoneH)";
                y="14 *     (0.025 * SafezoneH)";
                w="5 *    (0.01875 * SafezoneH)";
                h="1 *    (0.025 * SafezoneH)";
            };
            class CA_Distance: CamText_Red
            {
                idc=151;
                text="2456";
                x="45 *     (0.01875 * SafezoneH)";
                y="15 *     (0.025 * SafezoneH)";
                w="5 *    (0.01875 * SafezoneH)";
                h="1 *    (0.025 * SafezoneH)";
            };
            class CA_Elev_text: CamText
            {
                idc=1013;
                text="ELEVATION:";
                x="45 *     (0.01875 * SafezoneH)";
                y="16 *     (0.025 * SafezoneH)";
                w="5 *    (0.01875 * SafezoneH)";
                h="1 *    (0.025 * SafezoneH)";
            };
            class CA_Elev: CamText_Red
            {
                idc=175;
                text="80.5";
                x="45 *     (0.01875 * SafezoneH)";
                y="17 *     (0.025 * SafezoneH)";
                w="5 *    (0.01875 * SafezoneH)";
                h="1 *    (0.025 * SafezoneH)";
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
                x="26 *     (0.01875 * SafezoneH)";
                y="21 *     (0.025 * SafezoneH)";
                w="5 *    (0.01875 * SafezoneH)";
                h="1 *    (0.025 * SafezoneH)";
            };
        };
    };
};
