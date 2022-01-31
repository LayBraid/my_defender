/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "../../../include/game.h"

void setup_all_img(list_img_t *list)
{
    //float tmp[7] = {683, 875.5, 0, 0, 141, 434, 2};
    list->bg_open = setup_a_classic_img("resources/main.png", 0, 0);
    //list->play_button = setup_a_anim_img("resources/play.png", tmp);
}
