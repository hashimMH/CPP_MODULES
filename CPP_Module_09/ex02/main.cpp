/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 03:27:29 by hmohamed          #+#    #+#             */
/*   Updated: 2024/03/28 06:03:53 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) 
{
	if(ac >= 2)
	{

		try
		{
			PmergeMe::excute(++av);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
			
	}
	return 0;
}
