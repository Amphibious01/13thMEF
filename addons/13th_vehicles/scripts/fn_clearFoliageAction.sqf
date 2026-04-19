
params ["_vehicle"];

[15, [_vehicle], {
    params ["_args", "_elapsedTime", "_totalTime"]; 
    _args params ["_vehicle"];

    isNil {_vehicle call OMDF_fnc_hideFoliage};
}, 
{},
"Clearing Foliage...", {true}, ["isNotInside"]] call ace_common_fnc_progressBar;
