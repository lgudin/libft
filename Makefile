# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgudin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 23:00:49 by lgudin            #+#    #+#              #
#    Updated: 2019/05/24 14:29:54 by lgudin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=libft.a

CC		=gcc

SRC		=ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcmp.c ft_strlcat.c ft_strcat.c ft_strncat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_memalloc.c ft_memdel.c ft_strdel.c ft_strclr.c ft_striter.c ft_putstr.c ft_itoa.c ft_strsplit.c ft_putchar.c ft_striteri.c ft_digitlen.c ft_putnbr.c ft_strtrim.c ft_strnew.c ft_putnbr_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_putendl_fd.c ft_putendl.c ft_strsub.c ft_strjoin.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_putcharln.c ft_putstrln.c ft_putnstr.c ft_putseparation.c get_next_line.c ft_sqrt.c ft_next_sqrt.c

INCLUDE =libft.h

OBJ		=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INCUDE)
	@$(CC) -c $(SRC) -I $(INCLUDE) -Wall -Wextra -Werror
	@ar rcs $(NAME) $(OBJ) $(INCLUDE)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean	all

america_great_again:
	@echo "|* * * * * * * * * * OOOOOOOOOOOOOOOOOOOOOOOOO| \n| * * * * * * * * *  :::::::::::::::::::::::::| \n|* * * * * * * * * * OOOOOOOOOOOOOOOOOOOOOOOOO| \n| * * * * * * * * *  :::::::::::::::::::::::::| \n|* * * * * * * * * * OOOOOOOOOOOOOOOOOOOOOOOOO| \n| * * * * * * * * *  ::::::::::::::::::::;::::| \n|* * * * * * * * * * OOOOOOOOOOOOOOOOOOOOOOOOO| \n|:::::::::::::::::::::::::::::::::::::::::::::| \n|OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO| \n|:::::::::::::::::::::::::::::::::::::::::::::| \n|OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO| \n|:::::::::::::::::::::::::::::::::::::::::::::| \n|OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO| \n "
