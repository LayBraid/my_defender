/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "../../../include/steps.h"

/*
 * Première fonction appelée pour appeler seulement les fonctions
 * que l'on a besoin à tel moment du jeu
 */

void global_steps(my_defender_t *my_defender)
{
    if (my_defender->step == 0)
        exe_step_0(my_defender);
}
