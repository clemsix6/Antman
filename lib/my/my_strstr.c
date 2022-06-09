/*
** EPITECH PROJECT, 2021
** MY STRSTR
** File description:
** ...
*/

#include <unistd.h>

void my_putchar(char c);

int my_strlen(char const *str);

void my_putstr(char const *str);

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int compteur = 0;

    for (int a = 0; a < my_strlen(str) - 1; a++) {
        if (str[a] == to_find[i]) {
            i++;
            compteur++;
        }
        if (compteur == my_strlen(to_find) - 1) {
            return &str[a];
        }
    }
    return str;
}