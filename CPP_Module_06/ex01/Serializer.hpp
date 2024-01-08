/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:48:09 by hmohamed          #+#    #+#             */
/*   Updated: 2024/01/08 14:56:19 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>


struct Data 
{
	int n;

	 Data(int val) : n(val) {}
};

class Serializer
{
	
	public:
		Serializer();
		Serializer(const Serializer& cp);
		Serializer& operator=(const Serializer& cp);
		~Serializer();

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
		
};

#endif