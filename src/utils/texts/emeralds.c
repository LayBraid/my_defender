/*
** EPITECH PROJECT, 2022
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"
#include "my.h"

float get_rect_x_2(dfd *defender, int length)
{
    switch (length) {
        default:
        case 1:
        case 2:
            anim_img_id(defender, 11, 2);
            return 1327;
        case 3:
            anim_img_id(defender, 11, 1);
            return 1302;
        case 4:
            anim_img_id(defender, 11, 0);
            return 1284;
    }
}

void draw_emeralds(dfd *defender)
{
    sfFont* font = sfFont_createFromFile("resources/font.otf");
    sfColor color = sfColor_fromRGB(69, 204, 106);
    sfText* text = sfText_create();
    sfVector2f vector;
    char *str = my_itoa(defender->emeralds);
    if (!font)
        return;
    sfText_setString(text, str);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 21);
    sfText_setColor(text, color);
    vector.x = get_rect_x_2(defender, my_strlen(str));
    vector.y = (float) 980.5;
    sfText_setPosition(text, vector);
    sfRenderWindow_drawText(defender->window->window, text, NULL);
}
