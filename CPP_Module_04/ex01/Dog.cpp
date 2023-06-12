/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:52:03 by hmohamed          #+#    #+#             */
/*   Updated: 2023/06/12 13:21:16 by hmohamed         ###   ########.fr       */
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
	for (int i = 0; i < 100; i++) {
    br[i] = cp.br[i];
	}
	type = cp.type;
	std::cout << "Dog copy constructor called" << std::endl;
};

Dog& Dog::operator=(const Dog& cp)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	br = new Brain();
	for (int i = 0; i < 100; i++) {
    br[i] = cp.br[i];
	}
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

std::string& Dog::getIdia(int index)
{
	return (br->getIdia(index));
};

void Dog::setIdia(std::string ida, int ind)
{
	if(ind < 0 || ind > 99)
		return ;
		br->setIdia(ida, ind);
};
