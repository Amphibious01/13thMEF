// 13th CH-46 Kimi transport HMD, based on existing air pack HMD assets.
// Uses the CH-46 model memory point pilot_control, not pilotcontrol.
// Intentional standalone MFD: do not inherit legacy HUD classes.
#include "\x\13thMEF\addons\13th_air_vehicles\hmds\cfg_HMD_AH64D_104_Pilot_Ghost_Hawk.hpp"
// Kimi ON on spawn. Toggle via Actions menu.
defaultUserMFDvalues[]={1,0,0,0,1,0,0.2};
class UserActions: UserActions
{
#include "\x\13thMEF\addons\13th_air_vehicles\seaknight\ch46_kimi_actions.hpp"
};
