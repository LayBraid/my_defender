/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "data.h"
#include "game.h"

void add_tank_1(dfd *df)
{
    node_button *tmp = df->list_buttons;
    sfIntRect rect;
    df->shop->tank_1 = TRUE;

    while (tmp->id != 13)
        tmp = tmp->next;
    rect = sfSprite_getTextureRect(tmp->button->button->sprite);
    rect.top = 6073;
    sfSprite_setTextureRect(tmp->button->button->sprite, rect);
}

void add_tank_2(dfd *df)
{
    node_button *tmp = df->list_buttons;
    sfIntRect rect;
    df->shop->tank_2 = TRUE;

    while (tmp->id != 14)
        tmp = tmp->next;
    rect = sfSprite_getTextureRect(tmp->button->button->sprite);
    rect.top = 5513;
    sfSprite_setTextureRect(tmp->button->button->sprite, rect);
}