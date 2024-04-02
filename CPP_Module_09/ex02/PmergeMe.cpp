/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:42:21 by hmohamed          #+#    #+#             */
/*   Updated: 2024/04/02 07:17:25 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void insert(list<pair<int, int> > &pstk, list <int> &stk)
{
	for (list<pair<int, int> >::iterator it = pstk.begin(); it != pstk.end(); ++it)
	{
		stk.push_back(it->first);
	}
	//stk.sort(); // Sort the list after inserting first elements

	for (list<pair<int, int> >::iterator it = pstk.begin(); it != pstk.end(); ++it)
	{
		list<int>::iterator ins_pos = stk.begin();
		while (ins_pos != stk.end() && *ins_pos < it->second)
			++ins_pos;
		stk.insert(ins_pos, it->second);
	}
}

void merge(list<pair<int, int> > &stk, list<pair<int, int> > &left, list<pair<int, int> > &right)
{
	list<pair<int, int> >::iterator itl = left.begin();
	list<pair<int, int> >::iterator itr = right.begin();
	list<pair<int, int> >::iterator itstk = stk.begin();

	while (itl != left.end() && itr != right.end())
	{
		if (itl->first <= itr->first)
		{
			*itstk = *itl;
			++itl;
		}
		else
		{
			*itstk = *itr;
			++itr;
		}
		++itstk;
	}

	while (itl != left.end())
	{
		*itstk = *itl;
		++itl;
		++itstk;
	}

	while (itr != right.end())
	{
		*itstk = *itr;
		++itr;
		++itstk;
	}
}

void sort(list<pair<int, int> > &stk, list<pair<int, int> >::iterator half)
{

	if (stk.size() == 1)
		return ;

	list<pair<int, int> > left(stk.begin(), half);
	list<pair<int, int> > right(half, stk.end());

	list<pair<int, int> >::iterator halfl = left.begin();
	advance(halfl, left.size() / 2);
	sort(left, halfl);

	list<pair<int, int> >::iterator halfr = right.begin();
	advance(halfr, right.size() / 2);
	sort(right, halfr);

	// for (list<pair<int, int> >::iterator its = left.begin(); its != left.end(); ++its)
	// {
	// 	cout << its->first << " h h h h " << its->second << endl;
	// }
	// cout<<"+++++++++++++++++++++++++++++++++++++++++"<<endl;
	// for (list<pair<int, int> >::iterator its = right.begin(); its != right.end(); ++its)
	// {
	// 	cout << its->first << " f f f f " << its->second << endl;
	// }
	merge(stk, left, right);
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
	int odd = -1;
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

	if(stk.size() % 2 != 0)
	{
		odd = *stk.begin();
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
	

	cout << "Pairs after sorting:" << endl;
	for (list<pair<int, int> >::iterator it = pstk.begin(); it != pstk.end(); ++it)
	{
		cout << "Pair: (" << it->first << ", " << it->second << ")" << endl;
	}
	
	stk.clear();
	insert(pstk, stk);
	if (odd >= 0)
	{
		list<int>::iterator ins_pos = stk.begin();
		while (ins_pos != stk.end() && *ins_pos < odd)
			++ins_pos;
		stk.insert(ins_pos, odd);
	}

	cout<<"after inserting ++++++"<<endl;
	for (list<int>::iterator its = stk.begin(); its != stk.end(); ++its)
	{
		cout << *its << " "<<endl;
	}
	cout << endl;
}