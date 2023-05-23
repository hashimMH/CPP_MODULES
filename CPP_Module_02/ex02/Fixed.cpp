/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:47:46 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/22 14:51:17 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():x(0)
{
	
};

Fixed::Fixed(const int num)
{
	x = num << y;
};

Fixed::Fixed(const float fnum)
{
	x = (int)(fnum * (1 << y));
};

Fixed::Fixed(const Fixed& cp):x(cp.x)
{

};

Fixed& Fixed::operator=(const Fixed& cp)
{
	if(this != &cp)
	{
		x = cp.x;
	}
	return (*this);
};

bool Fixed::operator>(const Fixed &sec) const
{
	return x > sec.x;
}

bool Fixed::operator<(const Fixed &sec) const
{
	return x < sec.x;
}

bool Fixed::operator>=(const Fixed &sec) const
{
	return x >= sec.x;
}

bool Fixed::operator<=(const Fixed &sec) const
{
	return x <= sec.x;
}

bool Fixed::operator==(const Fixed &sec) const
{
	return x == sec.x;
}

bool Fixed::operator!=(const Fixed &sec) const
{
	return x != sec.x;
}

Fixed Fixed::operator+(const Fixed &sec) const
{
	Fixed re;
	re.x = x + sec.x;
	return (re);
};

Fixed Fixed::operator-(const Fixed &sec) const 
{
	Fixed re;
	re.x = x - sec.x;
	return (re);
};

Fixed Fixed::operator*(const Fixed &sec) const 
{
	Fixed re;
	re.x = (x * sec.x) >> y;
	return (re);
};

Fixed Fixed::operator/(const Fixed &sec) const 
{
	Fixed re;
	re.x = (x << y) / sec.x;
	return (re);
};

Fixed& Fixed::operator++()
{
	x += (1 << y);
    return *this;
};

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	x += (1 << y);
    return tmp;
};

Fixed& Fixed::operator--()
{
	x -= (1 << y);
    return *this;
};

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	x -= (1 << y);
    return tmp;
};

Fixed::~Fixed()
{
};

int Fixed::getRawBits( void ) const
{
	return (x);
};

void Fixed::setRawBits( int const raw )
{
	x = raw;
};

float Fixed::toFloat( void ) const
{
	return ((float)(x) / (1 << y));
};

int Fixed::toInt( void ) const
{
	return (x >> y);
};