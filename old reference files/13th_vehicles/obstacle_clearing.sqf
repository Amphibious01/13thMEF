params ["_vehicle"];

if (!isServer) exitWith {};
if (!isNull ZEN_placement_helper) exitWith {};

_vehicle addAction ["<t color='#00fb21'>Clear Foliage</t>", {
    params ["_vehicle"];

    [30, [_vehicle], {
        params ["_args", "_elapsedTime", "_totalTime"]; 
        _args params ["_vehicle"];

        private _hideTObjs = [];

        private _pos = _vehicle modelToWorld [0,2,0.2];
        private _size = 20;

        { _hideTObjs pushBack _x } forEach (nearestTerrainObjects [_pos,["TREE", "SMALL TREE", "BUSH"], _size]);

        { if ((str(_x) find "fallen" >= 0) || 
        (str(_x) find "stump" >= 0) || 
        (str(_x) find "stone" >= 0)) then 
        { _hideTObjs pushBack _x } else {}; } forEach (nearestTerrainObjects [_pos,[],_size]);

        { _x hideObjectGlobal true } forEach _hideTObjs;

    }, {}, "Clearing Foliage...", {true}, ["isNotInside"]] call ace_common_fnc_progressBar;

},[], 1.5, true, true, ""];