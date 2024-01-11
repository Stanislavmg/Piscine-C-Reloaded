#include "display_file.h"

int main(int argc, char *argv[])
{
    int     fd;

    if (valid_args(argc, argv))
        return (0);
    fd = ft_open(argv[1]);
    read_file(fd);
    ft_close(fd);
    return (0);
}