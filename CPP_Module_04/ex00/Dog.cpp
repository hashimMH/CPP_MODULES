/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:52:03 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/31 17:53:54 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
};

Dog::Dog(const Dog& cp):Animal(cp)
{
	type = cp.type;
};

Dog& Dog::operator=(const Dog& cp)
{
	type = cp.type;
	return (*this);
};

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
};