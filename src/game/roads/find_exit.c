/*
** EPITECH PROJECT, 2022
** my_df
** File description:
** Find a exit in the map 
*/

#include <printf.h>
#include "roads.h"

int exit_finder(int ** map)
{
    int index = 0;
    int i = 0;
    for (i =0 ; map[index][i]; i++) {
            if (map[index][i] == 2 || map[index][i] == 3 || map[index][i] == 1 && map[index - 1][i] == 0) {
                index = index -1;
            } else {
                index++;
            }
            if (map[index][i -1] != 0 && map[index][i +1] != 0 && map[index+ 1 ][i] != 0 && map[index - 1 ][i -1] != 0 && map[index][i +1]!= 0) {
                return 0;
            }
            if (map[index][i] == 4) {
                //return 0;
                return 1;
            }
    }
}

int check_road(dfd *df, int **map)
{
    df->x = 0;
    df->y = 0;

    while (map[df->y][df->x] != 5) {
        if (map[df->y][df->x + 1] == 0 || map[df->y][df->x + 1] == 5) {
            df->x++;
            add_movement(df, RIGHT);
            continue;
        }
        if (map[df->y][df->x + 1] == 3) {
            if (df->y < 5) {
                df->y++;
                add_movement(df, DOWN);
                continue;
            }
            if (df->y > 5) {
                df->y--;
                add_movement(df, UP);
                continue;
            }
        }
        if (map[df->y + 1][df->x] == 0 || map[df->y + 1][df->x] == 5) {
            df->y++;
            add_movement(df, DOWN);
            continue;
        }
    }
    return 1;
}
