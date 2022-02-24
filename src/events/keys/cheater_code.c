/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "events.h"
#include "enemies.h"

void my_key_cheat_code(dfd *df)
{
    if (sfKeyboard_isKeyPressed(sfKeyE))
        spawn_enemy(df);
    if (sfKeyboard_isKeyPressed(sfKeyA))
        move_enemy_right(df, 0);
}
