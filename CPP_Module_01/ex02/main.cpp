/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:04:31 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/16 23:57:57 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int main ()
{
	std::string A = "HI THIS IS BRAIN";
	std::string *stringPTR = &A;
	std::string &stringREF = A;

	std::cout << &A << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << A << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	
	return (0);
}