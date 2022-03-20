/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "events.h"
#include "actions.h"

void my_key_cheat_code(dfd *df)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        pause_set((my_defender_pointer *) df);
}
