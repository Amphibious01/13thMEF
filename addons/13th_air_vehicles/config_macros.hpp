#define SPAWNPADCONFIG(SPAWNERCLASS,SPAWNERNAME,VEHICLE,TYPE,PRIORITY)	\
    class VehicleSpawnerInfo											\
    {																	\
        class SPAWNERCLASS												\
        {																\
            scope = 1;													\
            spawner = #SPAWNERNAME; 									\
            vehicle=#VEHICLE; 											\
            type = #TYPE; 												\
            cost = 0.5; 												\
            priority = PRIORITY;										\
            };															\
        };																\
																		