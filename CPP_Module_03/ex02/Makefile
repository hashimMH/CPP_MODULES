# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/29 17:07:07 by hmohamed          #+#    #+#              #
#    Updated: 2023/05/29 21:34:05 by hmohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = FragTrap
SRC = main.cpp    	    \
		ClapTrap.cpp    \
		ScavTrap.cpp	\
		FragTrap.cpp 	\

OBJ = $(SRC:.cpp=.o)
CPP = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all