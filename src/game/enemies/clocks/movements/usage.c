/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"

node_enemy *get_enemy(dfd *df, int id)
{
    node_enemy *tmp = df->enemies;

    while (tmp->id != id)
        tmp = tmp->next;
    return tmp;
}

void exe_one_move(dfd *df, node_anim_enemy_t *node)
{
    if (node->movement == NULL)
        return;
    sfSprite_setPosition(node->movement->sprite,
    node->movement->position);
    rotate_enemy(get_enemy(df, node->id), node->movement->type);
    node->movement = node->movement->next;
}
