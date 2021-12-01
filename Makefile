# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lde-la-h <lde-la-h@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/08 11:13:32 by lde-la-h      #+#    #+#                  #
#    Updated: 2021/12/01 12:06:09 by lde-la-h      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= libftprintf.a

SRCS	= src/ft_printf.c \
		src/sub/ft_intlen.c \
		src/sub/ft_putnbr_base.c \
		src/sub/ft_print_ptr.c \
		src/sub/ft_printnum.c \
		src/sub/ft_putchar.c \
		src/sub/ft_putstr.c \
		src/sub/ft_strlen.c \
		src/sub/ft_write_null.c \

OBJS	= ${SRCS:%.c=%.o}

# Compile, default rule.
all: $(NAME)

# To create the .o files, take the .c file and
# use -c to compile or assemble the source file, then -o to output.
%.o: %.c
	$(CC) $(FLAGS) -o $@ -c $< -I ./include

# Compile everything, first create the objects.
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Clean object files
clean:
	rm -f $(OBJS)

# Clean library file
fclean: clean
	rm -f $(NAME)

# Re-compile
re:	fclean all

# Phonies as not to confuse make, these are actual commands, not files.
.PHONY: all, clean, fclean, re
