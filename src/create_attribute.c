/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-2-1-SBMLparser-edgar1.maurel
** File description:
** create_attribute.c
*/

#include "sbml.h"

attribute_t *create_attribute(char *name, char *value)
{
    attribute_t *attribute = malloc(sizeof(attribute_t));

    attribute->name = name;
    attribute->value = value;
    return (attribute);
}
