/*
** EPITECH PROJECT, 2020
** my_isspace
** File description:
** check spaces in minishell1
*/

#include "lib_str.h"

int my_isspace(char c)
{
    if (c == '\t' || c == '\n' || c == ' ')
        return (1);
    else
        return (0);
}
