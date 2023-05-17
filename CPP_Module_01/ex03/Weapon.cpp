/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:19:34 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/17 21:46:34 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon():type("knife")
{
	
};

Weapon::Weapon(const std::string& weaponType) : type(weaponType) 
{
	
};
Weapon::~Weapon()
{
	
};
const std::string& Weapon::getType() const 
{
	return type;
};

void Weapon::setType(const std::string& newType)
{
	type = newType;
};