/*
** EPITECH PROJECT, 2021
** MY STRCMP
** File description:
** ...
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (int a = 0; a < n; a++) {
        if (s1[n] > s2[n]) {
            return -1;
        } else if (s1[n] < s2[n]) {
            return 1;
        }
    }
    return 0;
}