/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "data.h"
#include "my.h"

char *add_buildings(dfd *df)
{
    node_earthly_build *tmp = df->earthly_build;
    char *data = "";

    if (df->earthly_build == NULL)
        return data;
    while (tmp->id < tmp->next->id) {
        my_strcat_3(&data, "[");
        my_strcat_3(&data, my_itoa(tmp->build->id_build));
        my_strcat_3(&data, ",");
        my_strcat_3(&data, my_itoa(tmp->build->id_box));
        my_strcat_3(&data, "]");
        tmp = tmp->next;
    }
    my_strcat_3(&data, "[");
    my_strcat_3(&data, my_itoa(tmp->build->id_build));
    my_strcat_3(&data, ",");
    my_strcat_3(&data, my_itoa(tmp->build->id_box));
    my_strcat_3(&data, "]");
    return data;
}
