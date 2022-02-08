/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "game.h"
#include "setup.h"
#include "my.h"

/*
 * Informations de l'image:
 * 0: Position de l'image en X une fois display
 * 1: Position de l'image en Y une fois display
 * 2: Position du rect de l'image en position X
 * 3: Position du rect de l'image en position Y
 * 4: Height du rect
 * 5: Width du rect
 * 6: Position max de l'animations (Mettre à -1 pour annuler l'animations)
 * 7: step pour display
 */

//TODO Ajouter un id pour les clocks pour savoir sur quel clock mettre l'animation

const float TITLE[8] = {473, 386, 0, 0, 308, 854, 0, OPEN};
const float LINES[8] = {0, 0, 0, 308, 1080, 1800, 0, MAIN};

void add_to_list_img(node_img **node, anim_img *img)
{
    int count = 0;
    node_img *new = malloc(sizeof(node_img));
    node_img *tmp = (*node);

    if ((*node)->id != (*node)->next->id) {
        (*node) = (*node)->next;
        while ((*node)->id != 0) {
            count = ((*node)->id > count) ? (*node)->id : count;
            (*node) = (*node)->next;
        }
    }
    new->id = count + 1;
    new->img = img;
    new->next = tmp;
    (*node)->next = new;
}

void setup_first_img(node_img **node, anim_img *img)
{
    (*node)->id = 0;
    (*node)->img = img;
    (*node)->next = (*node);
}

node_img *setup_img(void)
{
    node_img *node = malloc(sizeof(node_img));

    setup_first_img(&node, setup_a_anim_img("resources/global.png", TITLE));
    add_to_list_img(&node, setup_a_anim_img("resources/global.png", LINES));
    return node;
}
