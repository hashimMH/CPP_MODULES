/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 03:27:29 by hmohamed          #+#    #+#             */
/*   Updated: 2024/02/24 15:10:27 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main( void ) 
{
  try {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

        // Test adding numbers using iterators
        std::vector<int> additionalNumbers;
        additionalNumbers.push_back(4);
        additionalNumbers.push_back(8);
        additionalNumbers.push_back(15);
        additionalNumbers.push_back(16);
        additionalNumbers.push_back(23);
        additionalNumbers.push_back(42);
        sp.addNumbers(additionalNumbers.begin(), additionalNumbers.end());

        std::cout << "Shortest Span after adding more numbers: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span after adding more numbers: " << sp.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
