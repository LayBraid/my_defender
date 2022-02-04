/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "setup.h"
#include "my.h"
#include "actions.h"

/*
 * Informations d'un bouton:
 * 0: Position de l'image en X une fois display
 * 1: Position de l'image en Y une fois display
 * 2: Position du rect de l'image en position X
 * 3: Position du rect de l'image en position Y
 * 4: Height du rect
 * 5: Width du rect
 * 6: Position max de l'animations
 * 7: Position X de la zone cliquable du bouton
 * 8: Position Y de la zone cliquable du bouton
 * 9: Taille max en X pour la zone cliquable
 * 10: Taille max en Y pour la zone cliquable
 * 11: Step où il va être display
*/

const float PLAY[12] = {683, (float) 875.5, 0, 0, 141, 434, 2, 713, (float) 915.5, 374, 61, 0};
const float QUIT[12] = {1715, 993, 0, 0, 100, 100, 2, 1750, 1026, 30, 34, 0};

/*
 * Ajouter un node à la suite de notre liste chaînée circulaire de bouton
 */

void add_to_list(node_button **node, hovered_button *button)
{
    int count = 0;
    node_button *new = malloc(sizeof(node_button));
    node_button *tmp = (*node);

    if ((*node)->id != (*node)->next->id) {
        (*node) = (*node)->next;
        while ((*node)->id != 0) {
            count = ((*node)->id > count) ? (*node)->id : count;
            (*node) = (*node)->next;
        }
    }
    new->id = count + 1;
    new->button = button;
    new->next = tmp;
    (*node)->next = new;
}

/*
 * Setup le premier node de la liste chaînée circulaire
 * Pourquoi circulaire ? simplement pour pouvoir tourner en boucle
 * dans la liste et pas faire des copies à chaque fois et utiliser de la
 * mémoire supplémentaire.
 */

void setup_first(node_button **node, hovered_button *button)
{
    (*node)->id = 0;
    (*node)->button = button;
    (*node)->next = (*node);
}

/*
 * Explication de la fonction:
 *
 * Pour le premier bouton il faut utiliser la fonction 'setup_first'
 * et pour les autres 'add_to_list'.
 *
 * Premier paramètre à passer à chaque fois c'est l'adresse de node '&node'
 * Ensuite le retour de la fonction 'setup_a_hovered_button'.
 *
 * Voir explication 'setup_a_hovered_button' pour les arguments
 */

node_button *setup_buttons(void)
{
    node_button *node = malloc(sizeof(node_button));
    setup_first(&node, setup_a_hovered_button("resources/play.png",
    PLAY, play_button));
    add_to_list(&node, setup_a_hovered_button("resources/quit.png",
    QUIT, quit_button));
    return node;
}
