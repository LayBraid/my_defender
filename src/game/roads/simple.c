/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "roads.h"
#include "game.h"

const int FIRST[29] = {147, 77, 78, 79, 65, 51, 37, 38, 39, 25, 26, 27, 41, 55,
69, 83,82, 96, 110, 111, 112, 113, 114, 100, 86, 87, 88, 89, 90};
const int MOVES[29] = {RIGHT, RIGHT, RIGHT, UP, UP, UP, RIGHT, RIGHT, UP, RIGHT, RIGHT, DOWN,
DOWN, DOWN, DOWN, LEFT, DOWN, DOWN, RIGHT, RIGHT, RIGHT, RIGHT, UP, UP, RIGHT,
RIGHT, RIGHT, RIGHT, RIGHT};

int get_next_move_hard(dfd* df, int id)
{
    if (id == 148)
        loose_game(df);
    for (int i = 0; i < 29; i++)
        if (FIRST[i] == id)
            return MOVES[i];
    return -1;
}
