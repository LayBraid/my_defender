/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "../../../include/struct.h"
#include "../../../include/setup.h"

anim_img *setup_a_anim_img(char *path, const float info[7])
{
    sfVector2f vector;
    sfIntRect rect;
    anim_img *img = malloc(sizeof(classic_img));

    img->sprite = sfSprite_create();
    img->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(img->sprite,img->texture, sfTrue);
    vector.x = info[0];
    vector.y = info[1];
    rect.left = (int) info[2];
    rect.top = (int) info[3];
    rect.height = (int) info[4];
    rect.width = (int) info[5];
    img->anim_pos = 0;
    img->anim_max = (int) info[6];
    img->x_power_anim = (int) info[4];
    img->y_power_anim = (int) info[5];
    sfSprite_setTextureRect(img->sprite, rect);
    sfSprite_setPosition(img->sprite, vector);
    return img;
}
