/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "roads.h"
#include "my.h"
#include "utils.h"

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

int end(solver_t *s, int x, int y, int type)
{
    if (s->solving == 1)
        return 0;
    if (type == 1 && s->map[y][x - 2] == 0)
        return 0;
    if (type == 2 && s->map[y - 1][x + 1] == 0)
        return 0;
    if (type == 3 && s->map[y + 1][x + 1] == 0)
        return 0;
    if (type == 4 && s->map[y][x + 2] == 0)
        return 0;
    return 1;
}

int check(solver_t *s, int x, int y, int ty)
{
    if (ty == 1 && (s->map[y][x - 1] == 1 ))
        return 1;
    if (ty == 2 && (s->map[y - 1][x] == 1 ))
        return 1;
    if (ty == 3 && (s->map[y + 1][x] == 1 ))
        return 1;
    if (ty == 4 && (s->map[y][x + 1] == 1 ))
        return 1;
    return 0;
}

void calc_up(solver_t *s, int x, int y, sfVector2i vector)
{
    if (x == (vector.y + 1) && y == (vector.x))
        s->solving = 1;
    if (check(s, x, y, 1) && end(s, x, y, 1)) {
        s->map[y][x - 1] = s->map[y][x] + s->map[y][x - 1];
        calc_up(s, x - 1, y, vector);
    }
    if (check(s, x, y, 2) && end(s, x, y, 2)) {
        s->map[y - 1][x] = s->map[y][x] + s->map[y - 1][x];
        calc_up(s, x, y - 1, vector);
    }
    if (check(s, x, y, 3) && end(s, x, y, 3)) {
        s->map[y + 1][x] = s->map[y][x] + s->map[y + 1][x];
        calc_up(s, x, y + 1, vector);
    }
    if (check(s, x, y, 4) && end(s, x, y, 4)) {
        s->map[y][x + 1] = s->map[y][x] + s->map[y][x + 1];
        calc_up(s, x + 1, y, vector);
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
