/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 03:27:48 by hmohamed          #+#    #+#             */
/*   Updated: 2024/03/04 14:52:54 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <typeinfo>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <stdexcept>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    using std::stack<T>::c;

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    iterator begin() { return c.begin(); }
    iterator end() { return c.end(); }

    const_iterator begin() const { return c.begin(); }
    const_iterator end() const { return c.end(); }
};

#endif