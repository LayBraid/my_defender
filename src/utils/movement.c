/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"
#include "my.h"

int *simple_id(int type, int id)
{
    int *convert = malloc(sizeof(int) * 2);
    convert[0] = type;
    convert[1] = id;

    return convert;
}
