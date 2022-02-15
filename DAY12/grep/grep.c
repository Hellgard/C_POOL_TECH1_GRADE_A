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
            my_putstr(": No such file or directory");
    }

    return (84);
}

char *loop(char *buffer)
{
    char *str = malloc(sizeof(char) * 1025);
    int i = 0;

    while (buffer[i] != '\n') {
        str[i] = buffer[i];
        i++;
    }
    return (str);
}

int search_pattern(char **av, char *buffer)
{
    int i = 0;
    int k = 0;

    while (buffer[i]) {
        while (buffer[i] == av[1][k]){
            i++;
            k++;
        }
        if (k != my_strlen(av[1])) {
            k = 0;
        } else if (k == my_strlen(av[1])) {
            printf("loop");
            my_putstr(buffer);
            my_putchar('\n');
            k = 0;
        }
        i++;
    }
    return (0);
}

int read_files(int ac, char **av)
{
    int fd;
    char buffer[1025];
    int i = 2;
    int ret = 1024;
    char *str = malloc(sizeof(char) * 1025);
    int k = 0;

    while (i < ac) {
        fd = open(av[i], O_RDONLY);
        if (errno != 0) {
            error(av, errno, i, ac);
        }
        while (ret == 1024 && fd != -1) {
            ret = read(fd, buffer, 1024);
            buffer[ret] = '\0';
            launch_research(av[i], buffer);
        }
        ret = 1024;
        i++;
        close(fd);
    }
    my_putchar('\n');
    return (0);
}

int    main(int ac, char **av)
{
    if (ac < 3)
        return (84);
    return (read_files(ac, av));
    return (0);
}
