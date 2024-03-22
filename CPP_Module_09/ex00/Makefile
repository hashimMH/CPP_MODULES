# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/29 03:27:56 by hmohamed          #+#    #+#              #
#    Updated: 2024/03/21 04:17:48 by hmohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = btc
SRC = main.cpp    	    \
		BitcoinExchange.cpp \

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