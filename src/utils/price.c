/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"
#include "buildings.h"

const int PRICE_ALL[12] = {PRICE_INIT_TOWER_1, PRICE_INIT_TOWER_2,
PRICE_INIT_TOWER_3, PRICE_INIT_TOWER_4, PRICE_INIT_TANK_1, PRICE_INIT_TANK_2,
PRICE_INIT_MISSILE_1, PRICE_INIT_MISSILE_2, PRICE_INIT_MISSILE_3,
PRICE_INIT_MISSILE_4, PRICE_INIT_PLANE_1,  PRICE_INIT_PLANE_2};

int get_initial_price(int id_build)
{
    return PRICE_ALL[id_build];
}
