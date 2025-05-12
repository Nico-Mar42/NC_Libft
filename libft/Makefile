# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nicolmar <nicolmar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/12 11:18:12 by nicolmar          #+#    #+#              #
#    Updated: 2025/05/12 12:11:57 by nicolmar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#! Variables

NAME		= libft.a
INCLUDES	= ./
OBJ_DIR		= obj/
SRC_DIR		= src/

AR		= ar rcs
CC		= gcc
CFLAGS	= -g -Wall -Wextra -Werror -I

#! Sources

FT_IS_DIR	=	ft_is/
FT_IS       =	ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_is_in_set \
				ft_iswhitespace 

FT_LST_DIR	=	ft_lst/
FT_LST      =	ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone ft_lstiter \
			ft_lstlast ft_lstmap ft_lstnew ft_lstsize

FT_PUT_DIR	=	ft_put/
FT_PUT		=	ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd ft_putchar \
			ft_putstr

FT_STR_DIR	=	ft_str/
FT_STR		=	ft_strchr ft_strdup ft_striteri ft_strjoin ft_strlcat ft_strlcpy \
			ft_strlen ft_strmapi ft_strncmp ft_strnstr ft_strrchr ft_strtrim ft_split\
			ft_strldup ft_substr ft_strlen_char

FT_MEM_DIR	=	ft_mem/
FT_MEM		=	ft_bzero ft_calloc ft_memchr ft_memcmp ft_memcpy ft_memmove \
			ft_memset ft_free_array

FT_OTHER_DIR	=	ft_other/
FT_OTHER      	=	ft_printf ft_printfbis get_next_line \

FT_TO_DIR 	=	ft_to/
FT_TO		=	ft_atoi ft_itoa ft_tolower ft_toupper ft_atol ft_usitoa ft_lst_to_strtab \

SRC_FILES	=	$(addprefix $(FT_IS_DIR),$(FT_IS)) \
				$(addprefix $(FT_LST_DIR),$(FT_LST)) \
				$(addprefix $(FT_PUT_DIR),$(FT_PUT)) \
				$(addprefix $(FT_STR_DIR),$(FT_STR)) \
				$(addprefix $(FT_MEM_DIR),$(FT_MEM)) \
				$(addprefix $(FT_OTHER_DIR),$(FT_OTHER)) \
				$(addprefix $(FT_TO_DIR),$(FT_TO))

SRCS = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

#! Make

$(NAME): $(OBJS)
	@echo "Compiling Libft.a ..."
	@$(AR) $(NAME) $(OBJS)
	@echo "Libft.a compiled!"

$(OBJ_DIR)%.o : $(SRC_DIR)%.c | obj_mkdir
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

all: $(NAME)

clean:
	@rm -rf $(OBJ_DIR)
	@echo "Libft objects files cleaned!"

fclean: clean
	@rm -f $(NAME)
	@echo "Libft.a cleaned!"

obj_mkdir:
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)$(FT_IS_DIR)
	@mkdir -p $(OBJ_DIR)$(FT_LST_DIR)
	@mkdir -p $(OBJ_DIR)$(FT_PUT_DIR)
	@mkdir -p $(OBJ_DIR)$(FT_STR_DIR)
	@mkdir -p $(OBJ_DIR)$(FT_MEM_DIR)
	@mkdir -p $(OBJ_DIR)$(FT_OTHER_DIR)
	@mkdir -p $(OBJ_DIR)$(FT_TO_DIR)
	@echo "Libft objects files created!"

re: fclean all
	@echo "Cleaned and rebuild Libft from zero!"

.PHONY: all clean fclean obj_mkdir re
