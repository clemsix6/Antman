/*
** EPITECH PROJECT, 2021
** MY STRNCAT
** File description:
** ...
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int a = 0;
    int b = 0;
    for (a = 0; a < my_strlen(dest); a++) {
        dest[a] = dest[a];
    }
    for (b = 0; b < nb; b++) {
        dest[a+b] = src[b];
    }
    return dest;
}