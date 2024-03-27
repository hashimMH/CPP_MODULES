/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:42:21 by hmohamed          #+#    #+#             */
/*   Updated: 2024/03/26 02:49:46 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	
};

PmergeMe::PmergeMe(std::string av)
{
    input = const_cast<char*>(av.c_str());
    

};

PmergeMe::PmergeMe(const PmergeMe& cp): input(cp.input)
{
	std::cout << "Copy constructor called" << std::endl;
};

PmergeMe& PmergeMe::operator=(const PmergeMe& cp)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &cp)
	{
		input = cp.input;
	}
	return (*this);
};


PmergeMe::~PmergeMe()
{
	
};
