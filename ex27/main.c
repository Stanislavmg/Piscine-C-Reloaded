/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:04:45 by sgoremyk          #+#    #+#             */
/*   Updated: 2024/01/12 15:31:43 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int	main(int argc, char *argv[])
{
	int	fd;

	if (valid_args(argc))
		return (0);
	fd = open(argv[1], O_RDONLY);
	read_file(fd);
	close(fd);
	return (0);
}
