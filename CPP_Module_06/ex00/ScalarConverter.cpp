/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:33:19 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/27 22:40:50 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

	std::cout << "default constructor called" << std::endl;
};


ScalarConverter::ScalarConverter(const ScalarConverter& cp) 
{
};

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& cp)
{
	return (*this);
};

ScalarConverter::~ScalarConverter()
{
	std::cout << "Destructor called" << std::endl;
};

ScalarConverter::convert(std::string str)
{
	
}


std::ostream& operator<<(std::ostream& os, const ScalarConverter& op)
{
	os << op.getName() << ", bureaucrat grade " << op.getGrade() << ".";
	return (os);
};
