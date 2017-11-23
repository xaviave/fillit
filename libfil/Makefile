# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/11/23 11:42:37 by xamartin     #+#   ##    ##    #+#        #
#    Updated: 2017/11/23 11:44:51 by xamartin    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libfil.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_error.c ft_fd.c ft_checkarround.c ft_idintetro.c ft_sorttetro.c \
	  ft_resolve.c ft_algo.c ft_placetetro.c ft_placetetro2.c ft_putok.c \
	  ft_putok6.c ft_puttetro.c ft_erase.c

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
