/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "events.h"

/*
 * Vérification si l'event actuel correspond à la fermeture de la window
 */

void close_event(window_t* window)
{
    if (window->event->type == sfEvtClosed)
        sfRenderWindow_close(window->window);
}
