/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:40:58 by hmohamed          #+#    #+#             */
/*   Updated: 2023/06/08 12:15:26 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{
	const Animal *meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const WrongAnimal *metaw = new WrongAnimal();
	const WrongAnimal* iw = new WrongCat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound! 
	j->makeSound();
	meta->makeSound();

	std::cout << iw->getType() << " " << std::endl;
	iw->makeSound(); //will output the cat sound! 
	metaw->makeSound();
	
	delete meta;
    delete j;
    delete i;
	delete metaw;
    delete iw;

	return 0; 
}