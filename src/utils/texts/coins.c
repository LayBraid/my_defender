/*
** EPITECH PROJECT, 2022
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"
#include "my.h"

float get_rect_x(dfd *defender, int length)
{
    switch (length) {
        default:
        case 1:
            anim_img_id(defender, 10, 2);
            return 1327;
        case 2:
        case 3:
            anim_img_id(defender, 10, 1);
            return 1302;
        case 4:
            anim_img_id(defender, 10, 0);
            return 1284;
    }
}

void draw_coins(dfd *defender)
{
    sfFont* font = sfFont_createFromFile("resources/font.otf");
    sfColor color = sfColor_fromRGB(204, 153, 51);
    sfText* text = sfText_create();
    sfVector2f vector;
    char *str = my_itoa(defender->coins);
    if (!font)
        return;
    sfText_setString(text, str);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 21);
    sfText_setColor(text, color);
    vector.x = get_rect_x(defender, my_strlen(str));
    vector.y = (float) 920.5;
    sfText_setPosition(text, vector);
    sfRenderWindow_drawText(defender->window->window, text, NULL);
}
