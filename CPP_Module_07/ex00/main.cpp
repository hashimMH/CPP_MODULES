/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:34:26 by hmohamed          #+#    #+#             */
/*   Updated: 2024/01/08 14:56:02 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main(int argc, char *argv[])
{
	if (argc == 1) {
		std::cout << "Error: no parameters" << std::endl;
		return 1;
	}

	ScalarConverter::convert(argv[1]);
	return 0;
}
