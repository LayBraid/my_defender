/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "setup.h"
#include "my.h"
#include "actions.h"
#include "game.h"

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

const float PLAY[12] = {683, (float) 875.5, 0, 2045, 141, 434, 2, 713,(float) 915.5, 374, 61, OPEN};
const float QUIT[12] = {1715, 993, 0, 2186, 100, 100, 2, 1750, 1026, 30, 34,OPEN};
const float HELPER[12] = {5, 1005, 15, 1403, 80, 80, 2, 20, 1020, 50, 50, MAIN};
const float SETTING[12] = {65, 1005, 15, 1498, 80, 80, 2, 20, 1020, 50, 50,MAIN};

/*
 * Ajouter un node à la suite de notre liste chaînée circulaire de bouton
 */

int get_max(node_button **node)
{
    int count = 0;
    node_button *tmp = (*node);

    tmp = tmp->next;
    while (tmp->id != 0) {
        if (tmp->id > count)
            count = tmp->id;
        tmp = tmp->next;
    }
    return count;
}

void add_to_list(node_button **node, hovered_button *button)
{
    node_button *new = malloc(sizeof(node_button));
    node_button *tmp = (*node);

    while (tmp->next->id != 0)
        tmp = tmp->next;
    new->id = get_max(node) + 1;
    new->button = button;
    new->next = (*node);
    tmp->next = new;
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

//TODO Split les lignes pour réduire
//TODO Sinon texture global pour pas à avoir split les lignes

node_button *setup_buttons(void)
{
    node_button *node = malloc(sizeof(node_button));
    setup_first(&node, setup_a_hovered_button("resources/global.png", PLAY,
    play_button));
    add_to_list(&node, setup_a_hovered_button("resources/global.png", QUIT,
    quit_button));
    add_to_list(&node, setup_a_hovered_button("resources/global.png", HELPER,
    quit_button));
    add_to_list(&node, setup_a_hovered_button("resources/global.png", SETTING,
    quit_button));
    return node;
}
