/*
** EPITECH PROJECT, 2022
** my_df
** File description:
** Find a exit in the map 
*/

void exit_finder(int ** map)
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
                return 64;
            }
            if (map[index][i] == 4) {
                return 0;
            }
    }
}