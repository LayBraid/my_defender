/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"
#include "clocks.h"
#include "game.h"
#include "utils.h"
#include "my.h"

void spawn_a_enemy(dfd *df, int id)
{
    switch (id) {
        case 0:
        case 1:
        case 2:
        case 3:
            spawn_enemy(df);
            break;
        case 4:
        case 5:
        case 6:
            spawn_blue_enemy(df);
            break;
        case 7:
        case 8:
            spawn_yellow_enemy(df);
            break;
        case 9:
            spawn_green_enemy(df);
            break;
    }
}

void clock_spawn_enemies(dfd *df)
{
    int rand = my_rand(0, 9);

    if (df->spawning == FALSE)
        return;
    if (df->spawn_round >= max_enemies(df))
        return;
    if (df->step == PAUSE_GAME || df->step == OPEN || df->step == SETTINGS
        || df->step == HELP)
        return;
    df->enem_spawn->time = sfClock_getElapsedTime(df->enem_spawn->clock);
    df->enem_spawn->seconds = df->enem_spawn->time.microseconds / 1000000.0;
    if (df->enem_spawn->seconds > 2.75) {
        spawn_a_enemy(df, rand);
        sfClock_restart(df->enem_spawn->clock);
    }
}
