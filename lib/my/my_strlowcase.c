/*
** EPITECH PROJECT, 2021
** MY STRLOWCASE
** File description:
** ...
*/

int my_strlen(char const *str);

char *my_strlowcase(char *str)
{
    for (int a = 0; a < my_strlen(str); a++) {
        if ((64 < str[a]) && (str[a] < 91)) {
            str[a] = str[a] += 32;
        }
    }
    return str;
}