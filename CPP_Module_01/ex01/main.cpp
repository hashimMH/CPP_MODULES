/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:05:14 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/16 20:30:02 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *z;
	
	z = zombieHorde(3, "Zombie 1");
	
	for (int i = 0; i < 3; i++)
	{
		z[i].announce();
	}
	delete[] z;
	
	return (0);
};