/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "roads.h"
#include "my.h"

void calc_up(solver_t *solver, int x, int y)
{
    if (x == 1 && y == 1)
        solver->solving = 1;
    if (solver->map[y][x - 1] == 1 && solver->solving == 0) {
        solver->map[y][x - 1] = solver->map[y][x] + solver->map[y][x - 1];
        calc_up(solver, x - 1, y);
    }
    if (solver->map[y - 1][x] == 1 && solver->solving == 0) {
        solver->map[y - 1][x] = solver->map[y][x] + solver->map[y - 1][x];
        calc_up(solver, x, y - 1);
    }
    if (solver->map[y + 1][x] == 1 && solver->solving == 0) {
        solver->map[y + 1][x] = solver->map[y][x] + solver->map[y + 1][x];
        calc_up(solver, x, y + 1);
    }
    if (solver->map[y][x + 1] == 1 && solver->solving == 0) {
        if (solver->map[y][x + 2] == 0)
            return;
        solver->map[y][x + 1] = solver->map[y][x] + solver->map[y][x + 1];
        calc_up(solver, x + 1, y);
    }
}

void solver(dfd *df)
{
    df->solver = malloc(sizeof(solver_t));
    df->solver->solving = 0;

    calc_up(df->solver, 5, 16);
}
