NAME = libftprintf.a

SOURCES =	ft_printf.c \
			ft_printchar.c \
			ft_printdec.c \
			ft_printhexa.c \
			ft_printptr.c \
			ft_printstr.c \
			ft_printunsigned.c \

OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME) 
$(NAME): $(OBJECTS) 
	@$(AR) rcs $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all
