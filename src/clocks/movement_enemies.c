/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "clocks.h"
#include "enemies.h"

void clock_movement_enemies(dfd *df)
{
    df->clock_enemy->time = sfClock_getElapsedTime(df->clock_enemy->clock);
    df->clock_enemy->seconds = df->clock_enemy->time.microseconds / 1000000.0;
    if (df->clock_enemy->seconds > 0.05) {
        exe_movement_enemy(df);
        sfClock_restart(df->clock_enemy->clock);
    }
}
