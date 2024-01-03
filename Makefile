# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/03 13:46:50 by gtroiano          #+#    #+#              #
#    Updated: 2024/01/03 13:46:58 by gtroiano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap
CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC_DIR = srcs/
LIBFT_DIR = libft/
OBJ_DIR = obj/

SRC = srcs/back_node.c \
		srcs/calculation_ab.c \
		srcs/calculation_ba.c \
		srcs/check_dup.c \
		srcs/check_is_sorted.c \
		srcs/exit_error.c \
		srcs/free.c \
		srcs/ft_push.c \
		srcs/ft_reverse_rotate.c \
		srcs/ft_rotate.c \
		srcs/ft_swap.c \
		srcs/logic.c \
		srcs/main.c \
		srcs/new_stack.c \
		srcs/rotate_and_push.c \
		srcs/rotations.c \
		srcs/sort_three.c \
		srcs/sort.c \
		srcs/utils_find.c \
		srcs/utils_last_element.c \
		srcs/utils.c \

OBJ = ${SRC:.c=.o}

INCLUDE = -L ./libft -lft

.c.o:
	${CC} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ}
	make -C $(LIBFT_DIR)
	${CC} ${FLAGS} ${OBJ} -o ${NAME} ${INCLUDE}

all: ${NAME}

clean:
	${RM} ${OBJ} ${NAME}
	@cd $(LIBFT_DIR) && $(MAKE) clean

fclean: clean
	${RM} ${NAME}
	@cd $(LIBFT_DIR) && $(MAKE) fclean

re: clean all

.PHONY: all clean fclean re