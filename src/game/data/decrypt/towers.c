/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "data.h"
#include "game.h"

void add_tower_1(dfd *df)
{
    node_button *tmp = df->list_buttons;
    sfIntRect rect;
    df->shop->tower_1 = TRUE;

    while (tmp->id != 10)
        tmp = tmp->next;
    rect = sfSprite_getTextureRect(tmp->button->button->sprite);
    rect.top = 5513;
    sfSprite_setTextureRect(tmp->button->button->sprite, rect);
}

void add_tower_2(dfd *df)
{
    node_button *tmp = df->list_buttons;
    sfIntRect rect;
    df->shop->tower_2 = TRUE;

    while (tmp->id != 11)
        tmp = tmp->next;
    rect = sfSprite_getTextureRect(tmp->button->button->sprite);
    rect.top = 5653;
    sfSprite_setTextureRect(tmp->button->button->sprite, rect);
}

void add_tower_3(dfd *df)
{
    node_button *tmp = df->list_buttons;
    sfIntRect rect;
    df->shop->tower_3 = TRUE;

    while (tmp->id != 12)
        tmp = tmp->next;
    rect = sfSprite_getTextureRect(tmp->button->button->sprite);
    rect.top = 5793;
    sfSprite_setTextureRect(tmp->button->button->sprite, rect);
}

void add_tower_4(dfd *df)
{
    node_button *tmp = df->list_buttons;
    sfIntRect rect;
    df->shop->tower_4 = TRUE;

    while (tmp->id != 9)
        tmp = tmp->next;
    rect = sfSprite_getTextureRect(tmp->button->button->sprite);
    rect.top = 5933;
    sfSprite_setTextureRect(tmp->button->button->sprite, rect);
}
