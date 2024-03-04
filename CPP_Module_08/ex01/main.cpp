/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 03:27:29 by hmohamed          #+#    #+#             */
/*   Updated: 2024/03/04 14:47:04 by hmohamed         ###   ########.fr       */
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
		//additionalNumbers.push_back(0);
		additionalNumbers.push_back(6);
		additionalNumbers.push_back(2);
		additionalNumbers.push_back(9);
		additionalNumbers.push_back(51);
		additionalNumbers.push_back(60);

		sp.addNumbers(additionalNumbers.begin(), additionalNumbers.end());

		std::cout << "The ShortestSpan : " << sp.shortestSpan() << std::endl;
		std::cout << "The LongestSpan : " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
