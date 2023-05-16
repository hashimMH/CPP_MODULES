/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:19:37 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/16 23:22:31 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

#ifndef WEAPON_HPP
#define WEAPON_HPP


class Weapon
{
	private:
		std::string type;

	public:
		Weapon(std::string wp);
		~Weapon();
		const std::string getType(void);
		void setType(std::string tp);
	Weapon(void);
};

#endif 