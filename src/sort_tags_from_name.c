/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-2-1-SBMLparser-edgar1.maurel
** File description:
** sort_tags_from_name.c
*/

#include "sbml.h"

tag_t **sort_tags_from_name(tag_t **tags)
{
    int i = 0;
    int j = 0;
    tag_t *tmp;

    while (tags[i] != NULL) {
        j = i + 1;
        while (tags[j] != NULL) {
            if (my_strcmp(tags[i]->name, tags[j]->name) > 0) {
                tmp = tags[i];
                tags[i] = tags[j];
                tags[j] = tmp;
            }
            j++;
        }
        i++;
    }
    return (tags);
}