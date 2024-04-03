/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:42:26 by hmohamed          #+#    #+#             */
/*   Updated: 2024/04/04 03:31:44 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <stack>
#include <cstring>
#include <cstdlib>

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
