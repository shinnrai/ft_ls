# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/03 11:58:52 by ofedorov          #+#    #+#              #
#    Updated: 2017/02/21 13:49:58 by ofedorov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ft_ls

CC			=	gcc
CFLAGS		+=	-Wall -Werror -Wextra
RM			=	/bin/rm
RMFLAGS		+=	-rf

SRCSFL		=	main.c \
				display_entries.c \
				ft_ls.c \
				is_dot_file.c \
				isnot_dir_from_command_line.c \
				read_files_from_arguments.c \
				read_options.c \
				check_all_files_are_accessible.c

SRCSFD		=	srcs
OBJSFD		=	objs
INCLFD		=	includes libft/includes

SRCS		=	$(addprefix $(SRCSFD)/, $(SRCSFL))
OBJS		=	$(addprefix $(OBJSFD)/, $(SRCSFL:.c=.o))
LIBFT		=	libft/libft.a

LIBFTLIB	=	-Llibft -lft

RED			=	\033[0;31m
GREEN		=	\033[0;32m
NC			=	\033[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	@echo "$(GREEN)Objects created.$(NC)"
	@$(CC) $(CFLAGS) $(addprefix -I ,$(INCLFD)) $(OBJS) $(LIBFTLIB) -o $@
	@echo "$(GREEN)Program created.$(NC)"

$(OBJSFD):
	@mkdir $@

$(LIBFT): $(LIBFTFD)
	@make -C libft re

$(OBJSFD)/%.o: $(SRCSFD)/%.c | $(OBJSFD)
	@$(CC) $(CFLAGS) $(addprefix -I ,$(INCLFD)) -c $< -o $@

clean:
	@$(RM) $(RMFLAGS) $(OBJS)
	@echo "$(RED)Objects deleted$(NC)"
	@$(RM) $(RMFLAGS) $(OBJSFD)
	@make -C libft clean

fclean: clean
	@$(RM) $(RMFLAGS) $(NAME)
	@echo "$(RED)Program deleted.$(NC)"
	@make -C libft fclean

re: fclean all
