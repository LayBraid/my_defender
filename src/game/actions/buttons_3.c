/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "actions.h"
#include "utils.h"
#include "game.h"

void settings_menu(my_defender_pointer *defender)
{
    switch_step((dfd *) defender, SETTINGS);
}
