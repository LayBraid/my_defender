/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

sfVector2f vector_if(sfVector2i vector)
{
    sfVector2f cast;

    cast.x = (float) vector.x;
    cast.y = (float) vector.y;
    return cast;
}