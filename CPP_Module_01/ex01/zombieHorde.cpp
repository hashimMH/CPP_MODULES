/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:02:07 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/16 20:26:25 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
	Zombie *zomb = new Zombie[N];

	for(int i = 0; i < N ; i++)
	{
		zomb[i].setName(name);
	}
	
	return (zomb);
};