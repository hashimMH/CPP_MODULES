/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:19:26 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/16 23:49:21 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string Name;
		Weapon &WeaponA;

	public:
		HumanA(std::string nam, Weapon &wb);
		~HumanA();
		 void attack(void); 
};