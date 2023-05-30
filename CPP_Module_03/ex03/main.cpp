/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:07:02 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/30 19:49:26 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{

	std::cout << "\033[34mConstructor\033[0m" << std::endl;
	DiamondTrap a;
	DiamondTrap b("Hashim");
	DiamondTrap c(a);

	std::cout << "\033[34mTesting\033[0m" << std::endl;
	a.whoAmI();
	a.attack("some super random dude");
	b.whoAmI();
	b.attack("Yaseen");
	c.whoAmI();
	std::cout << "\033[34mDistructor\033[0m" << std::endl;
	return (0);
}