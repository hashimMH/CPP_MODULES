/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:30:04 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/31 17:50:27 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
};

Brain::Brain(const Brain& cp)
{
	*ideas = *cp.ideas;
};

Brain& Brain::operator=(const Brain& cp)
{
	*ideas = *cp.ideas;
	return (*this);
};

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
};
