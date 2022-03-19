/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"
#include "my.h"

void add_hit_enemy(dfd *df, node_enemy *enemy, const int *info)
{
    node_movement_clock *new = malloc(sizeof(node_movement_clock));
    node_anim_enemy_t *tmp = df->enemies_clocks;
    node_movement_clock *update;

    while(tmp->id != enemy->id)
        tmp = tmp->next;
    new->sprite = enemy->enemy->img->sprite;
    new->type = info[0];
    new->id = info[1];
    new->next = NULL;
    update = tmp->movement;

    if (tmp->hit == NULL) {
        tmp->hit = new;
        return;
    }
    while (update->next != NULL)
        update = update->next;
    update->next = new;
}
