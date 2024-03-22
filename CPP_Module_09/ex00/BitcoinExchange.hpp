/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:42:26 by hmohamed          #+#    #+#             */
/*   Updated: 2024/03/21 04:27:13 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

class BitcoinExchange
{
	private:

	public:
		BitcoinExchange();
		BitcoinExchange(std::string inputFile);
		~BitcoinExchange();

		
};


#endif
