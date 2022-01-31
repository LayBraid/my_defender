/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "../../../include/struct.h"
#include "../../../include/setup.h"

void setup_buttons(list_buttons_t *list)
{
    float tmp[9] = {683, 875.5, 0, 0, 141, 434, 2, 713, 915.5};
    list->play = setup_a_hovered_button("resources/play.png", tmp);
}
