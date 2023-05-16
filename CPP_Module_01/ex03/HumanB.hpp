/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:19:20 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/16 23:34:06 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string Name;
		Weapon *WeaponB;

	public:
		HumanB(std::string nam);
		~HumanB();
		void setWeapon(Weapon wb);
		void attack(void); 
};