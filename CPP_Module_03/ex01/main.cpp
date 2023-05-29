/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:07:02 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/29 20:42:11 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap hash("hashim");
	hash.attack("yassen");
	hash.takeDamage(5);
	hash.guardGate();
	hash.beRepaired(4);
	return (0);
}