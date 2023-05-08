/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:24:19 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/08 18:25:43 by hmohamed         ###   ########.fr       */
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
		if (!val.empty() || !std::cin.good())
			break ;
		std::cout << "Feild cannot be empty !!"<< std::endl;
	}
	contact[counter % 8].setFname(val);
	val.clear();
	while (1)
	{
		std::cout << "Enter the last name:"<< std::endl;
		std::getline(std::cin, val);
		if (!val.empty() || !std::cin.good())
			break ;
		std::cout << "Feild cannot be empty !!"<< std::endl;
	}
	contact[counter % 8].setLname(val);
	val.clear();
	while (1)
	{
		std::cout << "Enter the nickname:"<< std::endl;
		std::getline(std::cin, val);
		if (!val.empty() || !std::cin.good())
			break ;
		std::cout << "Feild cannot be empty !!"<< std::endl;
	}
	contact[counter % 8].setNickname(val);
	val.clear();
	while (1)
	{
		std::cout << "Enter the phone number:"<< std::endl;
		std::getline(std::cin, val);
		if (!val.empty() || !std::cin.good())
			break ;
		std::cout << "Feild cannot be empty !!"<< std::endl;
	}
	contact[counter % 8].setPhoneNumber(val);
	val.clear();
	while (1)
	{
		std::cout << "Enter the darkest secret:"<< std::endl;
		std::getline(std::cin, val);
		if (!val.empty() || !std::cin.good())
			break ;
		std::cout << "Feild cannot be empty !!"<< std::endl;
	}
	contact[counter % 8].setDarkSecret(val);
	val.clear();
	contact[counter % 8].setIndex((counter % 8) + 1);
	counter++;
};

void PhoneBook::search(void)
{
	int i;
	int k;
	std::string val;

	i = 0;
	std::cout<<std::endl;
	std::cout << " ----------------------SEARCH-----------------------"<< std::endl;
	std::cout << "|       INDEX|   FIRSTNAME|    LASTNAME|    NICKNAME|"<< std::endl;
	std::cout << "|____________|____________|____________|____________|"<< std::endl;
	while (i < 8)
	{
		k = contact[i].getIndex();
		if(k != 0)
		{
			std::cout<<"|";
			std::cout.width(12);
			std::cout<< k << "|";
			val = contact[i].getFname();
			if(val.length() > 10)
				std::cout << " "<<val.substr(0, 10)<< "." << "|";
			else
			{
				std::cout.width(12);
				std::cout<< val<< "|";
			}
			val = contact[i].getLname();
			if(val.length() > 10)
				std::cout<< " " <<val.substr(0, 10)<< "." << "|";
			else
			{
				std::cout.width(12);
				std::cout<< val<< "|";
			}
			val = contact[i].getNickname();
			if(val.length() > 10)
				std::cout<< " " << val.substr(0, 10)<< "." << "|"<<std::endl;
			else
			{
				std::cout.width(12);
				std::cout<< val<< "|"<< std::endl;
			}
			std::cout << "|____________|____________|____________|____________|"<< std::endl;
		}
		i++;
	}
	if(counter > 0)
	{
		while (1)
		{
			i = 0;
			val.clear();
			std::cout << std::endl <<"Enter the index:";
			std::getline(std::cin,val);
			if(!std::cin.good())
				break ;
			i = atoi(val.c_str());
			if(i >= 1 && i <= (counter % 8))
			{
				i--;
				std::cout<<std::endl;
				std::cout << "First Name  :"<< contact[i].getFname()<< std::endl;
				std::cout << "Last Name   :"<< contact[i].getLname()<< std::endl;
				std::cout << "Nickname    :"<< contact[i].getNickname()<< std::endl;
				std::cout << "PhoneNumber :"<< contact[i].getPhoneNumber()<< std::endl;
				std::cout << "DarkSecret  :"<< contact[i].getDarkSecret()<< std::endl;
				break ;
			}
			else
				std::cout << "Not valid entery" << std::endl;
		}
	}
	else
		std::cout <<std::endl << "List is empty !" << std::endl;
};