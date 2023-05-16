# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/05 15:38:35 by hmohamed          #+#    #+#              #
#    Updated: 2023/05/17 00:24:21 by hmohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sedisforlosers
SRC = main.cpp    	    \
		

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