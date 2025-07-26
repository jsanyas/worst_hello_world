# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: XXXXXXX <marvin@student.42.fr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/23 13:29:22 by XXXXXXX           #+#    #+#              #
#    Updated: 2025/07/26 18:23:13 by XXXXXXX          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
###
##		CONFIG
#

NAME		:=	hello

INC_DIR		:=	include
SRC_DIR		:=	src

CC			:=	cc
CFLAGS		:=	-Wall -Wextra -Werror -I$(INC_DIR)


################################################################################
###
##		SOURCES / OBJECTS
#

SRC_FILES	:=	src/hello.c

OBJ_FILES	:=	$(SRC_FILES:.c=.o)


################################################################################
###
##		FORMATTING
#

RESET		:=	\033[0m
BOLD		:=	\033[1m
ITALIC		:=	\033[2m

RED			:=	\033[1;31m
GREEN		:=	\033[1;32m
YELLOW		:=	\033[1;33m
BLUE		:=	\033[1;34m
CYAN		:=	\033[1;36m


################################################################################
###
##		TARGETS
#

#	Default rule, builds the library

all: $(NAME)


#	Creates the library from onject files

$(NAME): $(OBJ_FILES)
	@echo "$(BOLD)$(GREEN)[AR]$(REST) $(ITALIC)$(GREEN)$@$(RESET)"
	@$(CC) $(CFLAGS) -o $@ $(OBJ_FILES)


#	Removes all object files

clean:
	@for file in $(OBJ_FILES); do \
		rm -f $$file; \
		echo "$(BOLD)$(RED)[RM]$(RESET) $(ITALIC)$(YELLOW)$$file$(REST)"; \
	done


#	Removes all object files and the library

fclean: clean
	@rm -f $(NAME)
	@echo "$(BOLD)$(RED)[RM]$(RESET) $(ITALIC)$(YELLOW)$(NAME)$(RESET)"


#	Rebuilds everything (clean + compile)

re: fclean all


################################################################################
###
##		RULES
#

#	Compiles each .c file into a .o file

.o.c:
	@echo "$(BOLD)$(BLUE)[CC]$(REST) $(ITALIC)$(CYAN)$@$(REST)"
	@$(CC) $(CFLAGS) -c $< -o $@


.PHONY: all clean fclean re

