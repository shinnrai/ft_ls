# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/23 12:56:49 by ofedorov          #+#    #+#              #
#    Updated: 2017/02/21 23:26:47 by ofedorov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	libft.a

SRCSFL 		=	ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memccpy.c \
				ft_memmove.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strlen.c \
				ft_strdup.c \
				ft_strcpy.c \
				ft_strncpy.c \
				ft_strcat.c \
				ft_strncat.c \
				ft_strlcat.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strstr.c \
				ft_strnstr.c \
				ft_strcmp.c \
				ft_strncmp.c \
				ft_atoi.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_memalloc.c \
				ft_memdel.c \
				ft_strnew.c \
				ft_strdel.c \
				ft_strclr.c \
				ft_striter.c \
				ft_striteri.c \
				ft_strmap.c \
				ft_strmapi.c \
				ft_strequ.c \
				ft_strnequ.c \
				ft_strsub.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_strsplit.c \
				ft_strends.c \
				ft_itoa.c \
				ft_nbrlen.c \
				ft_putchar.c \
				ft_putstr.c \
				ft_putendl.c \
				ft_putnbr.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_lstnew.c \
				ft_lstdelone.c \
				ft_lstdel.c \
				ft_lstadd.c \
				ft_lstiter.c \
				ft_lstmap.c \
				ft_lstaddend.c \
				ft_lstprint.c \
				ft_lstfindfirst.c \
				ft_lstfindlast.c \
				ft_lstequ.c \
				ft_lstgetlast.c \
				ft_lstdelcontent.c \
				ft_lstdellast.c \
				ft_lstlen.c \
				ft_lstcpy.c \
				ft_lstdelif.c \
				get_next_line.c \
				ft_power.c \
				ft_putwchar_fd.c \
				ft_putwchar.c \
				ft_putwstr.c \
				ft_putwstr_fd.c \
				ft_putnwstr.c \
				ft_putnwstr_fd.c \
				ft_putnstr.c \
				ft_putnstr_fd.c \
				ft_wcharlen.c \
				ft_wstrlen.c \
				ft_error.c \
				ft_error_exit.c \
				ft_strqsort.c \
				ft_strswap.c \
				ft_strndup.c \
				ft_filenew.c \
				ft_filecpy.c \
				ft_filedel.c \
				ft_lstdelfile.c \
				ft_filelst_qsort.c \
				ft_filelst_toarr.c \
				ft_filearr_tolst.c \
				ft_lstnotdelcontent.c \
				ft_filecmpname.c \
				ft_filecmptime.c \
				ft_file_getinfo.c \
				ft_filelst_getinfo.c \
				ft_lstreverse.c \
				ft_filelst_print.c \
				ft_filelst_printlongformat.c \
				ft_file_getentries.c \
				ft_lstif_file_isdir.c \
				ft_lstcpyif.c \
				ft_lstcpycontent_memcpy.c \
				ft_lstcpycontent_file.c \
				ft_filelst_if_specialfiles.c \
				ft_textcolor.c \
				ft_printf.c \
				ft_printf_utils/format_a.c \
				ft_printf_utils/format_another.c \
				ft_printf_utils/format_c.c \
				ft_printf_utils/format_d.c \
				ft_printf_utils/format_e.c \
				ft_printf_utils/format_f.c \
				ft_printf_utils/format_i.c \
				ft_printf_utils/format_o.c \
				ft_printf_utils/format_p.c \
				ft_printf_utils/format_s.c \
				ft_printf_utils/format_u.c \
				ft_printf_utils/format_x.c \
				ft_printf_utils/ft_double_utils.c \
				ft_printf_utils/ft_printf_format.c \
				ft_printf_utils/ft_printf_checking_format.c \
				ft_printf_utils/ft_printf_get_value.c \
				ft_printf_utils/ft_printf_read_format.c \
				ft_printf_utils/ft_printf_read_utils.c \
				ft_printf_utils/ft_printf_write.c \

OBJSFD		=	objs
SRCSFD		=	srcs
INCLFD		=	includes

OBJS		=	$(addprefix $(OBJSFD)/, $(notdir $(SRCSFL:.c=.o)))
SRCS		=	$(addprefix $(SRCSFD)/, $(SRCSFL))

CC			=	gcc
CFLAGS		+=	-Wall -Wextra -Werror
RM			=	/bin/rm
RMFLAGS		+=	-rf

RED			=	\033[0;31m
GREEN		=	\033[0;32m
NC			=	\033[0m

VPATH		=	$(SRCSFD):$(SRCSFD)/ft_printf_utils

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(GREEN)Libft objects created.$(NC)"
	@ar src $@ $(OBJS)
	@ranlib $@
	@echo "$(GREEN)Libft created.$(NC)"

$(OBJSFD):
	@mkdir $@

$(OBJSFD)/%.o: %.c | $(OBJSFD)
	@$(CC) $(CFLAGS) -I$(INCLFD) -c $< -o $@

clean:
	@$(RM) $(RMFLAGS) $(OBJS)
	@echo "$(RED)Libft objects deleted.$(NC)"
	@$(RM) $(RMFLAGS) $(OBJSFD)

fclean: clean
	@$(RM) -rf $(NAME)
	@echo "$(RED)Libft deleted.$(NC)"

re: fclean all
