/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "../../include/game.h"

/*
 * Fonction principale de notre jeu
 *
 * On commence par setup la game >> voir explications 'setup_game'
 *
 * Boucle de la fenêtre
 *  - Clear
 *  - Appel des events
 *  - Appel des fonctions par rapport au step du jeu
 *  - Display
 *
 * Destroy tout à la fin
 */

void game_launch(void)
{
    my_defender_t *my_defender = malloc(sizeof(my_defender_t));
    setup_game(my_defender);
    while (sfRenderWindow_isOpen(my_defender->window->window)) {
        sfRenderWindow_clear(my_defender->window->window, sfBlack);
        poll_events(my_defender);
        global_steps(my_defender);
        sfRenderWindow_display(my_defender->window->window);
    }
    sfRenderWindow_destroy(my_defender->window->window);
    //TODO rajouter un free global de toutes les variables
}
