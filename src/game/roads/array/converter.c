/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include <printf.h>
#include "roads.h"
#include "my.h"

int **init_my_array(void)
{
    int **array = malloc(sizeof(int *) * 9);
    for (int i = 0; i < 9; i++)
        array[i] = malloc(sizeof(int) * 14);
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 14; j++)
            array[i][j] = 0;
    return array;
}

void convert_board(dfd *df)
{
    int **tmp = init_my_array();
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 14; j++) {
            printf("%d", tmp[i][j]);
        }
        printf("\n");
    }
}
