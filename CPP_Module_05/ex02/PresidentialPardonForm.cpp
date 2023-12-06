/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:14:53 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/06 23:02:07 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : grades(25), gradex(5)
{
	std::cout << "default constructor called" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(std::string nm): Name(nm), grades(25), gradex(5)
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

void PresidentialPardonForm::beSigned(Bureaucrat &br) const
{
	if(br.getGrade() <= grades)
		this->sign = true;
	else
		throw PresidentialPardonForm::GradeTooLowException();
	std::cout << *this << std::endl;
};

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > getGrades())
	{
		std::cout << "Cannot execute, form not signed." << std::endl;
		throw PresidentialPardonForm::GradeTooLowException();
		return;
	}
	else if (executor.getGrade() > getGradex())
	{
		std::cout << "Cannot execute, form excute grade is too low." << std::endl;
		throw PresidentialPardonForm::GradeTooLowException();
		return;
	}
	std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
};


std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm& op)
{
	os << op.getName() << ", Form grade " << op.getGrades() << ".";
	return (os);
};
