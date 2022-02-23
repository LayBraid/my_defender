/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "roads.h"
#include "my.h"

int **init_my_array(dfd *df)
{
    int **array = malloc(sizeof(int *) * 9);
    for (int i = 0; i < 9; i++)
        array[i] = malloc(sizeof(int) * 14);
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 14; j++)
            array[i][j] = 0;
    return array;
}
