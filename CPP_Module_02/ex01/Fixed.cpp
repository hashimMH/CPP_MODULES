/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:47:46 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/29 19:15:56 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : x(0)
{
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const int num)
{
	x = num << y;
};

Fixed::Fixed(const float fnum)
{
	x = (int)(fnum * (1 << y));
};

Fixed::Fixed(const Fixed &cp) : x(cp.x)
{
	std::cout << "Copy assignment operator called" << std::endl;
};

Fixed &Fixed::operator=(const Fixed &cp)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &cp)
	{
		x = cp.x;
	}
	return (*this);
};

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (x);
};

void Fixed::setRawBits(int const raw)
{
	x = raw;
};

float Fixed::toFloat(void) const
{
	return ((float)(x) / (1 << y));
};

int Fixed::toInt(void) const
{
	return (x >> y);
};

std::ostream& operator<<(std::ostream& os, const Fixed& op)
{
	os << op.toFloat();
	return (os);
};