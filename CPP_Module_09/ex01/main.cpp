/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 03:27:29 by hmohamed          #+#    #+#             */
/*   Updated: 2024/03/26 01:58:05 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) 
{
	if(ac == 2)
	{

		try
		{
			RPN bt(av[1]);
			bt.excute();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
			
	}
	return 0;
}
