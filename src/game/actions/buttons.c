/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "actions.h"
#include "utils.h"
#include "game.h"

/*
 * Fonction appelée quand on clique sur le bouton play au début du jeu
 */

void play_button(my_defender_pointer *defender)
{
    switch_step((my_defender_t *) defender, 1);
}

/*
 * Fonction appelée quand on clique sur le bouton quitter au début du jeu
 */

void quit_button(my_defender_pointer *defender)
{
    quit_game((my_defender_t *) defender);
}

/*
 * Redirection pour la fonction de drag and drop
 * je dois passer par une redirection pour que le cast de la structure
 * ne bug pas
 */

void d_and_d(my_defender_pointer *defender)
{
    drag_and_drop((my_defender_t *) defender);
}

/*
 * Quand on veut que ça ne fasse rien mais qu'on souhaite l'animation hover
 */

void nothing(my_defender_pointer *defender)
{
    (void) defender;
}
