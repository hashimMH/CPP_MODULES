/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:14:53 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/03 21:03:05 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : grades(25), gradex(5)
{
	std::cout << "default constructor called" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(std::string nm, int grd): Name(nm), grades(25), gradex(5)
{
	
};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& cp) : Name(cp.Name), grades(cp.grades), gradex(cp.gradex)
{
};

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& cp)
{
	if(this != &cp)
	{
		*const_cast<std::string*>(&Name) = cp.Name;
	}
	return (*this);
};

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor called" << std::endl;
};

const	std::string PresidentialPardonForm::getName(void) const
{
	return this->Name;
};

int PresidentialPardonForm::getGrades(void) const
{
	return this->grades;
};
int PresidentialPardonForm::getGradex(void) const
{
	return this->gradex;
};
bool PresidentialPardonForm::getsign(void) const
{
	return this->sign;
};

std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm& op)
{
	os << op.getName() << ", Form grade " << op.getGrades() << ".";
	return (os);
};
