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
    for(i = 0; map[index][i] != 2 || map[index][i] != 3 || map[index][i] != 1 && map[index + 1 ][i] != 2 
        && map[index + 1 ][i] != 3 && map[index + 1 ][i] != 1 ; index++) {
        if (map[index][i] == 0) {
            map[index][i] = 1;
        }
        if(index == maxDeLaMap) {
            index--;
        }
        for(i = 0; map[index][i] == '\0'; i = 0 ) {
            index = index + 1; 
        }
    }
}