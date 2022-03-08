/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "setup.h"
#include "my.h"

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

void add_button(node_button **node, hovered_button *button)
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

void setup_first_button(node_button **node, hovered_button *button)
{
    (*node)->id = 0;
    (*node)->button = button;
    (*node)->next = (*node);
}
