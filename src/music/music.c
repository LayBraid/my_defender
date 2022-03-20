/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "clocks.h"
#include "music.h"
#include <stdio.h>
#include <struct.h>

void music_player (void)
{
    sfMusic *calm = sfMusic_createFromFile("resources/calm.ogg");
    sfMusic *royal = sfMusic_createFromFile("resources/royal.ogg");

    if("calm.wav" == -1)
        return 84;
    sfMusic_setVolume(calm , 50);
    sfMusic_play(calm);
}
