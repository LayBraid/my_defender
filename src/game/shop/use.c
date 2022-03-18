
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
    return 0;
}

void buy_item(dfd *df)
{
    if (df->last_unclick == 10)
        buy_tower_1(df);
}
