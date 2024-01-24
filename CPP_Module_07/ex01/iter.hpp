/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:54:48 by hmohamed          #+#    #+#             */
/*   Updated: 2024/01/24 12:47:00 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T , typename F> 
void iter(T* a, int n, F func)
{
    for (int i = 0; i < n; i++)
                func(a[i]);
}

template <typename T>
void printing(const T& element) {
    std::cout << element << " ";
}


#endif