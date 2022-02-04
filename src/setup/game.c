/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "setup.h"
#include "my.h"

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
    my_defender->list_img = malloc(sizeof(list_img_t));
    my_defender->list_buttons = malloc(sizeof(node_button));
    setup_all_img(my_defender->list_img);
    my_defender->list_buttons = setup_buttons();
    my_defender->step = 0;
}
