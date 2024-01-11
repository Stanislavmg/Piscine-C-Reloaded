#ifndef DISPLAY_FILE_H
#define DISPLAY_FILE_H
#define BUF_SIZE 1024
#define NAME_SIZE 255
#include <unistd.h>
#include <fcntl.h>
int     valid_args(int argc, char **argv);
void    ft_puts(char *str);
int     ft_strlen(char *str);
void	read_file(int fd);
int	    ft_close(int fd);
int	    ft_open(char *path);
#endif