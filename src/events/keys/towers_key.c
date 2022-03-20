/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "events.h"
#include "buildings.h"
#include "game.h"

void towers_key(dfd *df)
{
    if (df->earthly_build == NULL)
        return;
    if (sfKeyboard_isKeyPressed(sfKeyR))
        launch_towers(df, TOWER);
    if (sfKeyboard_isKeyPressed(sfKeyT))
        launch_towers(df, TANK);
    if (sfKeyboard_isKeyPressed(sfKeyY))
        launch_towers(df, MISSILE);
    if (sfKeyboard_isKeyPressed(sfKeyU))
        launch_towers(df, PLANE);
}
