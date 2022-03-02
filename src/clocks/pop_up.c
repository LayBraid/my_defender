/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "clocks.h"
#include "utils.h"
#include "game.h"

void clock_pop_up(dfd *df)
{
    df->clock_popup->time = sfClock_getElapsedTime(df->clock_popup->clock);
    df->clock_popup->seconds = df->clock_popup->time.microseconds / 1000000.0;
    if (df->clock_popup->seconds > 1) {
        switch_step(df, MAIN);
        sfClock_restart(df->clock_popup->clock);
    }
}
