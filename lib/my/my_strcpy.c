/*
** EPITECH PROJECT, 2021
** MY STRCPY
** File description:
** ...
*/

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *str)
{
    int i;
    for (i = 0; i < my_strlen(dest); i++) {
        dest[i] = str[i];
    }
    dest[i] = '\0';
    return dest;
}