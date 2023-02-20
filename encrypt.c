/*
** EPITECH PROJECT, 2022
** encrypt.c
** File description:
** encrypt
*/
#include "./include/my.h"

void key_matrix(char *key, GLOBAL_T *ALL)
{
    int letter_str = 0;
    int ascii;
    int j = 0;
    int i = 0;
    ALL->limit = 0;

    for (letter_str = 0; key[letter_str] != '\0'; letter_str++) {
    }

    if (letter_str == 1) {
        ALL->key_matrix = malloc(sizeof(double *) * 2);
        for (i = 0; i < 1; i++) {
            ALL->key_matrix[i] = malloc(sizeof(double) * 2);
        }
        ALL->limit = 0;
        ALL->cols = 1;
    }

    if (letter_str > 1 && letter_str < 5) {
        ALL->key_matrix = malloc(sizeof(double *) * 3);
        for (i = 0; i < 2; i++) {
            ALL->key_matrix[i] = malloc(sizeof(double) * 3);
        }
        ALL->limit = 1;
        ALL->cols = 2;
    }
    if (letter_str > 5 && letter_str < 10) {
        ALL->key_matrix = malloc(sizeof(double *) * 4);
        for (i = 0; i < 3; i++) {
            ALL->key_matrix[i] = malloc(sizeof(double) * 4);
        }
        ALL->limit = 2;
        ALL->cols = 3;
    }
    if (letter_str > 9 && letter_str < 17) {
        ALL->key_matrix = malloc(sizeof(double *) * 5);
        for (i = 0; i < 4; i++) {
            ALL->key_matrix[i] = malloc(sizeof(double) * 5);
        }
        ALL->limit = 3;
        ALL->cols = 4;
    }
    if (letter_str > 16 && letter_str < 26) {
        ALL->key_matrix = malloc(sizeof(double *) * 6);
        for (i = 0; i < 5; i++) {
            ALL->key_matrix[i] = malloc(sizeof(double) * 6);
        }
        ALL->limit = 4;
        ALL->cols = 5;
    }
    i = 0;
    letter_str = 0;
    while (key[letter_str] != '\0') {
        if (i <= ALL->limit) {
            ascii = key[letter_str];
            ALL->key_matrix[i][j] = ascii;
            letter_str++;
            j++;
            if (j >= ALL->limit + 1) {
                j = 0;
                i++;
            }
        }
    }
    printf("Key matrix:\n");
    for (int x = 0; x < ALL->limit + 1; x++) {
        if (letter_str == 1) {
            printf("%.0f\n",ALL->key_matrix[0][0]);
        } else if (letter_str > 1 && letter_str < 5) {
            printf("%.0f  %.0f\n",ALL->key_matrix[x][0], ALL->key_matrix[x][1]);
        } else if (letter_str > 3 && letter_str < 10) {
            printf("%.0f  %.0f  %.0f\n",ALL->key_matrix[x][0], ALL->key_matrix[x][1], ALL->key_matrix[x][2]);
        } else if (letter_str > 9 && letter_str < 17) {
            printf("%.0f  %.0f  %.0f  %.0f\n",ALL->key_matrix[x][0], ALL->key_matrix[x][1], ALL->key_matrix[x][2], ALL->key_matrix[x][3]);
        } else if (letter_str > 16 && letter_str < 26) {
            printf("%.0f  %.0f  %.0f  %.0f  %.0f\n",ALL->key_matrix[x][0], ALL->key_matrix[x][1], ALL->key_matrix[x][2], ALL->key_matrix[x][3], ALL->key_matrix[x][4]);
        }
    }
}

void encrypt(char **av, GLOBAL_T *ALL)
{
    key_matrix(av[2], ALL);
    msg_matrix(av[1], ALL);
    encrypt_product(ALL);
}
