/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:07:02 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/29 21:24:35 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap hash("hashim");
	hash.attack("yassen");
	hash.takeDamage(5);
	hash.highFivesGuys();
	hash.beRepaired(4);
	return (0);
}