/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"

void exe_one_hit(node_anim_enemy_t *node)
{
    node_movement_clock *tmp = node->hit;
    sfIntRect rect;

    if (tmp == NULL)
        return;
    rect = sfSprite_getTextureRect(node->hit->sprite);
    if (tmp->type == 1)
        rect.top = 2111;
    else
        rect.top = 2001;
    sfSprite_setTextureRect(node->hit->sprite, rect);
    node->hit = node->hit->next;
}
