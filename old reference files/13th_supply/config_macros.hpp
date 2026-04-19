#define LOGI_SP_INFO(VEHICLE,TYPE,PRIORITY)	                            \
    class VehicleSpawnerInfo											\
    {																	\
        class 13th_logi_spawner									    	\
        {																\
            scope = 1;													\
            spawner = "13th Logistics"; 								\
            vehicle= #VEHICLE; 											\
            type = #TYPE; 												\
            cost = 0; 												    \
            priority = PRIORITY;										\
            };															\
        };																