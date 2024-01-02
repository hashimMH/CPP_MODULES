/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:48:12 by hmohamed          #+#    #+#             */
/*   Updated: 2024/01/02 17:51:17 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{

	std::cout << "default constructor called" << std::endl;
};


Serializer::Serializer(const Serializer& cp) 
{
	*this = cp;
};

Serializer& Serializer::operator=(const Serializer& cp)
{
	(void)cp;
	return (*this);
};

Serializer::~Serializer()
{
	std::cout << "Destructor called" << std::endl;
};
