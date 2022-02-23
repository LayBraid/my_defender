/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "roads.h"

void add_movement(dfd *df, int type)
{
    add_to_list_movement(&df->movement, type);
}

int get_delete_last(dfd *df)
{
    int max = get_max_movement(&df->movement);
    node_movement *tmp = df->movement;

    while (tmp->next->id != max)
        tmp = tmp->next;
    tmp->next = NULL;
    return max;
}
