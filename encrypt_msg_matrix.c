/*
** EPITECH PROJECT, 2022
** B-MAT-100-NAN-1-1-103cipher-loup.thomas
** File description:
** encrypt_matrix
*/
#include "./include/my.h"

int case_nb(int msg_len, GLOBAL_T *ALL)
{
    int i = 0;

    for (i; msg_len > i * ALL->cols; i++);
    return (i * ALL->cols);
}

void init_msg_matrix(int msg_len, GLOBAL_T *ALL)
{
    ALL->rows = case_nb(msg_len, ALL) / ALL->cols;

    ALL->msg_matrix = malloc(sizeof(double *) * ALL->rows);
    for (int i = 0; i < ALL->rows; i++) {
        ALL->msg_matrix[i] = malloc(sizeof(double) * ALL->cols);
    }
}

void msg_matrix(char *msg, GLOBAL_T *ALL)
{
    int msg_len = 0;
    int y = 0;
    int x = 0;

    for (msg_len = 0; msg[msg_len] != '\0'; msg_len++);

    init_msg_matrix(msg_len, ALL);

    for (int i = 0; msg[i] != '\0'; i++) {
        if (y <= ALL->rows) {
            ALL->msg_matrix[y][x] = msg[i];
            x++;
            if (x > ALL->limit) {
                x = 0;
                y++;
            }
        }
    }
}