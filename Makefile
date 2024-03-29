# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnoronha <pnoronha@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/17 15:58:02 by pnoronha          #+#    #+#              #
#    Updated: 2022/06/16 18:14:07 by pnoronha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS_DIR	=	sources
SRCS		=	$(SRCS_DIR)/checkers/ft_isalnum.c			\
				$(SRCS_DIR)/checkers/ft_isalpha.c			\
				$(SRCS_DIR)/checkers/ft_isascii.c			\
				$(SRCS_DIR)/checkers/ft_isdigit.c			\
				$(SRCS_DIR)/checkers/ft_isprint.c			\
				$(SRCS_DIR)/checkers/ft_isspace.c			\
				$(SRCS_DIR)/checkers/ft_isupper.c			\
				$(SRCS_DIR)/checkers/ft_islower.c			\
				$(SRCS_DIR)/converters/ft_atoi.c			\
				$(SRCS_DIR)/converters/ft_atol.c			\
				$(SRCS_DIR)/converters/ft_atod.c			\
				$(SRCS_DIR)/converters/ft_itoa.c			\
				$(SRCS_DIR)/converters/ft_utoa.c			\
				$(SRCS_DIR)/converters/ft_tolower.c			\
				$(SRCS_DIR)/converters/ft_toupper.c			\
				$(SRCS_DIR)/counters/ft_intlen.c			\
				$(SRCS_DIR)/counters/ft_strlen.c			\
				$(SRCS_DIR)/counters/ft_strnlen.c			\
				$(SRCS_DIR)/counters/ft_uintlen.c			\
				$(SRCS_DIR)/counters/ft_wordcnt.c			\
				$(SRCS_DIR)/ft_printf/conversion_treat.c	\
				$(SRCS_DIR)/ft_printf/conversion_treat_2.c	\
				$(SRCS_DIR)/ft_printf/ft_printf.c			\
				$(SRCS_DIR)/ft_printf/string_iteration.c	\
				$(SRCS_DIR)/linked_lists/ft_lstadd_back.c	\
				$(SRCS_DIR)/linked_lists/ft_lstadd_front.c	\
				$(SRCS_DIR)/linked_lists/ft_lstclear.c		\
				$(SRCS_DIR)/linked_lists/ft_lstdelone.c		\
				$(SRCS_DIR)/linked_lists/ft_lstiter.c		\
				$(SRCS_DIR)/linked_lists/ft_lstlast.c		\
				$(SRCS_DIR)/linked_lists/ft_lstmap.c		\
				$(SRCS_DIR)/linked_lists/ft_lstnew.c		\
				$(SRCS_DIR)/linked_lists/ft_lstsize.c		\
				$(SRCS_DIR)/memory/ft_bzero.c				\
				$(SRCS_DIR)/memory/ft_calloc.c				\
				$(SRCS_DIR)/memory/ft_memccpy.c				\
				$(SRCS_DIR)/memory/ft_memchr.c				\
				$(SRCS_DIR)/memory/ft_memcmp.c				\
				$(SRCS_DIR)/memory/ft_memcpy.c				\
				$(SRCS_DIR)/memory/ft_memmove.c				\
				$(SRCS_DIR)/memory/ft_memset.c				\
				$(SRCS_DIR)/memory/ft_free_dptr.c			\
				$(SRCS_DIR)/printers/ft_putchar_fd.c		\
				$(SRCS_DIR)/printers/ft_putchar.c			\
				$(SRCS_DIR)/printers/ft_putendl_fd.c		\
				$(SRCS_DIR)/printers/ft_putendl.c			\
				$(SRCS_DIR)/printers/ft_putnbr_fd.c			\
				$(SRCS_DIR)/printers/ft_putnbr.c			\
				$(SRCS_DIR)/printers/ft_putnbrBase.c		\
				$(SRCS_DIR)/printers/ft_putstr_fd.c			\
				$(SRCS_DIR)/printers/ft_putstr.c			\
				$(SRCS_DIR)/strings/ft_split.c				\
				$(SRCS_DIR)/strings/ft_strchr.c				\
				$(SRCS_DIR)/strings/ft_strcpy.c				\
				$(SRCS_DIR)/strings/ft_strdup.c				\
				$(SRCS_DIR)/strings/ft_strjoin.c			\
				$(SRCS_DIR)/strings/ft_strlcat.c			\
				$(SRCS_DIR)/strings/ft_strlcpy.c			\
				$(SRCS_DIR)/strings/ft_strmapi.c			\
				$(SRCS_DIR)/strings/ft_strncmp.c			\
				$(SRCS_DIR)/strings/ft_strnstr.c			\
				$(SRCS_DIR)/strings/ft_strrchr.c			\
				$(SRCS_DIR)/strings/ft_strtrim.c			\
				$(SRCS_DIR)/strings/ft_substr.c				\
				$(SRCS_DIR)/gnl/get_next_line.c

OBJS_DIR	=	objects
OBJS		:=	$(patsubst %.c, %.o, $(subst $(SRCS_DIR), $(OBJS_DIR), $(SRCS)))

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
INCS		=	-Iincludes
RM	 		=	rm -rf

all:	$(NAME)

$(NAME):	$(OBJS) | $(OBJS_DIR)
		@ar rcs $(NAME) $(OBJS)
		@echo "\033[32;1m>>	Library libft indexed\033[0m"

$(OBJS_DIR)/%.o:	$(SRCS_DIR)/%.c
		mkdir -p $(dir $(@))
		@$(CC) $(CFLAGS) $(INCS) -c $(<) -o $(@)

clean:
		@$(RM) $(OBJS)
		@$(RM) -d ./objects/*
		@$(RM) -d ./objects
		@echo "\033[2;3;31m>>	Object files removed\033[0m"

fclean:	clean
		@$(RM) $(NAME)
		@echo "\033[2;3;31m>>	Library removed\033[0m"

re:		fclean all

.PHONY:	all clean fclean re
