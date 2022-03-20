/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "display.h"
#include "buildings.h"

void display_buildings(dfd *df)
{
    if (numbers_earthly(df) != -1) {
        display_earthly_building(df);
    }
}
