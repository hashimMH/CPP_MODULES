/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:19:37 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/17 21:48:58 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "iostream"

class Weapon
{
	private:
		std::string type;

	public:
		Weapon(void);
		Weapon(const std::string& weaponType);
		~Weapon();
	    const std::string& getType() const;
	    void setType(const std::string& newType);
};

#endif 