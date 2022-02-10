/*
** EPITECH PROJECT, 2022
** defender
** File description:
** No file there , just an epitech header example
*/

#include "setup.h"
#include "my.h"
#include "game.h"

/*
 * Fonction appelée pour setup là game au début du programme
 *
 * Setup de la window
 * Setup des images
 * Setup des boutons
 * Définition du step au démarrage du jeu
 */

void setup_game(my_defender_t *defender)
{
    defender->window = setup_window(defender);
    defender->list_img = malloc(sizeof(node_img));
    defender->list_buttons = malloc(sizeof(node_button));
    defender->texture = sfTexture_createFromFile("resources/global.png", NULL);
    defender->list_img = setup_img(defender);
    defender->list_buttons = setup_buttons(defender);
    defender->step = OPEN;
}
