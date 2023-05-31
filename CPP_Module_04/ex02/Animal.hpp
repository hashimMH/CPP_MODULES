/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:43:01 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/31 18:44:59 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
		Animal();
		Animal(const Animal& cp);
		Animal& operator=(const Animal& cp);
	public:
		virtual ~Animal();
		virtual std::string	getType() const;
		virtual void	makeSound() const = 0;
};

#endif