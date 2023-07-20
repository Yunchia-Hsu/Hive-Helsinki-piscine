NAME = libft.a
SOURCES = srcs/ft_putchar.c \
			srcs/ft_swap.c \
			srcs/ft_putstr.c \
			srcs/ft_strlen.c \
			srcs/ft_strcmp.c

INC = includes
OBJECTS = ${SOURCES:.c=.o}
CFLAGS = -Wextra -Werror -Wall

%.o: %.c   
	gcc ${CFLAGS}  -c $< -o $@ -I${INC}

all:	${NAME}

${NAME}: ${OBJECTS}
	ar  -crs ${NAME} ${OBJECTS}

clean: 
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: clean all fclean re
