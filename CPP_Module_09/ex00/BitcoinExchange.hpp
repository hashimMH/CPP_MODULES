/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:42:26 by hmohamed          #+#    #+#             */
/*   Updated: 2024/03/26 02:05:50 by hmohamed         ###   ########.fr       */
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
		BitcoinExchange();
		BitcoinExchange(std::string inputFile);
		BitcoinExchange(const BitcoinExchange& cp);
		BitcoinExchange& operator=(const BitcoinExchange& cp);
		~BitcoinExchange();
	public:
		static void excute(std::string inputFile);

		
};


#endif
