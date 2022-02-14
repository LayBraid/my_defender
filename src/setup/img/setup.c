/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "game.h"
#include "setup.h"
#include "my.h"

int get_max_img(node_img **node)
{
    int count = 0;
    node_img *tmp = (*node);

    tmp = tmp->next;
    while (tmp->id != 0) {
        if (tmp->id > count)
            count = tmp->id;
        tmp = tmp->next;
    }
    return count;
}

void add_to_list_img(node_img **node, anim_img *img)
{
    node_img *new = malloc(sizeof(node_img));
    node_img *tmp = (*node);

    while (tmp->next->id != 0)
        tmp = tmp->next;
    new->id = get_max_img(node) + 1;
    new->img = img;
    new->next = (*node);
    tmp->next = new;
}

void setup_first_img(node_img **node, anim_img *img)
{
    (*node)->id = 0;
    (*node)->img = img;
    (*node)->next = (*node);
}
