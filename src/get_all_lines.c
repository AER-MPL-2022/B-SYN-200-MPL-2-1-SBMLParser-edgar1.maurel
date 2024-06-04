/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-2-1-SBMLparser-edgar1.maurel
** File description:
** get_all_lines.c
*/

#include "sbml.h"

char **get_all_lines(char *file)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **lines = malloc(sizeof(char *) * (my_strlen(file) + 1));

    for (i = 0; file[i] != '\0'; i++) {
        lines[j] = malloc(sizeof(char) * (my_strlen(file) + 1));
        for (k = 0; file[i] != '\n' && file[i] != '\0'; i++, k++) {
            lines[j][k] = file[i];
        }
        lines[j][k] = '\0';
        j++;
    }
    lines[j] = NULL;
    return (lines);
}
