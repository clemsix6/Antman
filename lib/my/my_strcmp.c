/*
** EPITECH PROJECT, 2021
** MY STRCMP
** File description:
** ...
*/

int my_strlen(char const *str);

int my_strcmp(char *s1, char *s2)
{
    for (int a = 0; a < my_strlen(s1); a++) {
        if (s1[a] > s2[a]) {
            return 1;
        } else if (s1[a] < s2[a]) {
            return -1;
        }
    }
    return 0;
}