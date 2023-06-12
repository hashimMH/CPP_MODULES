# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/27 19:51:30 by hmohamed          #+#    #+#              #
#    Updated: 2023/06/12 16:07:57 by hmohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Animal
SRC = main.cpp    	    \
		Animal.cpp       \
		Cat.cpp          \
		Dog.cpp          \
		Brain.cpp       \

OBJ = $(SRC:.cpp=.o)
CPP = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

all: $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CXXFLAGS) $(OBJ) -o $(NAME) 

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)
		
re: fclean all