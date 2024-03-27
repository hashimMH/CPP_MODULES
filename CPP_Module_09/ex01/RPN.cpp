/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:42:21 by hmohamed          #+#    #+#             */
/*   Updated: 2024/03/26 02:45:43 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


void RPN::cal(char op)
{
	int res;
	
	if(!stk.empty())
	{
		second = stk.top();
		stk.pop();
		if(!stk.empty())
		{
			first = stk.top();
			stk.pop();
		}
		else
			second = 0;
	}

	if(op == '+')
	{
		res = first + second;
	}
	else if(op == '-')
	{
		res = first - second;
	}
	else if(op == '*')
	{
		res = first * second;
	}
	else if(op == '/')
	{
		res = first / second;
	}
	stk.push(res);
}

RPN::RPN()
{
	
};

RPN::RPN(std::string av)
{
    input = const_cast<char*>(av.c_str());
    

};

RPN::RPN(const RPN& cp): input(cp.input)
{
	std::cout << "Copy constructor called" << std::endl;
};

RPN& RPN::operator=(const RPN& cp)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &cp)
	{
		input = cp.input;
	}
	return (*this);
};


RPN::~RPN()
{
	
};

void RPN::excute(void)
{
	    // Tokenize the input string
    char* token = strtok(input, " ");
    
	//cout << token +3 <<endl;
    // Iterate through the tokens and push integers onto the stack
    while (token != NULL) {
		if(strlen(token) > 1)
			throw std::logic_error ("Error");
		if(! isdigit(token[0]) && token[0] != '/' 
			&& token[0] != '+' &&token[0] != '*' &&token[0] != '-')
		{
			throw std::logic_error ("Error");
		};
		
		if(isdigit(token[0]))
		{
			int num;
        	num = atoi(token);
			stk.push(num);
		}
		else
		{
			char z = token[0];
			cal (z);
			
		}
        token = strtok(NULL, " ");
    }
    
    // Print the elements of the stack
    if (stk.size() == 1) {
        cout << stk.top();
        stk.pop();
    }
	else{
		throw std::logic_error ("Error");
	}
    cout << endl;
}
