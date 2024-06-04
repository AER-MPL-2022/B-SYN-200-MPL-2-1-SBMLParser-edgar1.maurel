/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-2-1-SBMLparser-edgar1.maurel
** File description:
** create_tag.c
*/

#include "sbml.h"

tag_t *create_tag(char *line)
{
    tag_t *tag = malloc(sizeof(tag_t));
    char **words = my_str_to_word_array(line);
    int i = 0;
    int j = 0;
    tag->nb_attributes = 0;

    tag->name = words[0];
    if (words[1] == NULL || line[1] == '?') {
        tag->attributes = NULL;
        tag->content = NULL;
        return (tag);
    }
    tag->attributes = malloc(sizeof(attribute_t *) * (my_strlen(line) + 1));
    for (i = 1; words[i] != NULL; i++) {
        tag->attributes[j] = create_attribute(words[i], words[i + 1]);
        tag->nb_attributes++;
        i++;
        j++;
    }
    tag->attributes[i] = NULL;
    tag->content = NULL;
    return (tag);
}