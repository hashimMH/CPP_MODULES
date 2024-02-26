/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 03:27:48 by hmohamed          #+#    #+#             */
/*   Updated: 2024/01/31 14:45:28 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include<iterator>
#include  <algorithm>
#include <typeinfo>

class eerr : public std::exception 
{

	const char* what() const throw()
	{
	    return "the number not found";
	}
};

template <typename T> 
void easyfind (T &a, int n)
{

	typename T::iterator it = std::find(a.begin(), a.end(), n);

	if (it == a.end())
		throw eerr();
	std::cout << *it << std::endl;
}


#endif