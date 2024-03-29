/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:42:26 by hmohamed          #+#    #+#             */
/*   Updated: 2024/03/26 02:14:12 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

class RPN
{
	private:
		char *input;
		int first;
		int second;
		stack<int> stk;

	public:
		RPN();
		RPN(std::string av);
		RPN(const RPN& cp);
		RPN& operator=(const RPN& cp);
		~RPN();
		void cal(char op);
		void excute(void);

		
};


#endif
