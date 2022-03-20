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

void clock_spawn_enemies(dfd *df)
{
    int rand = my_rand(0, 3);

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
        if (rand < 2)
            spawn_enemy(df);
        else
            spawn_blue_enemy(df);
        sfClock_restart(df->enem_spawn->clock);
    }
}
