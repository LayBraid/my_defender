/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

/*
* Ferme la window et met fin au process
*/

void quit_game(my_defender_t *defender)
{
    sfRenderWindow_close(defender->window->window);
}
