/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:04:10 by sgoremyk          #+#    #+#             */
/*   Updated: 2024/01/12 15:31:24 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H

# define DISPLAY_FILE_H
# define BUF_SIZE 1024
# define NAME_SIZE 255
# include <unistd.h>
# include <fcntl.h>

int		valid_args(int argc);
void	ft_puts(char *str);
int		ft_strlen(char *str);
void	read_file(int fd);

#endif
