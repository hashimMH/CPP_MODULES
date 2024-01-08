/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:22:54 by hmohamed          #+#    #+#             */
/*   Updated: 2024/01/08 12:44:21 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base()
{

	std::cout << "default constructor called" << std::endl;
};


Base::~Base()
{
	std::cout << "Destructor called" << std::endl;
};

Base * Base::generate(void)
{
	int randomChoice = std::rand() % 3;
	
    switch (randomChoice) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return nullptr;
    }
};

void Base::identify(Base* p)
{
	 if (dynamic_cast<A*>(p) != nullptr) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p) != nullptr) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p) != nullptr) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "Unknown type" << std::endl;
    }
};

void Base::identify(Base& p)
{
	 try {
        // Try dynamic_cast to identify the actual type
		A& aRef = dynamic_cast<A&>(p);
		(void)aRef;
        //dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    } catch (const std::bad_cast&) {
        try {
			B& bRef = dynamic_cast<B&>(p);
			(void)bRef;
            //dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
        } catch (const std::bad_cast&) {
            try {
				C& cRef = dynamic_cast<C&>(p);
				(void)cRef;
                //dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
            } catch (const std::bad_cast&) {
                std::cout << "Unknown type" << std::endl;
            }
        }
    }
};