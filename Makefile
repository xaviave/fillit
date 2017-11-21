# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llegros <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 12:23:16 by llegros           #+#    #+#              #
#    Updated: 2017/11/17 15:39:39 by llegros          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = main.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@cd libfil && $(MAKE) && cd .. && cd libft && $(MAKE) && cd ..
	@gcc -Wall -Wextra -Werror -c $(SRC)
	@gcc -Wall -Wextra -Werror -o $(NAME) main.o -Llibft -lft -Llibfil -lfil
	@cd libfil && $(MAKE) fclean && cd ..
	@cd libft && $(MAKE) fclean && cd ..
	@/bin/rm -f main.o

./%.o:./%.c
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
