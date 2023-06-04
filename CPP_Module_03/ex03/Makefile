# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/29 17:07:07 by hmohamed          #+#    #+#              #
#    Updated: 2023/06/03 20:12:27 by hmohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = DiamondTrap
SRC = main.cpp    	    \
		ClapTrap.cpp    \
		ScavTrap.cpp	\
		FragTrap.cpp 	\
		DiamondTrap.cpp   \

OBJ = $(SRC:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME) 

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all