/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 21:19:05 by hmohamed          #+#    #+#             */
/*   Updated: 2023/06/03 20:08:15 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

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

#endif