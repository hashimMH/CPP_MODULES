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
	*this = cp;
};

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& cp)
{
	(void)cp;
	return (*this);
};

ScalarConverter::~ScalarConverter()
{
	std::cout << "Destructor called" << std::endl;
};

void	ScalarConverter::convert(std::string str)
{
	std::string specialTypes[6] = {
		"-inff", "+inff", "nanf",
		"-inf", "+inf", "nan"
	};
	std::string toChar = "";
	int toInt = 0;
	float toFloat = 0;
	double toDouble = 0;

	//char
	if (str.size() == 1 && std::isprint(str[0]) && !std::isdigit(str[0])) {
		toChar = str[0];
		std::cout << "char: " << toChar << std::endl;
		std::cout << "int: " << static_cast<int>(toChar[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(toChar[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(toChar[0]) << ".0" << std::endl;
		return;
	}

	// number
	toInt = std::atoi(str.c_str());

	// float or int / double
	if (str[str.length() - 1] == 'f') {
		toFloat = std::atof(str.c_str());
		toDouble = static_cast<double>(toFloat);
	} else {
		toDouble = std::atof(str.c_str());
		toFloat = static_cast<float>(toDouble);
	}

	for (int i = 0; i < 6; ++i) {
		if (str == specialTypes[i]) {
			toChar = "imposible"; 
			break;
		}
	} 

	if (toChar == "" && std::isprint(toInt)) {
		toChar = "'";
		toChar += static_cast<char>(toInt);
		toChar += "'";
	} else if (toChar == "") {
		toChar = "Non displayable";
	}

	std::cout << "char: " << toChar << std::endl;
	if (toChar == "imposible") {
		std::cout << "int: imposible" << std::endl;
	} else {
		std::cout << "int: " << toInt << std::endl;
	}

	if (toChar == "imposible" && toFloat == 0) {
		std::cout << "float: imposible" << std::endl;
		std::cout << "double: imposible" << std::endl;
	} else {
		if (toChar != "imposible" && toFloat - static_cast<int>(toFloat) == 0) {
			std::cout << "float: " << toFloat << ".0f" << std::endl;
			std::cout << "double: " << toDouble << ".0" << std::endl;
		} else {
			std::cout << "float: " << toFloat << "f" << std::endl;
			std::cout << "double: " << toDouble << std::endl;
		}
	}
}
