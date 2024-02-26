/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:47:44 by hmohamed          #+#    #+#             */
/*   Updated: 2024/02/24 15:09:14 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():_N(0)
{
	std::cout << "Default constructor called" << std::endl;
};

Span::Span(unsigned int N) : _N(N) 
{
	std::cout << "Param constructor called" << std::endl;
};

Span::Span(const Span& cp):_N(cp._N)
{
	std::cout << "Copy constructor called" << std::endl;
};

Span& Span::operator=(const Span& cp)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &cp)
	{
		_N = cp._N;
	}
	return (*this);
};

Span::~Span()
{
	std::cout << "Destructor called" << std::endl;
};

void Span::addNumber(int num) {
    if (numbers.size() >= _N) {
        throw std::out_of_range("Cannot add more numbers, capacity reached");
    }
    numbers.push_back(num);
}

template <typename InputIt>
void Span::addNumbers(InputIt begin, InputIt end) {
    size_t newCapacity = numbers.size() + std::distance(begin, end);
    if (newCapacity > _N) {
        throw std::out_of_range("Cannot add more numbers, capacity reached");
    }
    numbers.insert(numbers.end(), begin, end);
}


int Span::shortestSpan() const {
    if (numbers.size() < 2) {
        throw std::logic_error("Cannot find span with less than 2 numbers");
    }
    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    int minSpan = std::numeric_limits<int>::max();
    for (size_t i = 1; i < sortedNumbers.size(); ++i) {
        minSpan = std::min(minSpan, sortedNumbers[i] - sortedNumbers[i - 1]);
    }
    return minSpan;
}

int Span::longestSpan() const {
    if (numbers.size() < 2) {
        throw std::logic_error("Cannot find span with less than 2 numbers");
    }
    //int minMax = std::minmax_element(numbers.begin(), numbers.end());

	 std::pair<std::vector<int>::const_iterator, std::vector<int>::const_iterator> minMax =
        std::minmax_element(numbers.begin(), numbers.end());
    return *minMax.second - *minMax.first;
}