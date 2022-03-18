/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "shop.h"
#include "game.h"

const int PRICE_1 = 0;

void buy_tower_1(dfd *df)
{
    node_button *tmp = df->list_buttons;
    sfIntRect rect;

    if (df->shop->tower_1 == TRUE)
        return;
    if (df->emeralds < PRICE_1)
        return;
    df->shop->tower_1 = TRUE;
    df->emeralds -= PRICE_1;
    while (tmp->id != 10)
        tmp = tmp->next;
    rect = sfSprite_getTextureRect(tmp->button->button->sprite);
    rect.top += 700;
    sfSprite_setTextureRect(tmp->button->button->sprite, rect);
}
