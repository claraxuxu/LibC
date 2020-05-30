/*
**  claraxuxu, 2019
** my_str
** File description:
** str1 = "hello" str2 = "hello" -> return 0
** if two strings are not the same -> return -1
*/

#include "lib_str.h"

int my_strcmp(char *str1, char *str2)
{
    for (; *str1 != '\0'; str1++, str2++) {
        if (*str1 != *str2) {
            if (*str1 > *str2)
                return (1);
            else if (*str1 < *str2)
                return (-1);
        }
    }
    if (*str1 == '\0' || *str2 == '\0') {
        if (*str1 > *str2)
            return (1);
        else if (*str1 < *str2)
            return (-1);
        return (0);
    }
}