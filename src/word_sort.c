/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-2-1-SBMLparser-edgar1.maurel
** File description:
** word_sort.c
*/

#include "sbml.h"


char **word_sort(char **words, int len)
{
    int i = 0;
    int j = 0;
    char *tmp = NULL;

    for (i = 0; words[i] != NULL || i < len; i++) {
        for (j = i + 1; words[j] != NULL; j++) {
            if (my_strcmp(words[i], words[j]) > 0) {
                tmp = words[i];
                words[i] = words[j];
                words[j] = tmp;
            }
        }
    }
    return (words);
}
