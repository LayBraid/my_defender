/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "data.h"
#include "my.h"
#include "utils.h"

void get_info_data(dfd *df, const char *data)
{
    if (data[0] == '0')
        df->texture = sfTexture_createFromFile("resources/normal.png", NULL);
    if (data[0] == '1')
        df->texture = sfTexture_createFromFile(
        "resources/russia_ukraine.png", NULL);
    if (data[0] == '2')
        df->texture = sfTexture_createFromFile(
        "resources/colorblind.png", NULL);
    df->wave = my_atoi(extract_between_limits(data, get_it_char(data, ',', 0),
    get_it_char(data, ',', 1)));
    df->coins = my_atoi(extract_between_limits(data, get_it_char(data, ',', 1),
    get_it_char(data, ',', 2)));
    df->emeralds = my_atoi(extract_between_limits(data,
   get_it_char(data, ',', 2),get_it_char(data, ']', 0)));
}
