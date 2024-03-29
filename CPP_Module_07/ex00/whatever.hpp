/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:59:20 by hmohamed          #+#    #+#             */
/*   Updated: 2024/01/24 11:08:31 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T> 
void swap (T &a, T &b) {
	T c(a);
	
	a = b;
	b = c;
}

template <typename T> 
T min (T &a, T &b) {
	return (a < b) ? a : b;
}

template <typename T> 
T max (T &a, T &b) {
	return (a > b) ? a : b;
}


#endif