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

void setup_game(dfd *df)
{
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
    df->texture = sfTexture_createFromFile("resources/global.png", NULL);
    df->coins = 0;
    df->emeralds = 0;
    df->wave = 0;
    df->list_img = setup_img(df);
    df->list_buttons = setup_buttons(df);
    df->step = OPEN;
}
