/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:53:58 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/13 18:55:30 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void printHeader(void)
{
	std::cout<<std::endl;
	std::cout << " ----------weclome to phonebook----------"<<std::endl;
	std::cout << "|                                        |"<<std::endl;
	std::cout << "|        Please use this commands        |"<<std::endl;
	std::cout << "|   ADD    : to add new contact.         |"<<std::endl;
	std::cout << "|   SEARCH : to search for contact       |"<<std::endl;
	std::cout << "|   EXIT   : to exit from the program    |"<<std::endl;
	std::cout << " ---------------------------------------- "<<std::endl;
}

int main(int ac, char **av)
{
	PhoneBook phns;
	std::string com;
	
	(void)av;
	if(ac == 1)
	{
		while (1)
		{
			printHeader();
			std::cout <<"Enter the command : ";
			std::getline(std::cin, com);
			if(com == "EXIT" || !std::cin.good())
				break ;
			else if(com == "ADD")
				phns.set_contact();
			else if(com == "SEARCH")
				phns.search();
			else
				std::cout <<"Command not valid !" <<std::endl;
			if(!std::cin.good())
				break ;
		}
	}
	return (0);
}