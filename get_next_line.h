/*
** EPITECH PROJECT, 2019
** CPE_getnextline_2018
** File description:
** get_next_line
*/

#include <stddef.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef MY_H_
    #define MY_H_
void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);



void my_putchar(char c)
{
    write (1, &c, 1);
}

int my_putstr(char const *str)
{
    int index = 0;
    while (index < my_strlen(str))
    {
        my_putchar(str[index]);
        ++index;
    }
    return (0);
}

int my_strlen(char const *str)
{
    int index;
    index = 0;

    while (str[index] != '\0'){
        ++index;
    }
    return (index);
}
#endif /* !MY_H_ */