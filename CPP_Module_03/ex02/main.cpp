/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:07:02 by hmohamed          #+#    #+#             */
/*   Updated: 2023/06/04 19:05:09 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	std::cout << "\033[34mConstructor\033[0m" << std::endl;
	FragTrap hash("hashim");
	std::cout << "\033[34mTesting\033[0m" << std::endl;
	hash.attack("yassen");
	hash.takeDamage(5);
	hash.highFivesGuys();
	hash.beRepaired(4);
		std::cout << "\033[34mDistructor\033[0m" << std::endl;
	
	return (0);
}