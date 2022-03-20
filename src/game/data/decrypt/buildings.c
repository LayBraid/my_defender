/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "data.h"
#include "utils.h"
#include "buildings.h"
#include "my.h"

void decrypt_buildings(dfd *df, char *data)
{
    df->tmp_create->id_build = my_atoi(extract_between_limits(data, 0,
    get_it_char(data, ',', 0)));
    df->tmp_create->id_box = my_atoi(extract_between_limits(data,
    get_it_char(data, ',', 0),get_it_char(data, ']', 0)));
    df->tmp_create->type = get_type_building(df->tmp_create->id_build);
    if (df->tmp_create->id_box < 10)
        return;
    add_building_no_money(df);
}
