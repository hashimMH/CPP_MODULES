/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:51:19 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/29 21:03:15 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
	protected:
		std::string Name;
		int HitPoints;
		int EnergyPoints;
		int AttackDamage;
		
	public:
		ClapTrap();
		ClapTrap(std::string nm);
		ClapTrap(const ClapTrap& cp);
		ClapTrap& operator=(const ClapTrap& cp);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};