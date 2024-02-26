/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:47:44 by hmohamed          #+#    #+#             */
/*   Updated: 2024/02/26 18:18:44 by hmohamed         ###   ########.fr       */
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

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (numbers.size() + std::distance(begin, end) > _N)
	{
		throw std::out_of_range("Cannot add more numbers, maximum limit reached.");
	}
	numbers.insert(numbers.end(), begin, end);
}

int Span::shortestSpan(void) const
{
	if (numbers.empty())
		throw std::logic_error("Empty victor");
	else if (numbers.size() < 2)
		throw std::logic_error("Cannot find span with less than 2 numbers");
	std::vector<int> copy = numbers;
	std::sort(copy.begin(), copy.end(), std::less<int>());
	return *(copy.begin());
}

int Span::longestSpan(void) const
{
	if (numbers.empty())
		throw std::logic_error("Empty victor");
	else if (numbers.size() < 2)
		throw std::logic_error("Cannot find span with less than 2 numbers");
	std::vector<int> copy = numbers;
	std::sort(copy.begin(), copy.end(), std::greater<int>());
	return *(copy.begin());
}