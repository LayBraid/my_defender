/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "my.h"
#include "game.h"
#include "setup.h"

void init_shop(dfd *df)
{
    df->shop = malloc(sizeof(shop_t));
    df->shop->tower_1 = TRUE;
    df->shop->tower_2 = FALSE;
    df->shop->tower_3 = FALSE;
    df->shop->tower_4 = FALSE;
    df->shop->tank_1 = FALSE;
    df->shop->tank_2 = FALSE;
    df->shop->missile_1 = TRUE;
    df->shop->missile_2 = FALSE;
    df->shop->missile_3 = FALSE;
    df->shop->missile_4 = FALSE;
    df->shop->plane_1 = FALSE;
    df->shop->plane_2 = FALSE;
}
