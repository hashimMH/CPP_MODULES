/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:46:15 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/08 16:35:32 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	index = 0;
};

Contact::~Contact()
{
	
};

void Contact::setFname(std::string fname)
{
	FirstName = fname;
};

void Contact::setLname(std::string lname)
{
	LastName = lname;
};

void Contact::setNickname(std::string nickname)
{
	Nickname = nickname;
};

void Contact::setPhoneNumber(std::string phn)
{
	PhoneNumber = phn;
};

void Contact::setDarkSecret(std::string darks)
{
	DarkSecret = darks;
};

void Contact::setIndex(int ind)
{
	index = ind;
};

std::string Contact::getFname(void)
{
	return (FirstName);
};

std::string Contact::getLname(void)
{
	return (LastName);
};

std::string Contact::getNickname(void)
{
	return (Nickname);
};

std::string Contact::getPhoneNumber(void)
{
	return (PhoneNumber);
};

std::string Contact::getDarkSecret(void)
{
	return (DarkSecret);
};

int Contact::getIndex(void)
{
	return (index);
};