/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include <printf.h>
#include "enemies.h"

void exe_one_move(node_anim_enemy_t *node)
{
    if (node->movement == NULL)
        return;
    sfSprite_setPosition(node->movement->sprite,
    node->movement->position);
    node->movement = node->movement->next;
}
