/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "events.h"

/*
 * Récupération des events de la window
 * Puis appelle à toutes les fonctions de vérifications des events
 */

void poll_events(my_defender_t *my_defender)
{
    while (sfRenderWindow_pollEvent(my_defender->window->window,
        &my_defender->window->event)) {
        close_event(my_defender->window);
        mouse_pressed_event(my_defender);
        check_on_hover(my_defender);
    }
}
