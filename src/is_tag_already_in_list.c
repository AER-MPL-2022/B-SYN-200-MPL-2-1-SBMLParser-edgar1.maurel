/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-2-1-SBMLparser-edgar1.maurel
** File description:
** is_tag_already_in_list.c
*/

#include "sbml.h"

int is_tag_already_in_list(tag_t **tags, tag_t *tag, int len)
{
    for (int i = 0; i < len; i++) {
        if (my_strcmp(tags[i]->name, tag->name) == 0) {
            return (1);
        }
    }
    return (0);
}