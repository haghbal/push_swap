NAME = push_swap
FLAGS = -Wall -Wextra -Werror
SRCF = main.c syntax_error.c check_double_and_sort.c check_arg.c join_arg.c count_len.c \
		conv_to_nbr.c creat_stack.c ft_dlstnew.c ft_dlstlast.c ft_dlstadd_front.c \
		ft_dlstadd_back.c sa.c swap.c sb.c ss.c ft_dlstsize.c retate.c ra.c \
		rb.c rra.c rrb.c revs_retate.c push.c rr.c rrr.c pa.c pb.c sort_three.c find_max.c \
		find_min.c print_stack.c stack_init.c sort_algo.c current_index.c set_target_a.c \
		init_nodes_a.c calcule_move.c set_min_cost.c
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
	rm -f $(OBJF) $(NAME)
	make -C $(LIBDIR) clean


fclean: clean
	rm -f $(OBJF)
	make -C $(LIBDIR) fclean
re: fclean all
