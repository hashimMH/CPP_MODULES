/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:06:38 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/16 22:44:35 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie 
{
	private:
		std::string Name;
		
	public:	
		Zombie();
		Zombie(std::string nvalue);
		~Zombie();
		void announce( void );
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );
