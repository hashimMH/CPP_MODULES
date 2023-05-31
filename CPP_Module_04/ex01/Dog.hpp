/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:52:06 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/31 18:17:18 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *br;
	public:
		Dog();
		Dog(const Dog& cp);
		Dog& operator=(const Dog& cp);
		~Dog();
	
};