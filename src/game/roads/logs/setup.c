/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "roads.h"
#include "my.h"

int get_max_movement(node_movement **node)
{
    int count = 0;
    node_movement *tmp = (*node);

    tmp = tmp->next;
    while (tmp->id != 0) {
        if (tmp->id > count)
            count = tmp->id;
        tmp = tmp->next;
    }
    return count;
}

void add_to_list_movement(node_movement **node, int movement)
{
    node_movement *new = malloc(sizeof(node_movement));
    node_movement *tmp = (*node);

    while (tmp->next->id != 0)
        tmp = tmp->next;
    new->id = get_max_movement(node) + 1;
    new->type = movement;
    new->next = (*node);
    tmp->next = new;
}

void setup_first_movement(node_movement **node, int movement)
{
    (*node)->id = 0;
    (*node)->type = movement;
    (*node)->next = (*node);
}
