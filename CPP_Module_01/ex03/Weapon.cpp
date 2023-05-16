/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:19:34 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/16 23:21:24 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string wp)
{
	type = wp;
};
Weapon::~Weapon()
{
	
};
const std::string Weapon::getType(void)
{
	return (type);
};
void Weapon::setType(std::string tp)
{
	type = tp;
};