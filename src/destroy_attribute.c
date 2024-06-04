/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-2-1-SBMLparser-edgar1.maurel
** File description:
** destroy_attribute.c
*/

#include "sbml.h"

void destroy_attribute(attribute_t *attribute)
{
    free(attribute->name);
    free(attribute->value);
    free(attribute);
}