/*
** EPITECH PROJECT, 2022
** B-MAT-100-NAN-1-1-103cipher-loup.thomas
** File description:
** encrypt_product
*/
#include "./include/my.h"

void calcul(GLOBAL_T *ALL, int y, int x)
{
    if (ALL->limit == 0) {
        printf(" %.0f", (ALL->msg_matrix[y][0] * ALL->key_matrix[0][x]));
    } else if (ALL->limit == 1) {
        printf(" %.0f", (ALL->msg_matrix[y][0] * ALL->key_matrix[0][x]) + (ALL->msg_matrix[y][1] * ALL->key_matrix[1][x]));
    } else if (ALL->limit == 2) {
        printf(" %.0f", (ALL->msg_matrix[y][0] * ALL->key_matrix[0][x]) + (ALL->msg_matrix[y][1] * ALL->key_matrix[1][x]) + (ALL->msg_matrix[y][2] * ALL->key_matrix[2][x]));
    } else if (ALL->limit == 3) {
        printf(" %.0f", (ALL->msg_matrix[y][0] * ALL->key_matrix[0][x]) + (ALL->msg_matrix[y][1] * ALL->key_matrix[1][x]) + (ALL->msg_matrix[y][2] * ALL->key_matrix[2][x]) + (ALL->msg_matrix[y][3] * ALL->key_matrix[3][x]));
    } else if (ALL->limit == 4) {
        printf(" %.0f", (ALL->msg_matrix[y][0] * ALL->key_matrix[0][x]) + (ALL->msg_matrix[y][1] * ALL->key_matrix[1][x]) + (ALL->msg_matrix[y][2] * ALL->key_matrix[2][x]) + (ALL->msg_matrix[y][3] * ALL->key_matrix[3][x]) + (ALL->msg_matrix[y][4] * ALL->key_matrix[4][x]));
    }
}

