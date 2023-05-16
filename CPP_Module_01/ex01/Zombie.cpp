/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:04:58 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/16 22:44:25 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	
};
Zombie::~Zombie()
{
	std::cout<< "Zombie destructor: " << Name << " is Dead" << std::endl;
};

void Zombie::setName(std::string sname)
{
	Name = sname;
}
void Zombie::announce(void)
{
	std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}