#include "global.h"
#include "rtc.h"
#include "world_time.h"

enum WorldTimeOfDay GetWorldTimeOfDay(void)
{
    u8 hour = gLocalTime.hours;

    if (hour >= 6 && hour < 9)
        return WORLD_TIME_MORNING;

    if (hour >= 9 && hour < 18)
        return WORLD_TIME_DAY;

    if (hour >= 18 && hour < 21)
        return WORLD_TIME_EVENING;

    return WORLD_TIME_NIGHT;
}
