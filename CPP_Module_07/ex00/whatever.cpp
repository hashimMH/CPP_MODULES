/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:58:58 by hmohamed          #+#    #+#             */
/*   Updated: 2024/01/23 14:00:54 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

whatever::whatever()
{

	std::cout << "default constructor called" << std::endl;
};


whatever::whatever(const whatever& cp) 
{
	*this = cp;
};

whatever& whatever::operator=(const whatever& cp)
{
	(void)cp;
	return (*this);
};

whatever::~whatever()
{
	std::cout << "Destructor called" << std::endl;
};



