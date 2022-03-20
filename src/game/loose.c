/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "game.h"
#include "rounds.h"
#include "utils.h"
#include "data.h"

void loose_game(dfd *df)
{
    stop_round(df);
    reset_data(df);
    df->wave = 0;
    switch_step(df, LOOSE);
}
