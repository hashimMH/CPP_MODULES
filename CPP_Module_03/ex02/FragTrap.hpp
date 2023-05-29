/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 21:19:05 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/29 21:20:11 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	
	public:
		FragTrap();
		FragTrap(std::string nm);
		FragTrap(const FragTrap& cp);
		FragTrap& operator=(const FragTrap& cp);
		~FragTrap();
		void	highFivesGuys(void);
		void	attack(const std::string& target);
};
