/*
** EPITECH PROJECT, 2021
** BLANK_PROJECT_C
** File description:
** No file there , just an epitech header example
*/

#include "game.h"
#include "my.h"

/*
* Message d'help du jeu
*/

int help_message(void)
{
    write(1, "--- MyDefender [HELP] ---\n\n", 27);
    write(1, "./mydefender [path_texture] [fps] >> launch game\n\n", 50);
    write(1, "Click on '?' in main menu\nto get more help.\n", 44);
    write(1, "--- Thanks for playing ---\n", 27);
    return 1;
}

/*
* Fonction main
*
* Vérification du nombre d'argument
* Vérification du '-h'
*/

int main(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        return help_message();
    if (ac == 1)
        game_launch("none", -1);
    if (ac == 2) {
        if (my_str_isnumber(av[1]))
            game_launch("none", my_atoi(av[1]));
        else
            game_launch(av[1], -1);
    }
    if (ac == 3)
        game_launch(av[1], my_atoi(av[2]));
    return (1);
}
