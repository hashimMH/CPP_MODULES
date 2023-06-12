/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:52:09 by hmohamed          #+#    #+#             */
/*   Updated: 2023/06/12 13:21:32 by hmohamed         ###   ########.fr       */
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
	for (int i = 0; i < 100; i++) {
    br[i] = cp.br[i];
	}
	type = cp.type;
	std::cout << "Cat copy constructor called" << std::endl;
};

Cat& Cat::operator=(const Cat& cp)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	br = new Brain();
	for (int i = 0; i < 100; i++) {
    br[i] = cp.br[i];
	}
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
