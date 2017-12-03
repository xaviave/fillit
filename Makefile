# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/11/23 11:42:05 by xamartin     #+#   ##    ##    #+#        #
#    Updated: 2017/11/23 17:58:02 by llegros     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = fillit

SRC = main.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@cd libfil && $(MAKE) && cd .. && cd libft && $(MAKE) && cd ..
	@gcc -Wall -Wextra -Werror -c $(SRC)
	@gcc -Wall -Wextra -Werror -o $(NAME) main.o -Llibft -lft -Llibfil -lfil

./%.o:./%.c
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@/bin/rm -f $(OBJ)
	@cd libfil && $(MAKE) clean && cd .. && cd libft && $(MAKE) clean && cd ..

fclean: clean
	@/bin/rm -f $(NAME)
	@cd libfil && $(MAKE) fclean && cd .. && cd libft && $(MAKE) fclean && cd ..

re: fclean all
