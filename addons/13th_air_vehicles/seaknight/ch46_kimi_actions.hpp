class HMDs_Kimi_UserAction_0_ON
{
	displayName = "<t color='#26ff00'>HMD ON</t>";
	condition = "(player == driver this) && (alive this)";
	statement = "this setUserMFDValue [0,1]";
	position = "pos pilot";
	radius = 20;
	onlyForPlayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -1;
};

class HMDs_Kimi_UserAction_0_OFF
{
	displayName = "<t color='#ffff00'>HMD OFF</t>";
	condition = "(player == driver this) && (alive this)";
	statement = "this setUserMFDValue [0,0]";
	position = "pos pilot";
	radius = 20;
	onlyForPlayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -2;
};

class HMDs_Kimi_UserAction_1_IMPERIAL
{
	displayName = "<t color='#26ff00'>HMD IMPERIAL</t>";
	condition = "(player == driver this) && (alive this)";
	statement = "this setUserMFDValue [1,1]";
	position = "pos pilot";
	radius = 20;
	onlyForPlayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -3;
};

class HMDs_Kimi_UserAction_1_METRIC
{
	displayName = "<t color='#ffff00'>HMD METRIC</t>";
	condition = "(player == driver this) && (alive this)";
	statement = "this setUserMFDValue [1,0]";
	position = "pos pilot";
	radius = 20;
	onlyForPlayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -4;
};

class HMDs_Kimi_UserAction_2_FULL
{
	displayName = "<t color='#26ff00'>HMD FULL</t>";
	condition = "(player == driver this) && (alive this)";
	statement = "this setUserMFDValue [2,0]";
	position = "pos pilot";
	radius = 20;
	onlyForPlayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -5;
};

class HMDs_Kimi_UserAction_2_DECLUTTER
{
	displayName = "<t color='#ffff00'>HMD DECLUTTER</t>";
	condition = "(player == driver this) && (alive this)";
	statement = "this setUserMFDValue [2,1]";
	position = "pos pilot";
	radius = 20;
	onlyForPlayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -6;
};

class HMDs_Kimi_UserAction_345_COLOR_GREEN
{
	displayName = "<t color='#00ff00'>HMD GREEN</t>";
	condition = "(player == driver this) && (alive this)";
	statement = "this setUserMFDValue [3,0]; this setUserMFDValue [4,1]; this setUserMFDValue [5,0];";
	position = "pos pilot";
	radius = 20;
	onlyForPlayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -7;
};

class HMDs_Kimi_UserAction_345_COLOR_YELLOW
{
	displayName = "<t color='#ffff00'>HMD YELLOW</t>";
	condition = "(player == driver this) && (alive this)";
	statement = "this setUserMFDValue [3,1]; this setUserMFDValue [4,1]; this setUserMFDValue [5,0];";
	position = "pos pilot";
	radius = 20;
	onlyForPlayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -8;
};

class HMDs_Kimi_UserAction_6_ALPHA_HIGH
{
	displayName = "HMD BRT HIGH";
	condition = "(player == driver this) && (alive this)";
	statement = "this setUserMFDValue [6,0.5]";
	position = "pos pilot";
	radius = 20;
	onlyForPlayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -9;
};

class HMDs_Kimi_UserAction_6_ALPHA_MED
{
	displayName = "HMD BRT MED";
	condition = "(player == driver this) && (alive this)";
	statement = "this setUserMFDValue [6,0.2]";
	position = "pos pilot";
	radius = 20;
	onlyForPlayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -10;
};

class HMDs_Kimi_UserAction_6_ALPHA_LOW
{
	displayName = "HMD BRT LOW";
	condition = "(player == driver this) && (alive this)";
	statement = "this setUserMFDValue [6,0.05]";
	position = "pos pilot";
	radius = 20;
	onlyForPlayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -11;
};