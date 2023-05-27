/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:51:19 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/27 20:28:55 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
	private:
		std::string Name;
		int HitPoints;
		int EnergyPoints;
		int AttackDamage;
		
	public:
		ClapTrap(std::string nm);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};