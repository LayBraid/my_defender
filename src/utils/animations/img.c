/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

void anim_img_id(dfd *df, int id, int anim)
{
    sfIntRect rect;
    node_img *tmp = df->list_img;

    while (tmp->id != id)
        tmp = tmp->next;
    rect = sfSprite_getTextureRect(tmp->img->sprite);
    if (anim <= tmp->img->anim_max) {
        tmp->img->anim_pos = anim;
        rect.left = tmp->img->x_power_anim * anim;
        rect.left += tmp->img->init_rect_x;
        sfSprite_setTextureRect(tmp->img->sprite, rect);
    }
}
