/*
**  claraxuxu, 2019
** my_str
** File description:
** dest = "hello" src = "world"
** my_strcat(dest, src) -> "helloworld" 
*/

#include "lib_str.h"

char *my_strcat(char *dest, const char *src)
{
    int dest_len = my_strlen(dest);
    int j = 0;

    for (j = 0; src[j] != '\0'; j++)
        dest[dest_len + j] = src[j];
    dest[dest_len + j] = '\0';
    return (dest);
}