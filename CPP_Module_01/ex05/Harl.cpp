/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 01:48:55 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/19 15:47:08 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	
};
Harl::~Harl()
{
	
};

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
};
void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
};
void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
};
void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
};
void    Harl::complain( std::string level )
{
	Harl ptr[4];
	
	std::string arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	int j = -1;
	for (int i = 0; i < (int)arr->length(); i++ )
	{
		if(level == arr[i])
		{
			j = i;
			break;
		}
	};
	
	switch (j)
	{
	case 0:
		ptr->debug();
		break;
	case 1:
		ptr->info();
		break;
	case 2:
		ptr->warning();
		break;
	case 3:
		ptr->error();
		break;
	
	default:
		std::cout << "Invalid Entery !!" << std::endl;
		break;
	}
};