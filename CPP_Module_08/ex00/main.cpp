/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 03:27:29 by hmohamed          #+#    #+#             */
/*   Updated: 2024/01/31 14:44:33 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void ) 
{

	std::vector<int> vec;

	// push 5 values into the vector
	   for(int i = 0; i < 5; i++) {
	      vec.push_back(i);
	   }
	try 
	{
		easyfind(vec, 6);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
