/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:48:01 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/21 21:34:55 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed const b( 10 ); 
	Fixed const c( 42.42f ); 
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout<< "a is " << a.toInt() << " as integer" << std::endl;
	std::cout<< "b is " << b.toInt() << " as integer" << std::endl;
	std::cout<< "c is " << c.toInt() << " as integer" << std::endl;
	std::cout<< "d is " << d.toInt() << " as integer" << std::endl;


	return 0;
}