/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "setup.h"
#include "my.h"

/*
* Création d'une image animée
*
* Utilisée aussi pour les 'button'
*
* Arguments:
* - path de la resource
* - informations de l'image
*
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

void update(dfd *df, sfSprite *sprite, sfIntRect rect, sfVector2f vector)
{
    sfSprite_setTexture(sprite,df->texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    sfSprite_setPosition(sprite, vector);
}

anim_img *setup_a_anim_img(my_defender_t *df, const float info[8])
{
    sfVector2f vector;
    sfIntRect rect;
    anim_img *img = malloc(sizeof(anim_img));

    img->sprite = sfSprite_create();
    vector.x = info[0];
    vector.y = info[1];
    rect.left = (int) info[2];
    rect.top = (int) info[3];
    rect.height = (int) info[4];
    rect.width = (int) info[5];
    img->anim_pos = 0;
    img->anim_max = (int) info[6];
    img->x_power_anim = (int) info[5];
    img->y_power_anim = (int) info[4];
    img->step_display = (int) info[7];
    img->init_rect_x = (int) info[2];
    img->init_rect_y = (int) info[3];
    update(df, img->sprite, rect, vector);
    return img;
}
