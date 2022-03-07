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
    if (map[start.x + 1][start.y] == (map[start.x][start.y] - 1))
        return DOWN;
    if (map[start.x - 1][start.y] == (map[start.x][start.y] - 1))
        return UP;
    if (map[start.x][start.y + 1] == (map[start.x][start.y] - 1))
        return RIGHT;
    if (map[start.x][start.y - 1] == (map[start.x][start.y] - 1))
        return LEFT;
    return -1;
}

int checking_end(solver_t *solver, int x, int y, int type)
{
    if (solver->solving == 0)
        return 0;
    switch (type) {
        case 1:
            if (solver->map[y][x - 2] == 0)
                return 0;
            return 1;
        case 2:
            if (solver->map[y - 1][x + 1] == 0)
                return 0;
            return 1;
        case 3:
            if (solver->map[y + 1][x + 1] == 0)
                return 0;
            return 1;
        case 4:
            if (solver->map[y][x + 2] == 0)
                return 0;
            return 1;
    }
}

void calc_up(solver_t *solver, int x, int y, sfVector2i vector)
{
    if (x == (vector.y + 1) && y == (vector.x)) {
        solver->solving = 1;
    }
    if (solver->map[y][x - 1] == 1 && checking_end(solver, x, y, 1)) {
        solver->map[y][x - 1] = solver->map[y][x] + solver->map[y][x - 1];
        calc_up(solver, x - 1, y, vector);
    }
    if (solver->map[y - 1][x] == 1 && checking_end(solver, x, y, 2)) {
        solver->map[y - 1][x] = solver->map[y][x] + solver->map[y - 1][x];
        calc_up(solver, x, y - 1, vector);
    }
    if (solver->map[y + 1][x] == 1 && checking_end(solver, x, y, 3)) {
        solver->map[y + 1][x] = solver->map[y][x] + solver->map[y + 1][x];
        calc_up(solver, x, y + 1, vector);
    }
    if (solver->map[y][x + 1] == 1 && checking_end(solver, x, y, 4)) {
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

    calc_up(df->solver, 16, 5, vector);
    vector.y++;
    return get_next_move(df->solver->map, vector);
}
