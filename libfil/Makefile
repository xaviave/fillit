# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llegros <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 12:23:16 by llegros           #+#    #+#              #
#    Updated: 2017/11/20 15:51:04 by llegros          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfil.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_error.c ft_fd.c ft_checkarround.c ft_idintetro.c ft_sorttetro.c \
	  ft_resolve.c ft_algo.c ft_placetetro.c ft_placetetro2.c ft_putok.c \
	  ft_putok6.c ft_puttetro.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

./%.o:./%.c
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
