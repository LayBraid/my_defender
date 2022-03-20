/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "music.h"

void music_player(void)
{
    sfMusic *calm = sfMusic_createFromFile("resources/calm.wav");
    sfMusic *royal = sfMusic_createFromFile("resources/royal.ogg");

    sfMusic_setVolume(calm , 50);
    sfMusic_play(calm);
    sfMusic_setLoop(calm, sfTrue);
}
