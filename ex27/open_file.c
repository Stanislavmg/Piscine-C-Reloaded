#include "display_file.h"

void	read_file(int fd)
{
	char    buf[BUF_SIZE];
	int		ch_count;

	ch_count = 0;
	while((ch_count = read(fd, buf, BUF_SIZE)) != 0)
		write(1, buf, ch_count);
}

int	ft_open(char *path)
{
	int	fd;

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		ft_puts("Open error.");
		return (-1);
	}
	return (fd);
}

int	ft_close(int fd)
{
	if (close(fd))
	{
		ft_puts("Close error.");
		return (-1);
	}
	return (0);
}

int valid_args(int argc, char **argv)
{
    if (argc > 2)
    {
        ft_puts("Too many arguments.");
        return (1);
    }
    else if (argc < 2)
    {
        ft_puts("File name missing.");
        return (1);
    }
    else if (NAME_SIZE < ft_strlen(argv[1]))
    {
        ft_puts("Cannot read file.");
        return (1);
    }
    return (0);
}