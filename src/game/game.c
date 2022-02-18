/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "game.h"
#include "my.h"
#include "setup.h"
#include "events.h"
#include "steps.h"

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
    sfColor color = sfColor_fromRGB(60, 63, 78);
    while (sfRenderWindow_isOpen(my_defender->window->window)) {
        sfRenderWindow_clear(my_defender->window->window, color);
        global_steps(my_defender);
        poll_events(my_defender, my_defender->window->window);
        sfRenderWindow_display(my_defender->window->window);
    }
    sfRenderWindow_destroy(my_defender->window->window);
    //TODO rajouter un free global de toutes les variables
}
