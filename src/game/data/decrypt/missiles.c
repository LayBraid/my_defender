/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "data.h"
#include "game.h"

void add_missile_1(dfd *df)
{
    node_button *tmp = df->list_buttons;
    sfIntRect rect;
    df->shop->missile_1 = TRUE;

    while (tmp->id != 16)
        tmp = tmp->next;
    rect = sfSprite_getTextureRect(tmp->button->button->sprite);
    rect.top = 5653;
    sfSprite_setTextureRect(tmp->button->button->sprite, rect);
}

void add_missile_2(dfd *df)
{
    node_button *tmp = df->list_buttons;
    sfIntRect rect;
    df->shop->missile_2 = TRUE;

    while (tmp->id != 17)
        tmp = tmp->next;
    rect = sfSprite_getTextureRect(tmp->button->button->sprite);
    rect.top = 5793;
    sfSprite_setTextureRect(tmp->button->button->sprite, rect);
}

void add_missile_3(dfd *df)
{
    node_button *tmp = df->list_buttons;
    sfIntRect rect;
    df->shop->missile_3 = TRUE;

    while (tmp->id != 18)
        tmp = tmp->next;
    rect = sfSprite_getTextureRect(tmp->button->button->sprite);
    rect.top = 5933;
    sfSprite_setTextureRect(tmp->button->button->sprite, rect);
}

void add_missile_4(dfd *df)
{
    node_button *tmp = df->list_buttons;
    sfIntRect rect;
    df->shop->missile_4 = TRUE;

    while (tmp->id != 15)
        tmp = tmp->next;
    rect = sfSprite_getTextureRect(tmp->button->button->sprite);
    rect.top = 6073;
    sfSprite_setTextureRect(tmp->button->button->sprite, rect);
}
