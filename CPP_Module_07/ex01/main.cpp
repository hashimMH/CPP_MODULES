/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:54:17 by hmohamed          #+#    #+#             */
/*   Updated: 2024/01/24 12:48:43 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main ()
{
	int arr [] = {0 , 2 , 6 , 5 , 8};
	std::string ar [] = {"hash" , "jak" , "sdaj" , "sdfj" , "dskfjh"};
	
	iter(arr, 5, printing<int>);
    std::cout << std::endl;

	iter(ar, 5, printing<std::string>);
    std::cout << std::endl;

	return (0);
}
