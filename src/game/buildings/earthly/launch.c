/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include <printf.h>
#include "buildings.h"
#include "utils.h"

void checking_range(dfd *df, int id_build)
{
    node_enemy *tmp = df->enemies;

    while (tmp->id < tmp->next->id) {
        if (in_range(id_build, tmp->id)) {
            printf("\t\tattak\n");
            return;
        }
        tmp = tmp->next;
    }
    if (in_range(id_build, tmp->id)) {
        printf("\t\tattak\n");
        return;
    }
}

void launch_towers(dfd *df, int type)
{
    node_earthly_build *tmp = df->earthly_build;

    while (tmp->id < tmp->next->id) {
        if (tmp->build->type == type)
            checking_range(df, tmp->id);
        tmp = tmp->next;
    }
    if (tmp->build->type == type)
        checking_range(df, tmp->id);
}
