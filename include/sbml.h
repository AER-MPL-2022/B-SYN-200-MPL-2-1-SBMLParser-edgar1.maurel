/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-2-1-SBMLparser-edgar1.maurel
** File description:
** sbml.h
*/

#pragma once

#include <stdlib.h>
#include <stdio.h>


char **word_sort(char **words, int len);
int is_alpha_numerical(char c);
char **my_str_to_word_array(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_strlen(char const *str);