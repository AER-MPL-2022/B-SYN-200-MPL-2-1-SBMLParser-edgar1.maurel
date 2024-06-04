/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-2-1-SBMLparser-edgar1.maurel
** File description:
** sbml.h
*/

#pragma once

#include <stdlib.h>
#include <stdio.h>


typedef struct {
    char *name;
    char *value;
} attribute_t;

typedef struct {
    char *name;
    attribute_t **attributes;
    int nb_attributes;
    char *content;
} tag_t;


char **word_sort(char **words, int len);
int is_alpha_numerical(char c);
char **my_str_to_word_array(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_strlen(char const *str);
char *open_file(char *filepath);
char **get_words_until(char *str, char c);
attribute_t *create_attribute(char *name, char *value);
void destroy_attribute(attribute_t *attribute);
tag_t *create_tag(char *line);
void destroy_tag(tag_t *tag);
char **get_all_lines(char *file);
char *copy_str(char *str);
void print_tag(tag_t *tag);
tag_t **sort_tags_from_name(tag_t **tags);
int is_tag_already_in_list(tag_t **tags, tag_t *tag, int len);
void no_option(char *file);