/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:24:19 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/08 15:50:05 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	counter = 0;
};

PhoneBook::~PhoneBook()
{
	
};

void PhoneBook::set_contact(void)
{
	std::string val;

	while (1)
	{
		std::cout << "Enter the first name:"<< std::endl;
		std::getline(std::cin, val);
		if (!val.empty())
			break ;
		std::cout << "Feild cannot be empty !!"<< std::endl;
	}
	contact[counter % 8].setFname(val);
	val.clear();
	while (1)
	{
		std::cout << "Enter the last name:"<< std::endl;
		std::getline(std::cin, val);
		if (!val.empty())
			break ;
		std::cout << "Feild cannot be empty !!"<< std::endl;
	}
	contact[counter % 8].setLname(val);
	val.clear();
	while (1)
	{
		std::cout << "Enter the nickname:"<< std::endl;
		std::getline(std::cin, val);
		if (!val.empty())
			break ;
		std::cout << "Feild cannot be empty !!"<< std::endl;
	}
	contact[counter % 8].setNickname(val);
	val.clear();
	while (1)
	{
		std::cout << "Enter the phone number:"<< std::endl;
		std::getline(std::cin, val);
		if (!val.empty())
			break ;
		std::cout << "Feild cannot be empty !!"<< std::endl;
	}
	contact[counter % 8].setPhoneNumber(val);
	val.clear();
	while (1)
	{
		std::cout << "Enter the darkest secret:"<< std::endl;
		std::getline(std::cin, val);
		if (!val.empty())
			break ;
		std::cout << "Feild cannot be empty !!"<< std::endl;
	}
	contact[counter % 8].setDarkSecret(val);
	val.clear();
	counter++;
};

void PhoneBook::search(void)
{
	std::cout << " ----------------------SEARCH-----------------------"<< std::endl;
	std::cout << "|INDEX       |FIRSTNAME   |LASTNAME    |NICKNAME    |"<< std::endl;
	std::cout << " ---------------------------------------------------"<< std::endl;
};