/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#ifndef MY_DEFENDER_DATA_H
    #define MY_DEFENDER_DATA_H

    #include "struct.h"

char *save_game(dfd *df);

void save_data(dfd *df);

char *add_shop(dfd *df);

char *add_buildings(dfd *df);

void open_data(dfd *df);

void get_info_data(dfd *df, const char *data);

#endif
