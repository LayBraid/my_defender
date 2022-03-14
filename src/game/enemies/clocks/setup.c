/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"
#include "my.h"

int get_max_clocks_ene(node_anim_enemy_t **node)
{
    int count = 0;
    node_anim_enemy_t *tmp = (*node);

    tmp = tmp->next;
    while (tmp->id != 0) {
        if (tmp->id > count)
            count = tmp->id;
        tmp = tmp->next;
    }
    return count;
}

void add_to_list_clock_ene(node_anim_enemy_t **node)
{
    node_anim_enemy_t *new = malloc(sizeof(node_anim_enemy_t));
    node_anim_enemy_t *tmp = (*node);

    while (tmp->next->id != 0)
        tmp = tmp->next;
    new->id = get_max_clocks_ene(node) + 1;
    new->clock = sfClock_create();
    new->next = (*node);
    tmp->next = new;
}

void setup_first_clock_ene(node_anim_enemy_t **node)
{
    (*node) = malloc(sizeof(node_anim_enemy_t));
    (*node)->id = 0;
    (*node)->clock = sfClock_create();
    (*node)->next = (*node);
}
