/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "shop.h"
#include "game.h"

const int PRICE_5 = 3;
const int PRICE_6 = 5;

void buy_tank_1(dfd *df)
{
    node_button *tmp = df->list_buttons;
    sfIntRect rect;

    if (df->shop->tank_1 == TRUE)
        return;
    if (df->emeralds < PRICE_5)
        return;
    df->shop->tank_1 = TRUE;
    df->emeralds -= PRICE_5;
    while (tmp->id != 13)
        tmp = tmp->next;
    rect = sfSprite_getTextureRect(tmp->button->button->sprite);
    rect.top += 700;
    sfSprite_setTextureRect(tmp->button->button->sprite, rect);
}

void buy_tank_2(dfd *df)
{
    node_button *tmp = df->list_buttons;
    sfIntRect rect;

    if (df->shop->tank_2 == TRUE)
        return;
    if (df->shop->tank_1 == FALSE)
        return;
    if (df->emeralds < PRICE_6)
        return;
    df->shop->tank_2 = TRUE;
    df->emeralds -= PRICE_6;
    while (tmp->id != 14)
        tmp = tmp->next;
    rect = sfSprite_getTextureRect(tmp->button->button->sprite);
    rect.top += 700;
    sfSprite_setTextureRect(tmp->button->button->sprite, rect);
}
