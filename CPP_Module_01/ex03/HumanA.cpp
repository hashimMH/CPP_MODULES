/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:19:29 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/16 23:49:16 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nam, Weapon &wb) : Name(nam), WeaponA(wb)
{

};
HumanA::~HumanA()
{

};
void HumanA::attack(void)
{
	std::cout << Name << " attacks with their " << WeaponA.getType() <<std::endl;
}; 