/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:59:20 by hmohamed          #+#    #+#             */
/*   Updated: 2024/01/23 14:00:28 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>

class whatever
{
	public:
		whatever();
		whatever(const whatever& cp);
		whatever& operator=(const whatever& cp);
		~whatever();
		
		static void convert(std::string str);
};


#endif