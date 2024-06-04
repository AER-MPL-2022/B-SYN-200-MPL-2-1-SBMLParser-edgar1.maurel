/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-2-1-SBMLparser-edgar1.maurel
** File description:
** open_file.c
*/

#include "sbml.h"


char *open_file(char *filepath)
{
    FILE *file = fopen(filepath, "r");
    char *buffer = NULL;
    size_t size = 0;

    if (file == NULL) {
        printf("Error: File not found\n");
        return (NULL);
    }
    fseek(file, 0, SEEK_END);
    size = ftell(file);
    fseek(file, 0, SEEK_SET);
    buffer = malloc(size + 1);
    fread(buffer, size, 1, file);
    buffer[size] = '\0';
    fclose(file);
    return (buffer);
}