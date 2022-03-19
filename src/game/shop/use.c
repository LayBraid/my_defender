
/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "shop.h"
#include "game.h"

int check_item_next(dfd *df)
{
    if (df->last_unclick == 15 && df->shop->missile_4 == FALSE)
        return 1;
    return 0;
}

int check_item(dfd *df)
{
    if (df->last_unclick == 10 && df->shop->tower_1 == FALSE)
        return 1;
    if (df->last_unclick == 11 && df->shop->tower_2 == FALSE)
        return 1;
    if (df->last_unclick == 12 && df->shop->tower_3 == FALSE)
        return 1;
    if (df->last_unclick == 9 && df->shop->tower_4 == FALSE)
        return 1;
    if (df->last_unclick == 13 && df->shop->tank_1 == FALSE)
        return 1;
    if (df->last_unclick == 14 && df->shop->tank_2 == FALSE)
        return 1;
    if (df->last_unclick == 16 && df->shop->missile_1 == FALSE)
        return 1;
    if (df->last_unclick == 17 && df->shop->missile_2 == FALSE)
        return 1;
    if (df->last_unclick == 18 && df->shop->missile_3 == FALSE)
        return 1;
    return check_item_next(df);
}

void buy_item_next(dfd *df)
{
    if (df->last_unclick == 15)
        return buy_missile_4(df);
}

void buy_item(dfd *df)
{
    if (df->last_unclick == 10)
        return buy_tower_1(df);
    if (df->last_unclick == 11)
        return buy_tower_2(df);
    if (df->last_unclick == 12)
        return buy_tower_3(df);
    if (df->last_unclick == 9)
        return buy_tower_4(df);
    if (df->last_unclick == 13)
        return buy_tank_1(df);
    if (df->last_unclick == 14)
        return buy_tank_2(df);
    if (df->last_unclick == 16)
        return buy_missile_1(df);
    if (df->last_unclick == 17)
        return buy_missile_2(df);
    if (df->last_unclick == 18)
        return buy_missile_3(df);
    buy_item_next(df);
}
