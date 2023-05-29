/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:06:38 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/29 20:58:01 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
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
