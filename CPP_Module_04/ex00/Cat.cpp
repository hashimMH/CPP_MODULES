/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:52:09 by hmohamed          #+#    #+#             */
/*   Updated: 2023/06/06 14:47:37 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
};

Cat::Cat(const Cat& cp):Animal(cp)
{
	type = cp.type;
};

Cat& Cat::operator=(const Cat& cp)
{
	type = cp.type;
	return (*this);
};

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
};

void	Cat::makeSound() const
{

	std::cout << "Meaaaaawwwwwww" << std::endl;
};
