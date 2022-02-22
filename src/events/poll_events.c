/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "events.h"
#include "game.h"

/*
 * Récupération des events de la window
 * Puis appelle à toutes les fonctions de vérifications des events
 */

void poll_events(my_defender_t *my_defender, sfRenderWindow *window)
{
    sfEvent event;
    while (sfRenderWindow_pollEvent(my_defender->window->window, &event)) {
        close_event(my_defender->window, event);
        mouse_pressed_event(my_defender, event);
        if (event.type == sfEvtMouseButtonReleased)
            check_on_un_click(my_defender);
    }
}
