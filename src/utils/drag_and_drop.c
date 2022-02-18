/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "game.h"
#include "utils.h"

void update_position_img(dfd * df, sfVector2f mouse, int id)
{
    node_img *tmp = df->list_img;

    while (tmp->id != id)
        tmp = tmp->next;
    mouse.x += df->drag->x_correction;
    mouse.y += df->drag->y_correction;
    sfSprite_setPosition(tmp->img->sprite, mouse);
}

void draw_image(dfd *df, int id)
{
    node_img *tmp = df->list_img;

    while (tmp->id != id)
        tmp = tmp->next;
    sfRenderWindow_drawSprite(df->window->window, tmp->img->sprite, NULL);
}

void draw_my_drag(dfd *df)
{
    sfVector2i mu = sfMouse_getPositionRenderWindow(df->window->window);
    sfVector2f muf;
    muf.x = (float) mu.x;
    muf.y = (float) mu.y;
    update_position_img(df, muf, df->drag->id_building);
    draw_image(df, df->drag->id_building);
}
