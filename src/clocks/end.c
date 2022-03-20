/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "clocks.h"
#include "utils.h"
#include "game.h"

void end_clock(dfd *df)
{
    if (df->step != END)
        return;
    df->end->time = sfClock_getElapsedTime(df->end->clock);
    df->end->seconds = df->end->time.microseconds / 1000000.0;
    if (df->end->seconds > 0.01) {
        move_title(df);
        sfClock_restart(df->end->clock);
    }
}
