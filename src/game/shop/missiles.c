/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "shop.h"
#include "game.h"

const int PRICE_7 = 3;
const int PRICE_8 = 5;
const int PRICE_9 = 7;
const int PRICE_10 = 10;

void buy_missile_1(dfd *df)
{
    node_button *tmp = df->list_buttons;
    sfIntRect rect;

    if (df->shop->missile_1 == TRUE)
        return;
    if (df->emeralds < PRICE_7)
        return;
    df->shop->missile_1 = TRUE;
    df->emeralds -= PRICE_7;
    while (tmp->id != 16)
        tmp = tmp->next;
    rect = sfSprite_getTextureRect(tmp->button->button->sprite);
    rect.top += 700;
    sfSprite_setTextureRect(tmp->button->button->sprite, rect);
}

void buy_missile_2(dfd *df)
{
    node_button *tmp = df->list_buttons;
    sfIntRect rect;

    if (df->shop->missile_2 == TRUE)
        return;
    if (df->emeralds < PRICE_8)
        return;
    df->shop->missile_2 = TRUE;
    df->emeralds -= PRICE_8;
    while (tmp->id != 17)
        tmp = tmp->next;
    rect = sfSprite_getTextureRect(tmp->button->button->sprite);
    rect.top += 700;
    sfSprite_setTextureRect(tmp->button->button->sprite, rect);
}

void buy_missile_3(dfd *df)
{
    node_button *tmp = df->list_buttons;
    sfIntRect rect;

    if (df->shop->missile_3 == TRUE)
        return;
    if (df->emeralds < PRICE_9)
        return;
    df->shop->missile_3 = TRUE;
    df->emeralds -= PRICE_9;
    while (tmp->id != 18)
        tmp = tmp->next;
    rect = sfSprite_getTextureRect(tmp->button->button->sprite);
    rect.top += 700;
    sfSprite_setTextureRect(tmp->button->button->sprite, rect);
}

void buy_missile_4(dfd *df)
{
    node_button *tmp = df->list_buttons;
    sfIntRect rect;

    if (df->shop->missile_4 == TRUE)
        return;
    if (df->emeralds < PRICE_10)
        return;
    df->shop->missile_4 = TRUE;
    df->emeralds -= PRICE_10;
    while (tmp->id != 15)
        tmp = tmp->next;
    rect = sfSprite_getTextureRect(tmp->button->button->sprite);
    rect.top += 700;
    sfSprite_setTextureRect(tmp->button->button->sprite, rect);
}
