/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:40:58 by hmohamed          #+#    #+#             */
/*   Updated: 2023/06/08 13:05:28 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{
	// const Animal *meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound! 
	// j->makeSound();
	// meta->makeSound();

	
	// delete meta;
    // delete j;
    // delete i;

	// return 0; 

	 Animal* animals[10];

    for (int i = 0; i < 5; i++) {
        animals[i] = new Dog();
    }

    for (int i = 5; i < 10; i++) {
        animals[i] = new Cat();
    }

 	for (int i = 0; i < 10; i++) {
        animals[i]->makeSound();
    }
    for (int i = 0; i < 10; i++) {
		 Animal* animalCopy = animals[i];
        animalCopy->makeSound();

       // delete animalCopy;
        delete animals[i];
    }

    return 0;
}