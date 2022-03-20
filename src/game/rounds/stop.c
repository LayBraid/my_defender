/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "rounds.h"
#include "game.h"

void stop_round(dfd *df)
{
    if (df->wave_status != IN_PROGRESS)
        return;
    df->spawning = FALSE;
    df->placing = FALSE;
    df->wave_status = STOP;
}
