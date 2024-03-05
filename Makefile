NAME = push_swap
FLAGS = -Wall -Wextra -Werror
SRCF = main.c
LIBS = libft/libft.a
LIBDIR = libft

HEADERS	= push_swap.h libft.h


OBJF= $(SRCF:%.o=%.c)

all: $(NAME)

$(LIBS):
	make -C $(LIBDIR)

$(NAME): $(OBJF) $(LIBS)
	cc $(FLAGS) -o $@ $^


%.o:%.c $(HEADERS)
	cc $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(NAME)
	make -C $(LIBDIR) clean


fclean: clean
	rm -f $(OBJF)

re: fclean all
