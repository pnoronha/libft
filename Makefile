# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnoronha <pnoronha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/17 15:58:02 by pnoronha          #+#    #+#              #
#    Updated: 2022/06/03 15:22:13 by pnoronha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	libft.a

SRCS_DIR	:=	sources

SRCS		:=	$(SRCS_DIR)/checkers/ft_isalnum.c			\
				$(SRCS_DIR)/checkers/ft_isalpha.c			\
				$(SRCS_DIR)/checkers/ft_isascii.c			\
				$(SRCS_DIR)/checkers/ft_isdigit.c			\
				$(SRCS_DIR)/checkers/ft_isprint.c			\
				$(SRCS_DIR)/checkers/ft_isspace.c			\
				$(SRCS_DIR)/converters/ft_atoi.c			\
				$(SRCS_DIR)/converters/ft_atod.c			\
				$(SRCS_DIR)/converters/ft_atol.c			\
				$(SRCS_DIR)/converters/ft_itoa.c			\
				$(SRCS_DIR)/converters/ft_tolower.c			\
				$(SRCS_DIR)/converters/ft_toupper.c			\
				$(SRCS_DIR)/converters/ft_utoa.c			\
				$(SRCS_DIR)/counters/ft_intlen.c			\
				$(SRCS_DIR)/counters/ft_strlen.c			\
				$(SRCS_DIR)/counters/ft_strnlen.c			\
				$(SRCS_DIR)/counters/ft_unsignedlen.c		\
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

OBJS_DIR	:=	objects
OBJS		:=	$(patsubst $(SRCS_DIR)/%.c, $(OBJS_DIR)/%.o, $(SRCS))

CC			:=	gcc
CFLAGS		:=	-Wall -Wextra -Werror -Iincludes
RM	 		:=	rm -df

all:	$(NAME)

$(NAME):	$(OBJS) | $(OBJS_DIR) objs_folder
		@ar rcs $(NAME) $(OBJS)
		@echo "\033[32;1m>>	Library libft indexed\033[0m"

$(OBJS_DIR)/checkers/%.o:	$(SRCS_DIR)/checkers/%.c
		@mkdir -p $(dir $(@))
		@$(CC)	-c	$(CFLAGS)	$(<)	-o	$(@)

$(OBJS_DIR)/converters/%.o:	$(SRCS_DIR)/converters/%.c
		@mkdir -p $(dir $(@))
		@$(CC)	-c	$(CFLAGS)	$(<)	-o	$(@)

$(OBJS_DIR)/counters/%.o:	$(SRCS_DIR)/counters/%.c
		@mkdir -p $(dir $(@))
		@$(CC)	-c	$(CFLAGS)	$(<)	-o	$(@)

$(OBJS_DIR)/ft_printf/%.o:	$(SRCS_DIR)/ft_printf/%.c
		@mkdir -p $(dir $(@))
		@$(CC)	-c	$(CFLAGS)	$(<)	-o	$(@)

$(OBJS_DIR)/linked_lists/%.o:	$(SRCS_DIR)/linked_lists/%.c
		@mkdir -p $(dir $(@))
		@$(CC)	-c	$(CFLAGS)	$(<)	-o	$(@)

$(OBJS_DIR)/memory/%.o:	$(SRCS_DIR)/memory/%.c
		@mkdir -p $(dir $(@))
		@$(CC)	-c	$(CFLAGS)	$(<)	-o	$(@)

$(OBJS_DIR)/printers/%.o:	$(SRCS_DIR)/printers/%.c
		@mkdir -p $(dir $(@))
		@$(CC)	-c	$(CFLAGS)	$(<)	-o	$(@)

$(OBJS_DIR)/strings/%.o:	$(SRCS_DIR)/strings/%.c
		@mkdir -p $(dir $(@))
		@$(CC)	-c	$(CFLAGS)	$(<)	-o	$(@)

$(OBJS_DIR)/gnl/%.o:	$(SRCS_DIR)/gnl/%.c
		@mkdir -p $(dir $(@))
		@$(CC)	-c	$(CFLAGS)	$(<)	-o	$(@)

objs_folder:
		@mkdir -p objects

clean:
		@$(RM) $(OBJS)
		@$(RM) -d ./objects/*
		@$(RM) -d ./objects
		@echo "\033[31;1m>>	Object files removed\033[0m"

fclean:	clean
		@$(RM) $(NAME)
		@echo "\033[31;1m>>	Library removed\033[0m"

re:		fclean all

.PHONY:	all clean fclean re objs_folder
