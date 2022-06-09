/*
** EPITECH PROJECT, 2021
** MY STRNCPY
** File description:
** ...
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int a = 0; a < n; a++) {
        dest[a] = src[a];
    }
    return dest;
}