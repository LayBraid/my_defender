/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include <printf.h>
#include "enemies.h"
#include "clocks.h"
#include "game.h"
#include "utils.h"

void clock_spawn_enemies(dfd *df)
{
    if (df->spawning == FALSE)
        return;
    if (count_enemies(df) >= max_enemies(df))
        return;
    df->enem_spawn->time = sfClock_getElapsedTime(df->enem_spawn->clock);
    df->enem_spawn->seconds = df->enem_spawn->time.microseconds / 1000000.0;
    if (df->enem_spawn->seconds > 2.5 / (df->wave / 0.33)) {
        spawn_enemy(df);
        sfClock_restart(df->enem_spawn->clock);
    }
}
