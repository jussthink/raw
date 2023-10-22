# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jusodici <jusodici@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/22 12:30:24 by jusodici          #+#    #+#              #
#    Updated: 2023/10/22 12:31:22 by jusodici         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memcpy.c ft_memset.c \
	  ft_strlcat.c ft_strlen.c ft_strrchr.c ft_toupper.c ft_isalnum.c \
	  ft_isascii.c ft_isprint.c ft_memmove.c ft_strchr.c ft_strlcpy.c \
	  ft_strncmp.c ft_tolower.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	  ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	  ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

OBJS = $(SRC:.c=.o)
C = gcc -c
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
RM =  /bin/rm -f

$(NAME): $(OBJS)
	$(C) $(FLAGS) $(SRC)
	ar rcs $(NAME) $(OBJS)
all: $(NAME) 

$(B): $(OBJ)
	$(C) $(FLAGS) $(SRC)
	ar rcs $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME) $(OBJS)
re: fclean all
.PHONY: all fclean clean re 