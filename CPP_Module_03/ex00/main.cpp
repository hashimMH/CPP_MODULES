/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:51:23 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/27 20:27:03 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap hash("hashim");
	hash.attack("yassen");
	hash.takeDamage(5);
	hash.beRepaired(4);
	return (0);
}