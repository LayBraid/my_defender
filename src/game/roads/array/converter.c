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
        array[i] = malloc(sizeof(int) * 18);
    for (int i = 0; i < 11; i++)
        for (int j = 0; j < 18; j++)
            array[i][j] = 1;
    for (int j = 0; j < 18; j++) {
        array[0][j] = -1;
        array[10][j] = -1;
    }
    for (int i = 0; i < 11; i++) {
        array[i][0] = -1;
        array[i][1] = -1;
        array[i][16] = -1;
        array[i][17] = -1;
    }
    array[5][1] = -2;
    array[5][16] = 0;
    return array;
}

int *get_positions_box(int id_box)
{
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
        array[positions[0] + 1][positions[1] + 2] = -4;
        tmp = tmp->next;
    }
    positions = get_positions_box(tmp->build->id_box);
    array[positions[0] + 1][positions[1] + 2] = -4;
}

void add_enemies(dfd *df, int **array)
{
    int *positions;
    node_enemy *tmp = df->enemies;

    while (tmp->id < tmp->next->id) {
        positions = get_positions_box(tmp->enemy->id_box);
        array[positions[0] + 1][positions[1] + 2] = -5;
        tmp = tmp->next;
    }
    positions = get_positions_box(tmp->enemy->id_box);
    array[positions[0] + 1][positions[1] + 2] = -5;
}

int get_action_enemy(dfd *df, node_enemy *enemy)
{
    int **tmp = init_my_array();
    int action;

    if (df->earthly_build->build != NULL)
        add_towers(df, tmp);
    if (df->enemies != NULL)
        add_enemies(df, tmp);
    action = solver(df, tmp, enemy->enemy->id_box);
    return action;
}
