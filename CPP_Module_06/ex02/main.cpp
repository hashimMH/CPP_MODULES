/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:23:04 by hmohamed          #+#    #+#             */
/*   Updated: 2024/01/08 12:24:38 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {

	Base b;
    std::srand(std::time(0));  // Seed for random number generation

    Base* obj = b.generate();
    b.identify(obj);

    delete obj;  // Clean up dynamically allocated memory

    return 0;
}