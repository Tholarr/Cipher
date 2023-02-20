/*
** EPITECH PROJECT, 2022
** B-MAT-100-NAN-1-1-103cipher-loup.thomas
** File description:
** struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

    typedef struct GLOBAL {
        double **key_matrix;
        double **msg_matrix;
        int limit;
        int rows;
        int cols;
    } GLOBAL_T;

#endif /* !STRUCT_H_ */
