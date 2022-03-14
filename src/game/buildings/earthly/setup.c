/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "buildings.h"
#include "my.h"

int get_max_build(node_earthly_build **node)
{
    int count = 0;
    node_earthly_build *tmp = (*node);

    tmp = tmp->next;
    while (tmp->id != 0) {
        if (tmp->id > count)
            count = tmp->id;
        tmp = tmp->next;
    }
    return count;
}

void add_to_list_build(node_earthly_build **node, build_t *build)
{
    node_earthly_build *new = malloc(sizeof(node_earthly_build));
    node_earthly_build *tmp = (*node);

    while (tmp->next->id != 0)
        tmp = tmp->next;
    new->id = get_max_build(node) + 1;
    new->build = build;
    new->next = (*node);
    tmp->next = new;
}

void setup_first_build(node_earthly_build **node, build_t *build)
{
    (*node) = malloc(sizeof(node_earthly_build));
    (*node)->id = 0;
    (*node)->build = build;
    (*node)->next = (*node);
}
