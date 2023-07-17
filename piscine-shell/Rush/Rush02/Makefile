NAME = rush-02

SOURCES = main.c \
		  check.c \
		  clean_file.c \
		  dig_num.c \
		  ft_atoi.c \
		  ft_strcpy.c \
		  num.c \
		  print.c \


OBJECTS = $(SOURCES:.c=.o)

CFLAGS += -Wall -Werror -Wextra

$(NAME): $(OBJECTS)
		cc -o $(NAME) $(OBJECTS)

clean:
		rm -f $(OBJECTS)
fclean: clean
		rm -f $(NAME)