void encrypt_product(GLOBAL_T *ALL)
{
    printf("\nEncrypted message:\n");
    for (int i = 0; i < ALL->rows; i++) {
        if (ALL->limit == 0) {
            if (i == 0) {
                printf(" %.0f", (ALL->msg_matrix[0][0] * ALL->key_matrix[0][0]));
            } else {
                calcul(ALL, i, 0);
            }
        } else if (ALL->limit == 1) {
            if (i == 0) {
                printf("%.0f ", (ALL->msg_matrix[0][0] * ALL->key_matrix[0][0]) + (ALL->msg_matrix[0][1] * ALL->key_matrix[1][0]));
                printf("%.0f ", (ALL->msg_matrix[0][0] * ALL->key_matrix[0][1]) + (ALL->msg_matrix[0][1] * ALL->key_matrix[1][1]));
            } else {
                calcul(ALL, i, 0);
                calcul(ALL, i, 1);
            }
        } else if (ALL->limit == 2) {
            if (i == 0) {
                printf("%.0f ", (ALL->msg_matrix[0][0] * ALL->key_matrix[0][0]) + (ALL->msg_matrix[0][1] * ALL->key_matrix[1][0]) + (ALL->msg_matrix[0][2] * ALL->key_matrix[2][0]));
                printf("%.0f ", (ALL->msg_matrix[0][0] * ALL->key_matrix[0][1]) + (ALL->msg_matrix[0][1] * ALL->key_matrix[1][1]) + (ALL->msg_matrix[0][2] * ALL->key_matrix[2][1]));
                printf("%.0f", (ALL->msg_matrix[0][0] * ALL->key_matrix[0][2]) + (ALL->msg_matrix[0][1] * ALL->key_matrix[1][2]) + (ALL->msg_matrix[0][2] * ALL->key_matrix[2][2]));
            } else {
                calcul(ALL, i, 0);
                calcul(ALL, i, 1);
                calcul(ALL, i, 2);
            }
        } else if (ALL->limit == 3) {
            if (i == 0) {
                printf(" %.0f", (ALL->msg_matrix[0][0] * ALL->key_matrix[0][0]) + (ALL->msg_matrix[0][1] * ALL->key_matrix[1][0]) + (ALL->msg_matrix[0][2] * ALL->key_matrix[2][0]) + (ALL->msg_matrix[0][3] * ALL->key_matrix[3][0]));
                printf(" %.0f", (ALL->msg_matrix[0][0] * ALL->key_matrix[0][1]) + (ALL->msg_matrix[0][1] * ALL->key_matrix[1][1]) + (ALL->msg_matrix[0][2] * ALL->key_matrix[2][1]) + (ALL->msg_matrix[0][3] * ALL->key_matrix[3][1]));
                printf(" %.0f", (ALL->msg_matrix[0][0] * ALL->key_matrix[0][2]) + (ALL->msg_matrix[0][1] * ALL->key_matrix[1][2]) + (ALL->msg_matrix[0][2] * ALL->key_matrix[2][2]) + (ALL->msg_matrix[0][3] * ALL->key_matrix[3][2]));
                printf(" %.0f", (ALL->msg_matrix[0][0] * ALL->key_matrix[0][3]) + (ALL->msg_matrix[0][1] * ALL->key_matrix[1][3]) + (ALL->msg_matrix[0][2] * ALL->key_matrix[2][3]) + (ALL->msg_matrix[0][3] * ALL->key_matrix[3][3]));
            } else {
                calcul(ALL, i, 0);
                calcul(ALL, i, 1);
                calcul(ALL, i, 2);
                calcul(ALL, i, 3);
            }
        } else if (ALL->limit == 4) {
            if (i == 0) {
                printf(" %.0f", (ALL->msg_matrix[0][0] * ALL->key_matrix[0][0]) + (ALL->msg_matrix[0][1] * ALL->key_matrix[1][0]) + (ALL->msg_matrix[0][2] * ALL->key_matrix[2][0]) + (ALL->msg_matrix[0][3] * ALL->key_matrix[3][0]) + (ALL->msg_matrix[0][4] * ALL->key_matrix[4][0]));
                printf(" %.0f", (ALL->msg_matrix[0][0] * ALL->key_matrix[0][1]) + (ALL->msg_matrix[0][1] * ALL->key_matrix[1][1]) + (ALL->msg_matrix[0][2] * ALL->key_matrix[2][1]) + (ALL->msg_matrix[0][3] * ALL->key_matrix[3][1]) + (ALL->msg_matrix[0][4] * ALL->key_matrix[4][1]));
                printf(" %.0f", (ALL->msg_matrix[0][0] * ALL->key_matrix[0][2]) + (ALL->msg_matrix[0][1] * ALL->key_matrix[1][2]) + (ALL->msg_matrix[0][2] * ALL->key_matrix[2][2]) + (ALL->msg_matrix[0][3] * ALL->key_matrix[3][2]) + (ALL->msg_matrix[0][4] * ALL->key_matrix[4][2]));
                printf(" %.0f", (ALL->msg_matrix[0][0] * ALL->key_matrix[0][3]) + (ALL->msg_matrix[0][1] * ALL->key_matrix[1][3]) + (ALL->msg_matrix[0][2] * ALL->key_matrix[2][3]) + (ALL->msg_matrix[0][3] * ALL->key_matrix[3][3]) + (ALL->msg_matrix[0][4] * ALL->key_matrix[4][3]));
                printf(" %.0f", (ALL->msg_matrix[0][0] * ALL->key_matrix[0][4]) + (ALL->msg_matrix[0][1] * ALL->key_matrix[1][4]) + (ALL->msg_matrix[0][2] * ALL->key_matrix[2][4]) + (ALL->msg_matrix[0][3] * ALL->key_matrix[3][4]) + (ALL->msg_matrix[0][4] * ALL->key_matrix[4][4]));
            } else {
                calcul(ALL, i, 0);
                calcul(ALL, i, 1);
                calcul(ALL, i, 3);
                calcul(ALL, i, 4);
            }
        }
    }
    printf("\n");
}