/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 03:27:48 by hmohamed          #+#    #+#             */
/*   Updated: 2024/02/24 15:00:53 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <typeinfo>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <stdexcept>

class Span {
private:
    unsigned int _N;
    std::vector<int> numbers;

public:

	Span();
	Span(unsigned int N);
	Span(const Span& cp);
	Span& operator=(const Span& cp);
	~Span();
    void addNumber(int num);
    template <typename InputIt>
    void addNumbers(InputIt begin, InputIt end);
    int shortestSpan() const;
    int longestSpan() const;
};

#endif