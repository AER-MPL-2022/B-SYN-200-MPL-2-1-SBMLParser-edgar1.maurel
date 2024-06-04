/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-2-1-SBMLparser-edgar1.maurel
** File description:
** requirement.c
*/

#include <stdlib.h>

int is_alpha_numerical(char c)
{
    return ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') ||
        (c >= 'a' && c <= 'z'));
}

char **my_str_to_word_array_synthesis(char const *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **tab = malloc(sizeof(char *) * (my_strlen(str) + 1));

    for (i = 0; str[i] != '\0'; i++) {
        tab[j] = malloc(sizeof(char) * (my_strlen(str) + 1));
        for (k = 0; is_alpha_numerical(str[i]) == 1; i++, k++)
            tab[j][k] = str[i];
        tab[j][k] = '\0';
        if (k != 0)
            j++;
    }
    tab[j] = NULL;
    return (tab);
}
