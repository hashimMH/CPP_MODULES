/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:52:03 by hmohamed          #+#    #+#             */
/*   Updated: 2023/06/08 13:00:12 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	br = new Brain();
	type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
};

Dog::Dog(const Dog& cp):Animal(cp)
{
	br = new Brain();
	type = cp.type;
};

Dog& Dog::operator=(const Dog& cp)
{
	br = new Brain();
	type = cp.type;
	return (*this);
};

Dog::~Dog()
{
	delete br;
	std::cout << "Dog Destructor called" << std::endl;
};

void	Dog::makeSound() const
{
	std::cout << "hooooow howww" << std::endl;
};
