/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-2-1-SBMLparser-edgar1.maurel
** File description:
** main.c
*/

#include "sbml.h"


int main(int argc, char **argv)
{
    char *file = open_file(argv[1]);
    if (file == NULL)
        return 84;
    if (argc == 2)
        no_option(file);
    free(file);
    return 0;
}