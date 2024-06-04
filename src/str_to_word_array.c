/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-2-1-SBMLparser-edgar1.maurel
** File description:
** requirement.c
*/

#include "sbml.h"

int is_alpha_numerical(char c)
{
    return ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') ||
        (c >= 'a' && c <= 'z')) || c == '"' || c == '\'';
}

char **my_str_to_word_array(char const *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int g = 0;
    char **tab = malloc(sizeof(char *) * (my_strlen(str) + 1));
    int len = my_strlen(str);

    for (i = 0; i < len; i++) {
        tab[j] = malloc(sizeof(char) * (my_strlen(str) + 1));
        for (k = 0;; i++, k++) {
            if (str[i] == '"' || str[i] == '\'') {
                g = !g;
            }
            if (is_alpha_numerical(str[i]) == 1 || g == 1) {
                tab[j][k] = str[i];
            } else {
                break;
            }
        }
        tab[j][k] = '\0';
        if (k != 0)
            j++;
    }
    tab[j] = NULL;
    return (tab);
}
