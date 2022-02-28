/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"
#include "game.h"

void select_normal_texture(dfd *df)
{
    df->texture = sfTexture_createFromFile("resources/normal.png", NULL);
    switch_step(df, OPEN);
}

void select_RU_UK_texture(dfd *df)
{
    df->texture = sfTexture_createFromFile("resources/russia_ukraine.png",
    NULL);
    switch_step(df, OPEN);
}
