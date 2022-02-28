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
    int **array = malloc(sizeof(int *) * 11);
    for (int i = 0; i < 11; i++)
        array[i] = malloc(sizeof(int) * 16);
    for (int i = 0; i < 11; i++)
        for (int j = 0; j < 16; j++)
            array[i][j] = 0;
    for (int j = 0; j < 16; j++) {
        array[0][j] = 3;
        array[10][j] = 3;
    }
    for (int i = 0; i < 11; i++) {
        array[i][0] = 3;
        array[i][15] = 3;
    }
    array[5][0] = 4;
    array[5][15] = 5;
    return array;
}

int *get_positions_box(int id_box){
    int *pos = malloc(sizeof(int) * 2);

    pos[0] = (id_box - 21) / 14;
    pos[1] = (id_box - 21) % 14;
    return pos;
}

void add_towers(dfd *df, int **array)
{
    int *positions;
    node_earthly_build *tmp = df->earthly_build;

    while (tmp->id < tmp->next->id) {
        positions = get_positions_box(tmp->build->id_box);
        array[positions[0] + 1][positions[1] + 1] = 2;
        tmp = tmp->next;
    }
    positions = get_positions_box(tmp->build->id_box);
    array[positions[0] + 1][positions[1] + 1] = 2;
}

void convert_board(dfd *df)
{
    int **tmp = init_my_array();
    if (df->earthly_build->build != NULL)
        add_towers(df, tmp);
    printf("\n");
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 16; j++) {
            printf("%d", tmp[i][j]);
        }
        printf("\n");
    }
    printf("result: %d", exit_finder(tmp));
}
