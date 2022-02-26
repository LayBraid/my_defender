/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "events.h"
#include "enemies.h"
#include "roads.h"

void my_key_cheat_code(dfd *df)
{
    if (sfKeyboard_isKeyPressed(sfKeyE))
        spawn_enemy(df);
    if (sfKeyboard_isKeyPressed(sfKeyD))
        move_enemy_right(df, 0);
    if (sfKeyboard_isKeyPressed(sfKeyQ))
        move_enemy_left(df, 0);
    if (sfKeyboard_isKeyPressed(sfKeyZ))
        move_enemy_up(df, 0);
    if (sfKeyboard_isKeyPressed(sfKeyS))
        move_enemy_down(df, 0);
    if (sfKeyboard_isKeyPressed(sfKeyP))
        convert_board(df);
}
