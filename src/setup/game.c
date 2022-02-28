/*
** EPITECH PROJECT, 2022
** df
** File description:
** No file there , just an epitech header example
*/

#include "setup.h"
#include "my.h"
#include "game.h"
#include "roads.h"

/*
 * Fonction appelée pour setup là game au début du programme
 *
 * Setup de la window
 * Setup des images
 * Setup des boutons
 * Définition du step au démarrage du jeu
 */

void next_setup(dfd *df)
{
    df->list_buttons = setup_buttons(df);
    df->step = SELECT;
    df->enemies = NULL;
    df->move_clock = NULL;
    df->laser_clock = NULL;
    df->coins = 0;
    df->emeralds = 0;
    df->wave = 0;
    df->fps = 130;
    df->list_img = setup_img(df);
}

void setup_game(dfd *df)
{
    df->clock_enemy = malloc(sizeof(clocks_t));
    df->clock_enemy->clock = sfClock_create();
    df->clock_lasers = malloc(sizeof(clocks_t));
    df->clock_lasers->clock = sfClock_create();
    df->tmp_create = malloc(sizeof(build_t));
    df->window = setup_window(df);
    df->list_img = malloc(sizeof(node_img));
    df->list_buttons = malloc(sizeof(node_button));
    df->earthly_build = malloc(sizeof(node_earthly_build));
    df->flying_build = malloc(sizeof(node_flying_build));
    df->movement = malloc(sizeof(node_movement));
    setup_first_movement(&df->movement, START);
    df->drag = malloc(sizeof(d_d_t));
    df->drag->id_building = -1;
    df->drag->state = NOTHING;
    df->drag->x_correction = 0;
    df->drag->y_correction = 0;
    df->last_unclick = -1;
    df->texture = sfTexture_createFromFile("resources/normal.png", NULL);
    next_setup(df);
}
