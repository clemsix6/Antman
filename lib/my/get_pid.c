/*
** EPITECH PROJECT, 2021
** navy
** File description:
** pid
*/

#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

pid_t get_pid(void)
{
    pid_t pid = getpid();
    return pid;
}

// int get_ppid(void)
// {
//     int ppid = getppid();
//     return ppid;
// }

// int get_pgid(int pid)
// {
//     int pgid = getpgid(pid);
//     return pgid;
// }
