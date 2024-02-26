/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 03:27:29 by hmohamed          #+#    #+#             */
/*   Updated: 2024/02/27 00:42:58 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main( void ) 
{
	try
	{
		Span sp = Span(100);
		// sp.addNumber(6);
		// sp.addNumber(3);
		// sp.addNumber(17);
		// sp.addNumber(9);
		// sp.addNumber(11);

		// std::cout << sp.shortestSpan() << std::endl;
		// std::cout << sp.longestSpan() << std::endl;

		// Adding numbers using iterators
		std::vector<int> additionalNumbers;
		additionalNumbers.push_back(6);
		additionalNumbers.push_back(1);
		additionalNumbers.push_back(60);

		sp.addNumbers(additionalNumbers.begin(), additionalNumbers.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
