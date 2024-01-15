/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:23:04 by hmohamed          #+#    #+#             */
/*   Updated: 2024/01/15 12:58:16 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {

	Base b;
   std::srand(std::time(0));

    Base* obj = b.generate();
    b.identify(obj);

    delete obj;

    return 0;
}