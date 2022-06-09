/*
** EPITECH PROJECT, 2021
** MY STRCAT
** File description:
** ...
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int a = 0;
    int b = 0;
    for (a = 0; a < my_strlen(dest); a++) {
        dest[a] = dest[a];
    }
    for (b = 0; b < my_strlen(src); b++) {
        dest[a+b] = src[b];
    }
    return dest;
}