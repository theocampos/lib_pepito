##
## Makefile for pepito library in /home/pepito
##
## Made by Joffrey Z.
## Login	<alexandre.renaud@epitech.eu>
##
## Started on	Mon	Jan	1	11:42:00	1970	Théodore Pierre
## Last update	Mon	Jan	1	11:21:42	1970	Théo Poche
##

SRC		=	src/init_steam_turbine.c	\
			src/read_turbine_config.c	\
			src/turbine_remote_access.c	\

OBJ = $(SRC:.c=.o)

NAME =	libpepito.so

LDFLAGS += -shared

CFLAGS += -Wall -Wextra -fPIC

CPPFLAGS += -iquote ./include

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS) $(LDLIBS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
