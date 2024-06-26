NAME = push_swap
FLAGS = -Wall -Wextra -Werror
SRCF = main.c check_arg.c join_arg.c count_len.c ft_atol.c \
		dlist_function.c swap.c rotate.c free_arr.c \
		revs_rotate.c push.c sort_three.c r_lesDeux.c \
		find_min.c stack_init.c sort_algo.c push_a_to_b.c \
		set_target_a.c init_nodes_a.c init_nodes_b.c 
LIBDIR = libft
LIBS = libft/libft.a
LIBSRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
		ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
		ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

LIBDEP = $(addprefix $(LIBDIR)/, $(LIBSRC))

HEADERS	= push_swap.h libft/libft.h


OBJF= $(SRCF:%.c=%.o)

all: $(NAME)

$(LIBS): libft/libft.h $(LIBDEP)
	make -C $(LIBDIR)

$(NAME): $(OBJF) $(LIBS)
	cc $(FLAGS) -o $@ $^


%.o:%.c $(HEADERS)
	cc $(FLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJF)
	make -C $(LIBDIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBDIR) fclean
re: fclean all
