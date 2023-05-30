/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:06:38 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/30 18:49:00 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	
	public:
		ScavTrap();
		ScavTrap(std::string nm);
		ScavTrap(const ScavTrap& cp);
		ScavTrap& operator=(const ScavTrap& cp);
		~ScavTrap();
		void	guardGate();
		void	attack(const std::string& target);
};

#endif