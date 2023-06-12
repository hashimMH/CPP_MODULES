/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:52:09 by hmohamed          #+#    #+#             */
/*   Updated: 2023/06/12 16:23:48 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	br = new Brain();
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
};

Cat::Cat(const Cat& cp):Animal(cp)
{
	br = new Brain();
    *br = *cp.br;
	type = cp.type;
	std::cout << "Cat copy constructor called" << std::endl;
};

Cat& Cat::operator=(const Cat& cp)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	br = new Brain();
    *br = *cp.br;
	type = cp.type;
	return (*this);
};

Cat::~Cat()
{
	delete br;
	std::cout << "Cat Destructor called" << std::endl;
};

void	Cat::makeSound() const
{

	std::cout << "Meaaaaawwwwwww" << std::endl;
};
