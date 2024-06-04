/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-2-1-SBMLparser-edgar1.maurel
** File description:
** destroy_tag.c
*/

#include "sbml.h"

void destroy_tag(tag_t *tag)
{
    int i = 0;

    free(tag->name);
    if (tag->content != NULL)
        free(tag->content);
    if (tag->attributes != NULL)
    {
        for (i = 0; tag->attributes[i] != NULL; i++)
        {
            destroy_attribute(tag->attributes[i]);
        }
    }
    free(tag->attributes);
    free(tag);
}