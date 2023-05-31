/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:30:00 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/31 17:39:59 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain& cp);
		Brain& operator=(const Brain& cp);
		~Brain();
};

#endif