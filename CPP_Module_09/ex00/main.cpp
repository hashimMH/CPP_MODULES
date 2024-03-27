/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 03:27:29 by hmohamed          #+#    #+#             */
/*   Updated: 2024/03/26 02:11:11 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av) 
{
	if(ac == 2)
	{
		//BitcoinExchange bt(av[1]);
		BitcoinExchange::excute(av[1]);
	}
	else
	{
		cerr <<"Error: Number of arg is not correct." << endl;
	}
	return 0;
}
