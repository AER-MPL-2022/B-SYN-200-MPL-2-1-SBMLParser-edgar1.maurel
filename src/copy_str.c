/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-2-1-SBMLparser-edgar1.maurel
** File description:
** copy_str.c
*/

#include "sbml.h"

char *copy_str(char *str)
{
    char *new_str = malloc(sizeof(char) * (my_strlen(str) + 1));
    int i = 0;

    for (i = 0; str[i] != '\0'; i++)
        new_str[i] = str[i];
    new_str[i] = '\0';
    return (new_str);
}