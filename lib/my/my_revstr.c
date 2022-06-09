/*
** EPITECH PROJECT, 2021
** MY REVSTR
** File description:
** ...
*/

#include <unistd.h>

void my_putchar(char c);

int my_strlen(char const *str);

void my_putstr(char const *str);

char * my_revstr (char *str)
{
    int size = my_strlen(str);
    char copy[size];

    for (int i = 0; i < size; i++) {
        copy[i] = str[i];
    }
    for (int j = 0; j < size; j++) {
        str[size - j - 1] = copy[j];
    }
    return str;
}