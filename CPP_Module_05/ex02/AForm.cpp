/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:42:33 by hmohamed          #+#    #+#             */
/*   Updated: 2023/11/23 17:42:36 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : grades(0), gradex(0)
{
	std::cout << "default constructor called" << std::endl;
};

AForm::AForm(std::string nm, int grd): Name(nm), grades(grd), gradex(0)
{
	if(grades < 1)
		throw AForm::GradeTooHighException();
	else if(grades > 150)
		throw AForm::GradeTooLowException();
	std::cout << *this << std::endl;
};

AForm::AForm(const AForm& cp) : Name(cp.Name), grades(cp.grades), gradex(cp.gradex)
{
};

AForm& AForm::operator=(const AForm& cp)
{
	if(this != &cp)
	{
		*const_cast<std::string*>(&Name) = cp.Name;
		*const_cast<int*>(&grades) = cp.grades;
	}
	return (*this);
};

AForm::~AForm()
{
	std::cout << "Destructor called" << std::endl;
};

const	std::string AForm::getName(void) const
{
	return this->Name;
};

int AForm::getGrades(void) const
{
	return this->grades;
};
int AForm::getGradex(void) const
{
	return this->gradex;
};
bool AForm::getsign(void) const
{
	return this->sign;
};

std::ostream& operator<<(std::ostream& os, const AForm& op)
{
	os << op.getName() << ", Form grade " << op.getGrades() << ".";
	return (os);
};
