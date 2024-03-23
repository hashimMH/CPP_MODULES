/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:42:21 by hmohamed          #+#    #+#             */
/*   Updated: 2024/03/23 05:13:18 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


void parseLine(const string& line, map<string, string>& keyValueMap) {
   
	//cout << line << endl;
    size_t pos = line.find(',');
    if (pos != string::npos) {
        string key = line.substr(0, pos);
        string value = line.substr(pos + 1);
        keyValueMap[key] = value;
    }
}

RPN::RPN()
{
	
};

RPN::RPN(std::string av)
{
	(void)first;
	(void)second;
    const char* input = av.c_str();
    
    // Tokenize the input string
    char* token = strtok(const_cast<char*>(input), " ");
    
    // Iterate through the tokens and push integers onto the stack
    while (token != NULL) {
        int num = atoi(token);
        stk.push(num);
        token = strtok(NULL, " ");
    }
    
    // Print the elements of the stack
    while (!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;
};

RPN::~RPN()
{
	
};
