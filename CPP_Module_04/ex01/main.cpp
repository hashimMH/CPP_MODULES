/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:40:58 by hmohamed          #+#    #+#             */
/*   Updated: 2023/06/14 19:39:06 by hmohamed         ###   ########.fr       */
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

	//  Animal* animals[10];

    // for (int i = 0; i < 5; i++) {
    //     animals[i] = new Dog();
    // }

    // for (int i = 5; i < 10; i++) {
    //     animals[i] = new Cat();
    // }

 	// for (int i = 0; i < 10; i++) {
    //     animals[i]->makeSound();
    // }
    // for (int i = 0; i < 10; i++) {
		

    //    // delete animalCopy;
    //     delete animals[i];
    // }

	//  Animal* animalCopy = [i];
    //     animalCopy->makeSound();

	Dog *a = new Dog();
	a->setIdia("hash", 0);
	std::cout<< a->getIdia(0)<<std::endl;
	// Dog b(*a);
	
	Dog b;
	b = *a;
	delete a;
	b.makeSound();
	std::cout<< b.getIdia(0)<<std::endl;
	// Dog b;
	// Dog tmp = b;
    return 0;
}