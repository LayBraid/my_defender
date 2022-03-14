/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "buildings.h"
#include "setup.h"
#include "utils.h"
#include "game.h"
#include "my.h"

/*
* Informations de l'image:
* 0: Position de l'image en X une fois display
* 1: Position de l'image en Y une fois display
* 2: Position du rect de l'image en position X
* 3: Position du rect de l'image en position Y
* 4: Height du rect
* 5: Width du rect
* 6: Position max de l'animations (Mettre à -1 pour annuler l'animations)
* 7: step pour display
*/

int numbers_earthly(dfd *df)
{
    if (df->earthly_build == NULL)
        return -1;
    else
        return get_max_build(&df->earthly_build);
}

void no_money(dfd *df)
{
    sfClock_restart(df->clock_popup->clock);
    switch_step(df, POP_MONEY);
}

void add_building(dfd *df)
{
    cf info[8] = {get_x_box(df, df->tmp_create->id_box),
    get_y_box(df, df->tmp_create->id_box),
    get_r_x_build(df->tmp_create->id_build),
    get_r_y_build(df->tmp_create->id_build),110,110,0,MAINA};
    build_t *build = malloc(sizeof(build_t));

    if (get_initial_price(df->tmp_create->id_build) > df->coins)
        return no_money(df);
    build->id_build = df->tmp_create->id_build;
    build->id_box = df->tmp_create->id_box;
    build->type = df->tmp_create->type;
    build->img = setup_a_anim_img(df, info);
    build->life = get_initial_life(build->id_build);
    build->level = 0;
    if (df->earthly_build == NULL)
        setup_first_build(&df->earthly_build, build);
    else
        add_to_list_build(&df->earthly_build, build);
}
