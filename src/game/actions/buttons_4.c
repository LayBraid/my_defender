/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "actions.h"
#include "utils.h"
#include "game.h"

void change_fps(my_defender_pointer *df)
{
    dfd *d = (dfd *) df;
    d->fps += 10;
    if (d->fps > 130)
        d->fps = 10;
}

void pause_set(my_defender_pointer *df)
{
    dfd *d = (dfd *) df;

    if (d->step != PAUSE_GAME)
        switch_step(d, PAUSE_GAME);
    else
        switch_step(d, MAIN);
}
