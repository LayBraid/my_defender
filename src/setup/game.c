/*
** EPITECH PROJECT, 2022
** my_defender
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

void setup_game(my_defender_t *my_defender)
{
    my_defender->window = setup_window(my_defender);
    my_defender->list_img = malloc(sizeof(node_img));
    my_defender->list_buttons = malloc(sizeof(node_button));
    my_defender->list_img = setup_img();
    my_defender->list_buttons = setup_buttons();
    my_defender->step = OPEN;
}
