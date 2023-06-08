/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:05:46 by hmohamed          #+#    #+#             */
/*   Updated: 2023/06/08 12:07:53 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "";
	std::cout << "Animal constructor called" << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal& cp)
{
	type = cp.type;
};

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& cp)
{
	type = cp.type;
	return (*this);
};

WrongAnimal::~WrongAnimal()
{
	std::cout << "Animal Destructor called" << std::endl;
};

void	WrongAnimal::makeSound() const
{
	std::cout << "Unknown sound" << std::endl;
};

std::string	WrongAnimal::getType() const
{
	return (type);
};