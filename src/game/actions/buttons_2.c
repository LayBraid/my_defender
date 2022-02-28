/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "actions.h"
#include "utils.h"
#include "game.h"

void select_normal(my_defender_pointer *defender)
{
    select_normal_texture((dfd *) defender);
}

void select_RU_UK(my_defender_pointer *defender)
{
    select_RU_UK_texture((dfd *) defender);
}

void help_menu(my_defender_pointer *defender)
{
    switch_step((dfd *) defender, HELP);
}

void home_menu(my_defender_pointer *defender)
{
    switch_step((dfd *) defender, OPEN);
}
