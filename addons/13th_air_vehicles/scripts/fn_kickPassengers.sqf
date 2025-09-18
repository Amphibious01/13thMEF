params ["_vehicle"];
private _arr = fullCrew [_vehicle, "cargo"];
_arr append fullCrew [_vehicle, "turret"];
_arr append fullCrew [_vehicle, "commander"];
_arr append fullCrew [_vehicle, "gunner"];
{
    private _unit = _x select 0;
    moveOut _unit;
} forEach _arr;
