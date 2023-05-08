/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:53:58 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/08 17:28:22 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void printHeader(void)
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

int main(void)
{
	PhoneBook phns;
	std::string com;
	
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
		//std::cout << com <<std::endl;
	}
	return (0);
}