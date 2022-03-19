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

void hit_1(my_defender_pointer *df)
{
    dfd *d = (dfd *) df;
    d->hit = sfMusic_createFromFile("resources/click.ogg");
}

void hit_2(my_defender_pointer *df)
{
    dfd *d = (dfd *) df;
    d->hit = sfMusic_createFromFile("resources/click.ogg");
}

void click_1(my_defender_pointer *df)
{
    dfd *d = (dfd *) df;
    d->click = sfMusic_createFromFile("resources/click.ogg");
}

//TODO Changer le son

void click_2(my_defender_pointer *df)
{
    dfd *d = (dfd *) df;
    d->click = sfMusic_createFromFile("resources/click.ogg");
}