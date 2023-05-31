/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:40:58 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/31 18:41:48 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
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
        delete animals[i];
    }

    return 0;
}