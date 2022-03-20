/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "clocks.h"
#include "enemies.h"
#include "game.h"

void clock_movement_enemies(dfd *df)
{
    df->clock_enemy->time = sfClock_getElapsedTime(df->clock_enemy->clock);
    df->clock_enemy->seconds = df->clock_enemy->time.microseconds / 1000000.0;
    if (df->clock_enemy->seconds > 0.05 / 5) {
        exe_movement_enemy(df);
        sfClock_restart(df->clock_enemy->clock);
    }
}

void clock_enemies_move(dfd *df)
{
    if (df->wave_status == STOP || df->enemies == NULL)
        return;
    df->enemies_move->time = sfClock_getElapsedTime(df->enemies_move->clock);
    df->enemies_move->seconds = df->enemies_move->
    time.microseconds / 1000000.0;
    if (df->enemies_move->seconds > 2.75) {
        move_all_enemies(df);
        sfClock_restart(df->enemies_move->clock);
    }
}
