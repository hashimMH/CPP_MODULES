/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:19:20 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/17 21:32:14 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string Name;
		Weapon *WeaponB;

	public:
		HumanB(const std::string& humanName);
		~HumanB();
    	void setWeapon(Weapon wb);
		void attack(void); 
};