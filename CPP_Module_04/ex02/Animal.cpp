/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:03:15 by hmohamed          #+#    #+#             */
/*   Updated: 2023/06/02 14:08:45 by hmohamed         ###   ########.fr       */
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
};

Animal& Animal::operator=(const Animal& cp)
{
	type = cp.type;
	return (*this);
};

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
};

std::string	Animal::getType() const
{
	return (type);
};