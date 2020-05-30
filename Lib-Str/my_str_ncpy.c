/*
** claraxuxu, 2019
** my_strncpy
** File description:
** copy 'len' characters from line
*/

#include "lib_str.h"

char *my_strncpy(char *res, char *line, int len)
{
    int i = 0;

    if (line == NULL)
        res[0] = '\0';
    else {
        for (; i < len; i++)
            res[i] = line[i];
        res[i] = '\0';
    }
    return (res);
}

//second way
// char *my_strncpy(char *dest, char const *src, int n)
// {
//     int c = 0;
//     while (c < n) {
//         dest[c] = src[c];
//         c++;
//     }
//     return (dest);
// }