/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:52:11 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/31 18:49:41 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *br;
	public:
		Cat();
		Cat(const Cat& cp);
		Cat& operator=(const Cat& cp);
		~Cat();
		void	makeSound() const;
};