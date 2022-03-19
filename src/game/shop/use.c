
/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "shop.h"
#include "game.h"

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
    return 0;
}

void buy_item(dfd *df)
{
    if (df->last_unclick == 10)
        buy_tower_1(df);
    if (df->last_unclick == 11)
        buy_tower_2(df);
    if (df->last_unclick == 12)
        buy_tower_3(df);
    if (df->last_unclick == 9)
        buy_tower_4(df);
}
