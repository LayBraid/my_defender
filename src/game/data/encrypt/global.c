/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "data.h"
#include "my.h"
#include "game.h"

char *save_game(dfd *df)
{
    char *data = "[";

    if (df->step == END || df->step == END_SKIP)
        return DEFAULT;
    my_strcat_3(&data, my_itoa(df->dlc));
    my_strcat_3(&data, ",");
    my_strcat_3(&data, my_itoa(df->wave));
    my_strcat_3(&data, ",");
    my_strcat_3(&data, my_itoa(df->coins));
    my_strcat_3(&data, ",");
    my_strcat_3(&data, my_itoa(df->emeralds));
    my_strcat_3(&data, add_shop(df));
    my_strcat_3(&data, add_buildings(df));
    return data;
}
