/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:07:25 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/30 16:35:21 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
	private: 
		std::string Name;
	
	public:
		DiamondTrap();
		DiamondTrap(std::string nm);
		DiamondTrap(const DiamondTrap& cp);
		DiamondTrap& operator=(const DiamondTrap& cp);
		~DiamondTrap();
		void	whoAmI();
		void	attack(const std::string& target);
};

#endif