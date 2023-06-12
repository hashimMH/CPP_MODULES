/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:30:04 by hmohamed          #+#    #+#             */
/*   Updated: 2023/06/12 13:22:27 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
};

Brain::Brain(const Brain& cp)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*ideas = *cp.ideas;
};

Brain& Brain::operator=(const Brain& cp)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	*ideas = *cp.ideas;
	return (*this);
};

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
};

std::string& Brain::getIdia(int index)
{
	return (ideas[index]);
};

void Brain::setIdia(std::string ida, int ind)
{
	if(ind < 0 || ind > 99)
		return ;
	ideas[ind] = ida;
};
