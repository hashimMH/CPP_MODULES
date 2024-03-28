/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:42:21 by hmohamed          #+#    #+#             */
/*   Updated: 2024/03/28 06:17:44 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void sort(list<pair<int, int> > &stk, list<pair<int, int> >::iterator half)
{

	if (stk.size() == 1)
		return ;

	list<pair<int, int> > left(stk.begin(), half);
	list<pair<int, int> > right(++half, stk.end());

	for (list<pair<int, int> >::iterator its = left.begin(); its != left.end(); ++its)
	{
		cout << its->first << " h h h h " << its->second << endl;
	}
	cout<<"+++++++++++++++++++++++++++++++++++++++++"<<endl;
}

PmergeMe::PmergeMe()
{
	
};


PmergeMe::PmergeMe(const PmergeMe& cp)
{
	(void)cp;
	std::cout << "Copy constructor called" << std::endl;
};

PmergeMe& PmergeMe::operator=(const PmergeMe& cp)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &cp)
	{
		(void)cp;
	}
	return (*this);
};


PmergeMe::~PmergeMe()
{
	
};

void PmergeMe::excute(char **input)
{
	// int a = 0;
	stringstream ss;
	list<int> stk;
	list<std::pair<int, int> > pstk;
	while (*input)
		ss << *input++ << " ";
	std::string tmp;
	while (ss >> tmp)
	{
		int num;
		num = atoi(const_cast<char *>(tmp.c_str()));
		//cout << num << " ";
		stk.push_back(num);
		//cout << tmp << endl;
	}
	// Tokenize the input string
	// char **token = split()
	// char *token = strtok(input, " ");

	// cout << token +3 <<endl;
	//  Iterate through the tokens and push integers onto the stack
	// while (input[a] != NULL)
	// {
	// 	int num;
	// 	num = atoi(const_cast<char *> input[a]);
	// 	cout << num << " ";
	// 	stk.push_back(num);
	// 	a++;
	// }

	if(stk.size() % 2 != 0)
	{
		int odd = *stk.begin();
		cout << "the odd is : " << odd << endl;
		stk.pop_front();
	}

	cout << "hihihihih" << endl;

	// Iterate over the list and create pairs of adjacent numbers
	for (list<int>::iterator itsd = stk.begin(); itsd != stk.end(); ++itsd)
	{
		pstk.push_back(std::make_pair(*itsd, *(std::next(itsd))));
		itsd = next(itsd);
	}

	// Display the pairs
	for (list<pair<int, int> >::iterator it = pstk.begin(); it != pstk.end(); ++it)
	{
		std::cout << "Pair: (" << it->first << ", " << it->second << ")" << std::endl;
	}

	list <pair<int ,int> >::iterator half = pstk.begin();
	advance(half, pstk.size() / 2); 
	sort(pstk , half);
	
	for (list<int>::iterator its = stk.begin(); its != stk.end(); ++its)
	{
		cout << *its << " "<<endl;
	}
	cout << endl;
}