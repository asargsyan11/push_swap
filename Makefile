# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 11:48:07 by asargsya          #+#    #+#              #
#    Updated: 2024/04/17 13:18:53 by asargsya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar rcs

NAME = push_swap.a

SRCS_PATH = ./sources

INCLUDES = -I ./include/\

SRC_FILES = push_swap.c validation.c ps_utils1.c ps_utils2.c

SRCS= $(addprefix $(SRCS_PATH), $(SRC_FILES))

OBJ_PATH = ./obj_files

OBJ = $(SRS:.c=.o)

OBJS = $(addprefix $(OBJ_PATH), $(OBJ))

all: $(NAME)

%.o:%.c Makefile push_swap.h
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o} $(INCLUDES)

$(NAME):	OBJ
	$(AR) $(NAME) $(OBJ)

clean:	
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(NAME)

.PHONY: all clean fclean re

