/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-2-1-SBMLparser-edgar1.maurel
** File description:
** get_words_until.c
*/

#include "sbml.h"

char **get_words_until(char *str, char c)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **tab = malloc(sizeof(char *) * (my_strlen(str) + 1));
    int len = my_strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] == c) {
            break;
        }
        tab[j] = malloc(sizeof(char) * (my_strlen(str) + 1));
        for (k = 0; is_alpha_numerical(str[i]) == 1; i++, k++) {
            tab[j][k] = str[i];
        }
        tab[j][k] = '\0';
        if (k != 0)
            j++;
    }
    tab[j] = NULL;
    return (tab);
}