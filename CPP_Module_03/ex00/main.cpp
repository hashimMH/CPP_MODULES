/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:51:23 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/30 19:48:08 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << "\033[34mConstructor\033[0m" << std::endl;
	ClapTrap hash("hashim");
	std::cout << "\033[34mTesting\033[0m" << std::endl;
	hash.attack("yassen");
	hash.takeDamage(5);
	hash.beRepaired(4);
	std::cout << "\033[34mDistructor\033[0m" << std::endl;
	return (0);
}