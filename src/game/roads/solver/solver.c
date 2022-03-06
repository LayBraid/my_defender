/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include <printf.h>
#include "roads.h"
#include "my.h"

sfVector2i array_to_vector(const int *array)
{
    sfVector2i vector;

    vector.x = array[0];
    vector.y = array[1];
    return vector;
}

int get_next_move(int **map, sfVector2i start)
{

    if (map[start.y - 1][start.x] == (map[start.y][start.x] + 1))
        return DOWN;
    if (map[start.y + 1][start.x] == (map[start.y][start.x] + 1))
        return UP;
    if (map[start.y][start.x + 1] == (map[start.y][start.x] + 1))
        return RIGHT;
    if (map[start.y][start.x - 1] == (map[start.y][start.x] + 1))
        return LEFT;
    return -1;
}

void calc_up(solver_t *solver, int x, int y, sfVector2i vector)
{
    printf("exe:\n\tx: %d\ty: %d\n\tvector.y: %d\tvector.x: %d\n\tvector.y + 2: %d\tvector.x + 1: %d\n", x, y, vector.y, vector.x, vector.y + 2, vector.x + 1);
    if (x == (vector.y + 1) && y == (vector.x)) {
        solver->solving = 1;
    }
    if (solver->map[y][x - 1] == 1 && solver->solving == 0) {
        if (solver->map[y][x - 2] == 0)
            return;
        solver->map[y][x - 1] = solver->map[y][x] + solver->map[y][x - 1];
        calc_up(solver, x - 1, y, vector);
    }
    if (solver->map[y - 1][x] == 1 && solver->solving == 0) {
        if (solver->map[y - 1][x + 1] == 0)
            return;
        solver->map[y - 1][x] = solver->map[y][x] + solver->map[y - 1][x];
        calc_up(solver, x, y - 1, vector);
    }
    if (solver->map[y + 1][x] == 1 && solver->solving == 0) {
        if (solver->map[y + 1][x + 1] == 0)
            return;
        solver->map[y + 1][x] = solver->map[y][x] + solver->map[y + 1][x];
        calc_up(solver, x, y + 1, vector);
    }
    if (solver->map[y][x + 1] == 1 && solver->solving == 0) {
        if (solver->map[y][x + 2] == 0)
            return;
        solver->map[y][x + 1] = solver->map[y][x] + solver->map[y][x + 1];
        calc_up(solver, x + 1, y, vector);
    }
}

int solver(dfd *df, int **map, int id_box)
{
    sfVector2i vector = array_to_vector(get_positions_box(id_box));
    df->solver = malloc(sizeof(solver_t));
    df->solver->solving = 0;
    df->solver->map = map;
    vector.x++;
    vector.y++;
    df->solver->map[vector.x][vector.y + 1] = 1;

    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 18; j++) {
            printf("%5d", df->solver->map[i][j]);
        }
        printf("\n");
    }
    calc_up(df->solver, 16, 5, vector);
    printf("\n");
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 18; j++) {
            printf("%5d", df->solver->map[i][j]);
        }
        printf("\n");
    }
    return get_next_move(df->solver->map, vector);
}
