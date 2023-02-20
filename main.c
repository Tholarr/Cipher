/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/
#include "./include/my.h"

int main(int ac, char **av)
{
    GLOBAL_T ALL;

    if (ac != 4) {
        return 84;
    }
    if (av[3][0] == '0') {
        encrypt(av, &ALL);
        free(ALL.key_matrix);
        free(ALL.msg_matrix);
    } else if (av[3][0] == '1') {
        return 39;
    } else {
        return 84;
    }
}
