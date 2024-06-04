/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-2-1-SBMLparser-edgar1.maurel
** File description:
** print_tag.c
*/

#include "sbml.h"

void print_tag(tag_t *tag)
{
    if (tag->attributes == NULL)
        return;
    printf("%s\n", tag->name);
    char **attribute_names = malloc(sizeof(char *) * (tag->nb_attributes + 1));
    for (int i = 0; tag->attributes[i] != NULL; i++) {
        attribute_names[i] = copy_str(tag->attributes[i]->name);
    }
    word_sort(attribute_names, tag->nb_attributes);
    for (int i = 0; i < tag->nb_attributes; i++) {
        printf("--->%s\n", attribute_names[i]);
    }
}