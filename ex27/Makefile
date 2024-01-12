# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/12 15:03:37 by sgoremyk          #+#    #+#              #
#    Updated: 2024/01/12 15:03:51 by sgoremyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_display_file

SRCS	=	main.c ft_string.c open_file.c

HEADER	=	display_file.h

OBJ		=	$(SRCS:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror 

.PHONY	:	all	clean fclean

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	$(CC)	$(CFLAGS)	$(OBJ) -o $@ 

%.o		:	%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	@rm -f $(OBJ)

fclean	:	clean
	@$(RM) $(NAME)
