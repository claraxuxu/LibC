/*
**  claraxuxu, 2019
** tetris
** File description:
** copy a string, and well alloc in this function
** could use directly
** ex:char *result; (src = "hello world\0")
** result = my_strdup(src); -> result = "hello world\0";
*/

#include "lib_str.h"

char *my_strdup(char *src)
{
    char *p_src = NULL;
    int count = 0;
    char *new_addr;

    if (src == NULL)
        return (NULL);
    p_src = src;
    while (*p_src != '\0') {
        count++;
        p_src++;
    }
    new_addr = malloc(sizeof(char) * (count + 1));
    p_src = src;
    while (*p_src  != '\0')
        *new_addr++ = *p_src++;
    *new_addr = '\0';
    return (new_addr - (count));
}
