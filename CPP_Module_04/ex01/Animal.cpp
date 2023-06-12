/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:03:15 by hmohamed          #+#    #+#             */
/*   Updated: 2023/06/12 13:15:18 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "";
	std::cout << "Animal constructor called" << std::endl;
};

Animal::Animal(const Animal& cp)
{
	type = cp.type;
	std::cout << "Animal copy constructor called" << std::endl;
};

Animal& Animal::operator=(const Animal& cp)
{
	type = cp.type;
	return (*this);
	std::cout << "Animal copy assignment operator called" << std::endl;
};

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
};

void	Animal::makeSound() const
{
	std::cout << "Unknown sound" << std::endl;
};

std::string	Animal::getType() const
{
	return (type);
};