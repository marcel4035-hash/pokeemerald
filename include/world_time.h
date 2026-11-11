#ifndef GUARD_WORLD_TIME_H
#define GUARD_WORLD_TIME_H

enum WorldTimeOfDay
{
    WORLD_TIME_MORNING,
    WORLD_TIME_DAY,
    WORLD_TIME_EVENING,
    WORLD_TIME_NIGHT,
};

enum WorldTimeOfDay GetWorldTimeOfDay(void);

#endif // GUARD_WORLD_TIME_H
