/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:19:24 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/16 23:55:41 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string nam)
{
	Name = nam;
	WeaponB = NULL;
};
HumanB::~HumanB()
{

};
void HumanB::setWeapon(Weapon wb)
{
	WeaponB = &wb;
};
void HumanB::attack(void)
{
	if(WeaponB)
	{
		std::cout << Name << " attacks with their " << WeaponB->getType() <<std::endl;
	}
	else
	{
		std::cout << Name << " attacks with their Hands" << std::endl; 
	}
}; 
