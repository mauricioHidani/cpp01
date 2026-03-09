# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/08 17:24:54 by mhidani           #+#    #+#              #
#    Updated: 2026/03/08 18:09:07 by mhidani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= harl
SINCE		= 2026.03.08
AUTHOR		= mhidani
LOCAL		= 42SP
VERSION		= 1.0.0v

INC_DIR		= include
SRC_DIR		= src
OBJ_DIR		= obj

FILES		= main.cpp Harl.cpp
SRCS		= $(addprefix $(SRC_DIR)/, $(FILES))
OBJS		= $(addprefix $(OBJ_DIR)/, $(FILES:.cpp=.o))

CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
CPPINCS		= -I $(INC_DIR)/

MKD			= mkdir
MKDFLAGS	= --parents
RM			= rm
RMFLAGS		= --force --recursive

all: banner $(NAME)

clean:
	@$(RM) $(RMFLAGS) $(OBJ_DIR)
	@echo "$(OBJ_DIR): is cleaned  🧹"

fclean: clean
	@$(RM) $(RMFLAGS) $(NAME)
	@echo "$(NAME): is cleaned  🧹"

re: fclean all

banner:
	@echo "🛸 $(LOCAL) - Harl 2.0 $(VERSION) [CPP-01 Exercise 05]"
	@echo "$(AUTHOR) $(SINCE)"

$(NAME): $(OBJS)
	@$(CPP) $(CPPFLAGS) $(OBJS) $(CPPINCS) -o $@
	@echo "$(NAME): is done 🤙"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@$(MKD) $(MKDFLAGS) $(dir $@)
	@$(CPP) $(CPPFLAGS) $(CPPINCS) -c $< -o $@

.PHONY: clean fclean all re banner
