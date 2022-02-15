/*
** EPITECH PROJECT, 2021
** cat.c
** File description:
** cat command
*/
#include "my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

int    error(char **av, int error_t, int i, int lastbackslash)
{
    if (error_t == 2) {
        my_putstr("cat : ");
        my_putstr(av[i]);
        if (i < lastbackslash - 1)
            my_putstr(": No such file or directory\n");
        else
            my_putstr(": No such file or directory\n");
    }
    return (84);
}

int read_files(int ac, char **av)
{
    int fd;
    char buffer[1025];
    int i = 1;
    int ret = 1024;
    int k = 0;

    while (i < ac) {
        k = my_strlen(av[i]) - 1;
        if (av[i][k] == '/') {
            my_putstr("cat : ");
            my_putstr(av[i]);
            my_putstr(": Is a directory\n");
            i++;
        } else if (i == ac)
            return (0);
        fd = open(av[i], O_RDONLY);
        if (errno != 0) {
            error(av, errno, i, ac);
        }
        while (ret == 1024 && fd != -1) {
            ret = read(fd, buffer, 1024);
            buffer[ret] = '\0';
            my_putstr(buffer);
        }
        ret = 1024;
        i++;
        close(fd);
    }
    return (0);
}

int main(int ac, char **av)
{
    char *buffer[31];

    if (ac == 1)
        read(0, buffer, 30);
    if (ac < 2)
        return (84);
    return (read_files(ac, av));
    return (0);
}
