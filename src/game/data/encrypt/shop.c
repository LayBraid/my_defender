/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "data.h"
#include "my.h"
#include "game.h"

char *last_shop(dfd *df)
{
    char *data = "";

    if (df->shop->missile_3 == TRUE)
        my_strcat_3(&data, "1,");
    else
        my_strcat_3(&data, "0,");
    if (df->shop->missile_4 == TRUE)
        my_strcat_3(&data, "1,");
    else
        my_strcat_3(&data, "0,");
    if (df->shop->plane_1 == TRUE)
        my_strcat_3(&data, "1,");
    else
        my_strcat_3(&data, "0,");
    if (df->shop->plane_2 == TRUE)
        my_strcat_3(&data, "1]");
    else
        my_strcat_3(&data, "0]");
    return data;
}

char *next_shop(dfd *df)
{
    char *data = "";

    if (df->shop->tank_1 == TRUE)
        my_strcat_3(&data, "1,");
    else
        my_strcat_3(&data, "0,");
    if (df->shop->tank_2 == TRUE)
        my_strcat_3(&data, "1,");
    else
        my_strcat_3(&data, "0,");
    if (df->shop->missile_1 == TRUE)
        my_strcat_3(&data, "1,");
    else
        my_strcat_3(&data, "0,");
    if (df->shop->missile_2 == TRUE)
        my_strcat_3(&data, "1,");
    else
        my_strcat_3(&data, "0,");
    my_strcat_3(&data, last_shop(df));
    return data;
}

char *add_shop(dfd *df)
{
    char *data = "][";

    if (df->shop->tower_1 == TRUE)
        my_strcat_3(&data, "1,");
    else
        my_strcat_3(&data, "0,");
    if (df->shop->tower_2 == TRUE)
        my_strcat_3(&data, "1,");
    else
        my_strcat_3(&data, "0,");
    if (df->shop->tower_3 == TRUE)
        my_strcat_3(&data, "1,");
    else
        my_strcat_3(&data, "0,");
    if (df->shop->tower_4 == TRUE)
        my_strcat_3(&data, "1,");
    else
        my_strcat_3(&data, "0,");
    my_strcat_3(&data, next_shop(df));
    return data;
}