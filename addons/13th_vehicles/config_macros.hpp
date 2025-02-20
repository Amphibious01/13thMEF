#define GROUND_SP_INFO(VEHICLE,TYPE,PRIORITY,COST)	                    \
    class VehicleSpawnerInfo											\
    {																	\
        class 13th_ground_spawner									    \
        {																\
            scope = 1;													\
            spawner = "13th Ground"; 								    \
            vehicle= #VEHICLE; 											\
            type = #TYPE; 												\
            cost = COST; 												\
            priority = PRIORITY;										\
            };															\
        };																