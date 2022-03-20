/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "data.h"

void decryp_next_shop(dfd *df, const char *data)
{
    if (data[18] == '1')
        add_missile_4(df);
    if (data[20] == '1')
        add_plane_1(df);
    if (data[22] == '1')
        add_plane_2(df);
}

void decrypt_shop(dfd *df, const char *data)
{
    if (data[0] == '1')
        add_tower_1(df);
    if (data[2] == '1')
        add_tower_2(df);
    if (data[4] == '1')
        add_tower_3(df);
    if (data[6] == '1')
        add_tower_4(df);
    if (data[8] == '1')
        add_tank_1(df);
    if (data[10] == '1')
        add_tank_2(df);
    if (data[12] == '1')
        add_missile_1(df);
    if (data[14] == '1')
        add_missile_2(df);
    if (data[16] == '1')
        add_missile_3(df);
    decryp_next_shop(df, data);
}
