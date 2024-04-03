/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:42:26 by hmohamed          #+#    #+#             */
/*   Updated: 2024/04/04 00:39:44 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>
#include<list>
#include <utility>
#include <map>

using namespace std;

class PmergeMe
{
	private:
		PmergeMe();
		PmergeMe(const PmergeMe& cp);
		PmergeMe& operator=(const PmergeMe& cp);
		~PmergeMe();

	public:
		static void excute(char **input);
		static void excutev(char **input);

		
};


#endif
