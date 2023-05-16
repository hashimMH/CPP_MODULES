/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:02:49 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/16 22:44:10 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie 
{
	private:
		std::string Name;
		
	public:	
		Zombie();
		~Zombie();
		void setName(std::string sname);
		void announce( void );
};

Zombie*    zombieHorde( int N, std::string name );