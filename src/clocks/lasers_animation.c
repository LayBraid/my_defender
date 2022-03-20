/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "clocks.h"
#include "lasers.h"

void clock_lasers_animation(dfd *df)
{
    df->clock_lasers->time = sfClock_getElapsedTime(df->clock_lasers->clock);
    df->clock_lasers->seconds = df->clock_lasers->
    time.microseconds / 1000000.0;
    if (df->clock_lasers->seconds > 0.05) {
        exe_laser_anim(df);
        sfClock_restart(df->clock_lasers->clock);
    }
}
