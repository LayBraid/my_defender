/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"
#include "my.h"
#include "setup.h"
#include "game.h"

void spawn_blue_enemy(dfd *df)
{
    enemy_t *tmp= malloc(sizeof(enemy_t));
    cf info[8] = {-83, 387, 1363, 2221, 110, 110, 0, MAINA};
    tmp->img = setup_a_anim_img(df, info);
    tmp->type = BOOST;
    tmp->life = 30;
    tmp->id_box = 147;
    df->spawn_round++;
    if (df->enemies == NULL) {
        setup_first_clock_ene(&df->enemies_clocks);
        setup_first_enemy(&df->enemies, tmp);
    } else {
        add_to_list_clock_ene(&df->enemies_clocks);
        add_to_list_enemy(&df->enemies, tmp);
    }
}

void spawn_yellow_enemy(dfd *df)
{
    enemy_t *tmp= malloc(sizeof(enemy_t));
    cf info[8] = {-83, 387, 1363, 2441, 110, 110, 0, MAINA};
    tmp->img = setup_a_anim_img(df, info);
    tmp->type = BOOST;
    tmp->life = 40;
    tmp->id_box = 147;
    df->spawn_round++;
    if (df->enemies == NULL) {
        setup_first_clock_ene(&df->enemies_clocks);
        setup_first_enemy(&df->enemies, tmp);
    } else {
        add_to_list_clock_ene(&df->enemies_clocks);
        add_to_list_enemy(&df->enemies, tmp);
    }
}
