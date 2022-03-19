/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "shop.h"
#include "game.h"

const int PRICE_1 = 1;
const int PRICE_2 = 2;
const int PRICE_3 = 5;
const int PRICE_4 = 8;

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

void buy_tower_2(dfd *df)
{
    node_button *tmp = df->list_buttons;
    sfIntRect rect;

    if (df->shop->tower_2 == TRUE)
        return;
    if (df->emeralds < PRICE_2)
        return;
    df->shop->tower_2 = TRUE;
    df->emeralds -= PRICE_2;
    while (tmp->id != 11)
        tmp = tmp->next;
    rect = sfSprite_getTextureRect(tmp->button->button->sprite);
    rect.top += 700;
    sfSprite_setTextureRect(tmp->button->button->sprite, rect);
}

void buy_tower_3(dfd *df)
{
    node_button *tmp = df->list_buttons;
    sfIntRect rect;

    if (df->shop->tower_3 == TRUE)
        return;
    if (df->emeralds < PRICE_3)
        return;
    df->shop->tower_3 = TRUE;
    df->emeralds -= PRICE_3;
    while (tmp->id != 12)
        tmp = tmp->next;
    rect = sfSprite_getTextureRect(tmp->button->button->sprite);
    rect.top += 700;
    sfSprite_setTextureRect(tmp->button->button->sprite, rect);
}

void buy_tower_4(dfd *df)
{
    node_button *tmp = df->list_buttons;
    sfIntRect rect;

    if (df->shop->tower_4 == TRUE)
        return;
    if (df->emeralds < PRICE_4)
        return;
    df->shop->tower_4 = TRUE;
    df->emeralds -= PRICE_4;
    while (tmp->id != 9)
        tmp = tmp->next;
    rect = sfSprite_getTextureRect(tmp->button->button->sprite);
    rect.top += 700;
    sfSprite_setTextureRect(tmp->button->button->sprite, rect);
}
