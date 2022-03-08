/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"
#include "game.h"

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

int display(int step, int actual)
{
    if (step == actual)
        return 1;
    if ((step == MAINA || step == M_N_START) && (actual == MAIN ||
        actual == DRAG_1 || actual == DRAG_2 || actual == POP ||
        actual == M_N_START || actual == POP_MONEY))
        return 1;
    if (step == MAIN_POP && (actual == POP))
        return 1;
    if (step == SEL_OP && (actual == SELECT || actual == OPEN))
        return 1;
    if (step == SEL_HEL && (actual == SELECT || actual == HELP))
        return 1;
    return 0;
}
