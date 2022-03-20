/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "data.h"
#include "game.h"

void add_plane_1(dfd *df)
{
    node_button *tmp = df->list_buttons;
    sfIntRect rect;
    df->shop->plane_1 = TRUE;

    while (tmp->id != 19)
        tmp = tmp->next;
    rect = sfSprite_getTextureRect(tmp->button->button->sprite);
    rect.top = 5513;
    sfSprite_setTextureRect(tmp->button->button->sprite, rect);
}

void add_plane_2(dfd *df)
{
    node_button *tmp = df->list_buttons;
    sfIntRect rect;
    df->shop->plane_2 = TRUE;

    while (tmp->id != 20)
        tmp = tmp->next;
    rect = sfSprite_getTextureRect(tmp->button->button->sprite);
    rect.top = 5653;
    sfSprite_setTextureRect(tmp->button->button->sprite, rect);
}