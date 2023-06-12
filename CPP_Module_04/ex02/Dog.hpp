/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:52:06 by hmohamed          #+#    #+#             */
/*   Updated: 2023/06/12 13:06:52 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

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
		void		makeSound() const;
		std::string& getIdia(int index);
		void setIdia(std::string ida, int ind);
	
};

#endif