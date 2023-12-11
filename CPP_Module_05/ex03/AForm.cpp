/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:42:33 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/11 21:08:53 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : grades(10), gradex(10)
{
	std::cout << "default constructor called" << std::endl;
};

AForm::AForm(std::string nm, int grd, int grdx): Name(nm), grades(grd), gradex(grdx)
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
void AForm::execute(Bureaucrat const & executor) const
{
	if(executor.getGrade() < grades && executor.getGrade() < gradex)
	{
        std::cout << "Aform sign successfully " << std::endl;
	}
	else
		throw AForm::GradeTooLowException();
	std::cout << *this << std::endl;
};

std::ostream& operator<<(std::ostream& os, const AForm& op)
{
	os << op.getName() << ", Form grade " << op.getGrades() << ".";
	return (os);
};

const char* GradeTooHighException::what() const throw()
{
    return "Grade Too High";
}

const char* GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

