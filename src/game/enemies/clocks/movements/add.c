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

    while(tmp->id != enemy->id)
        tmp = tmp->next;
    new->sprite = enemy->enemy->img->sprite;
    new->position = vector;
    new->id = info[1];
    new->next = NULL;

    printf("add %f %f\n", vector.x, vector.y);
    if (tmp->movement == NULL) {
        tmp->movement = new;
        return;
    }
    while (tmp->movement->next != NULL)
        tmp->movement = tmp->movement->next;
    tmp->movement->next = new;
    printf("ça: %f\n", df->enemies_clocks->movement->position.x);
}
