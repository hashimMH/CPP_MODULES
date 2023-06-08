/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:05:40 by hmohamed          #+#    #+#             */
/*   Updated: 2023/06/08 12:11:17 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
};

WrongCat::WrongCat(const WrongCat& cp):WrongAnimal(cp)
{
	type = cp.type;
};

WrongCat& WrongCat::operator=(const WrongCat& cp)
{
	type = cp.type;
	return (*this);
};

WrongCat::~WrongCat()
{
	std::cout << "Cat Destructor called" << std::endl;
};

void	WrongCat::makeSound() const
{

	std::cout << "Meaaaaawwwwwww" << std::endl;
};
