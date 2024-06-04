/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-2-1-SBMLparser-edgar1.maurel
** File description:
** main.c
*/

#include "sbml.h"


int main(int argc, char **argv)
{
    char **words = my_str_to_word_array(argv[1]);
    char **sorted_words = word_sort(words, argc - 1);
    for (int i = 0; sorted_words[i] != NULL; i++) {
        printf("%s\n", sorted_words[i]);
    }
    return 0;
}