# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsilva-s <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 13:57:53 by tsilva-s          #+#    #+#              #
#    Updated: 2023/10/25 20:10:36 by tsilva-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_bzero.c ft_calloc.c ft_memcpy.c ft_memmove.c ft_memset.c \
	ft_strdup.c ft_strlcpy.c ft_substr.c ft_strlen.c ft_strjoin.c \
	ft_strchr.c ft_strtrim.c ft_split.c ft_itoa.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_strlcat.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
       ft_isprint.c ft_toupper.c ft_tolower.c ft_strrchr.c ft_strncmp.c \
	ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_strmapi.c

SRCBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
		ft_lstiter.c ft_lstmap.c

OBJ = $(SRCS:.c=.o)

OBJBONUS = $(SRCBONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -crs $(NAME) $(OBJ)

clean: 
	rm -f $(OBJ) $(OBJBONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJBONUS)
	ar -crs $(NAME) $(OBJBONUS)
	@touch bonus

.PHONY: all clean fclean re
