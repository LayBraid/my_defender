/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "rounds.h"
#include "game.h"

void start_round(dfd *df)
{
    if (df->wave_status != STOP)
        return;
    df->wave++;
    df->spawning = TRUE;
    df->wave_status = IN_PROGRESS;
}
