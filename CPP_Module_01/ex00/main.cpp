/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:43:23 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/16 19:55:25 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *z;
	
	z = newZombie("Zombie 1");
	z->announce();
	randomChump("Zombie 2");
	delete z;
	return (0);
};