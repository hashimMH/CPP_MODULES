/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:09:49 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/16 22:44:41 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string nvalue)
{
	Name = nvalue;
};
Zombie::~Zombie()
{
	std::cout<< "Zombie destructor: " << Name << " is Dead" << std::endl;
};

void Zombie::announce(void)
{
	std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}