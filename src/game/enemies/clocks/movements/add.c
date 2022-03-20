/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include <printf.h>
#include "enemies.h"
#include "my.h"

void add_movement_enemy(dfd *df, node_enemy *enemy, sfVector2f vector,
const int *info)
{
    node_movement_clock *new = malloc(sizeof(node_movement_clock));
    node_anim_enemy_t *tmp = df->enemies_clocks;
    node_movement_clock *update;

    while(tmp->id != enemy->id)
        tmp = tmp->next;
    new->sprite = enemy->enemy->img->sprite;
    new->position = vector;
    new->id = info[1];
    new->type = info[0];
    new->next = NULL;
    update = tmp->movement;

    if (tmp->movement == NULL) {
        tmp->movement = new;
        return;
    }
    while (update->next != NULL)
        update = update->next;
    update->next = new;
}
