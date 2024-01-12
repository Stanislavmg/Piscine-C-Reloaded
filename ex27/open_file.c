/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:04:54 by sgoremyk          #+#    #+#             */
/*   Updated: 2024/01/12 15:31:05 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

void	read_file(int fd)
{
	char	buf[BUF_SIZE];
	int		ch_count;

	ch_count = read(fd, buf, BUF_SIZE);
	while (ch_count)
	{
		if (ch_count == -1)
		{
			ft_puts("Cannot read file.");
			return ;
		}
		write(1, buf, ch_count);
		ch_count = read(fd, buf, BUF_SIZE);
	}
}

int	valid_args(int argc)
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
	return (0);
}
