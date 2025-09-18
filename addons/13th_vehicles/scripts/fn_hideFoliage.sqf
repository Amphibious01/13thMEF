params ["_vehicle"];

private _hideTObjs = [];

private _pos = _vehicle modelToWorld [0,2,0.2];
private _size = 20;

{ _hideTObjs pushBack _x } forEach (nearestTerrainObjects [_pos,["TREE", "SMALL TREE", "BUSH"], _size]);

{ if ((str(_x) find "fallen" >= 0) || 
(str(_x) find "stump" >= 0) || 
(str(_x) find "stone" >= 0)) then 
{ _hideTObjs pushBack _x } else {}; } forEach (nearestTerrainObjects [_pos,[],_size]);

{ [_x,true] remoteExec ["hideObject",0]; } forEach _hideTObjs;
