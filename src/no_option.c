/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-2-1-SBMLparser-edgar1.maurel
** File description:
** no_option.c
*/

#include "sbml.h"


void no_option(char *file)
{
    tag_t **tags;
    tag_t *temp_tag;
    int j = 0;
    char **lines = get_all_lines(file);
    int nb_lines = 0;
    for (int i = 0; lines[i] != NULL; i++)
        nb_lines++;
    tags = malloc(sizeof(tag_t *) * (nb_lines + 1));
    for (int i = 0; i < nb_lines; i++) {
        temp_tag = create_tag(lines[i]);
        if (!is_tag_already_in_list(tags, temp_tag, j)) {
            tags[j] = temp_tag;
            j++;
        }
    }
    tags[nb_lines] = NULL;
    sort_tags_from_name(tags);
    for (int i = 0; tags[i] != NULL; i++) {
        print_tag(tags[i]);
        destroy_tag(tags[i]);
    }
    free(tags);
}