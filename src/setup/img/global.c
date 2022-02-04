/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "../../../include/game.h"

//TODO Passer les images classiques en liste chaînée comme les images animées

void setup_all_img(list_img_t *list)
{
    list->bg_open = setup_a_classic_img("resources/main.png", 0, 0);
}
