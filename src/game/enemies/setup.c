/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"
#include "my.h"

int get_max_enemy(node_enemy **node)
{
    int count = 0;
    node_enemy *tmp = (*node);

    tmp = tmp->next;
    while (tmp->id != 0) {
        if (tmp->id > count)
            count = tmp->id;
        tmp = tmp->next;
    }
    return count;
}

void add_to_list_enemy(node_enemy **node, enemy_t *enemy)
{
    node_enemy *new = malloc(sizeof(node_enemy));
    node_enemy *tmp = (*node);

    while (tmp->next->id != 0)
        tmp = tmp->next;
    new->id = get_max_enemy(node) + 1;
    new->enemy = enemy;
    new->next = (*node);
    tmp->next = new;
}

void setup_first_enemy(node_enemy **node, enemy_t *enemy)
{
    (*node) = malloc(sizeof(node_enemy));
    (*node)->id = 0;
    (*node)->enemy = enemy;
    (*node)->next = (*node);
}
