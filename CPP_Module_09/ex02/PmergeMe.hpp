/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:42:26 by hmohamed          #+#    #+#             */
/*   Updated: 2024/03/26 02:49:38 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

class PmergeMe
{
	private:
		char *input;

	public:
		PmergeMe();
		PmergeMe(std::string av);
		PmergeMe(const PmergeMe& cp);
		PmergeMe& operator=(const PmergeMe& cp);
		~PmergeMe();

		
};


#endif
