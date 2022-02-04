/*
** EPITECH PROJECT, 2022
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

//TODO Refaire cette fonction pour ce jeu

void draw_best_score(my_defender_t *my_defender)
{
    sfFont* font = sfFont_createFromFile("resources/font.ttf");
    sfColor color = sfColor_fromRGB(227, 249, 255);
    sfText* text = sfText_create();
    sfVector2f vector2F;
    char *str = my_itoa(my_defender->best_score);
    str = my_strcat(str, " m");
    if (!font)
        return;
    sfText_setString(text, str);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 31);
    sfText_setColor(text, color);
    vector2F.x = 1359;
    vector2F.y = 660;
    sfText_setPosition(text, vector2F);
    sfRenderWindow_drawText(my_defender->window->window, text, NULL);
}
