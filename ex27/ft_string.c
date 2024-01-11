#include "display_file.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

void    ft_puts(char *str)
{
    int i;

    i = ft_strlen(str);
    write(2, str, i);
    write(2, "\n", 1);
}

