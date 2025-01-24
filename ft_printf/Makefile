# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/25 17:41:26 by cmetee-b          #+#    #+#              #
#    Updated: 2025/01/22 17:01:25 by asiatik          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#les_variables
NAME = libftprintf.a
LIBFT = ../libft/libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror 

#les_fichiers
SRCS = ft_printf.c ft_utils.c

OBJS = $(SRCS:.c=.o)

#couleurs
RED     := "\033[1;31m"
GREEN   := "\033[1;32m"
RESET   := "\033[0m"

#regles
all: $(NAME)

$(NAME): $(OBJS)
	@make -C ../libft
	@cp ../libft/libft.a $(NAME) 
	@ar rcs $@ $(OBJS)
	@echo $(GREEN)"COMPILATION DE MY_PRINTF REUSSIE!!!!"$(RESET)

%.o: %.c
	$(CC) $(CFLAGS) -c $^

clean:
#	@make -C ./libft clean
	@rm -rf $(OBJS)
	@echo $(GREEN)"NETTOYAGE DES FICHIERS OBJECTS DE MY_PRINTF!! OK"

fclean: clean
#	@make -C ./libft fclean
	@rm -rf $(NAME)
	@echo $(GREEN)"NETTOYAGE COMPLET DE MY_PRINTF!!! OK"

re: fclean all

.PHONY: all clean fclean re
