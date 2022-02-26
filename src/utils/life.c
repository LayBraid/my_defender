/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"
#include "setup.h"
#include "buildings.h"

cf LIFE_ALL[12] = {LIFE_INIT_TOWER_1, LIFE_INIT_TOWER_2, LIFE_INIT_TOWER_3,
LIFE_INIT_TOWER_4, LIFE_INIT_TANK_1, LIFE_INIT_TANK_2, LIFE_INIT_MISSILE_1,
LIFE_INIT_MISSILE_2, LIFE_INIT_MISSILE_3, LIFE_INIT_MISSILE_4,
LIFE_INIT_PLANE_1,  LIFE_INIT_PLANE_2};

float get_initial_life(int id_build)
{
    return LIFE_ALL[id_build];
}
