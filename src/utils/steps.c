/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "../../include/utils.h"

/*
 * Fonction qui nous permet de switch de step
 *
 * Si changement de cursor activé, il faut retiré la partie en commentaire
 * dans la fonction
 */

void switch_step(my_defender_t *my_defender, int x)
{
    my_defender->step = x;
    /*if (x == 0 || x == 1 || x == 4 || x == 5 || x == 6)
        switch_cursor(my_defender, 64);
    if (x == 2 || x == 3)
        switch_cursor(my_defender, 64);*/
}
