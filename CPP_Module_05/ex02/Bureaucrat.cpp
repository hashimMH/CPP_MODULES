/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:32:38 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/06 22:45:06 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

	std::cout << "default constructor called" << std::endl;
};

Bureaucrat::Bureaucrat(std::string nm, int grd): Name(nm), grade(grd)
{
	if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << *this << std::endl;
};

Bureaucrat::Bureaucrat(const Bureaucrat& cp) : Name(cp.Name), grade(cp.grade)
{
};
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& cp)
{
	if(this != &cp)
	{
		this->grade = cp.grade;
	}
	return (*this);
};

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
};

void Bureaucrat::signForm(AForm &form)
{
	
	if(form.getsign() == true)
		std::cout << getName() << " signed " << form.getName() << std::endl;
	else
		std::cout << getName() << " couldn’t sign" << form.getName() << " because" << " the" << std::endl;
};

const	std::string Bureaucrat::getName(void) const
{
	return this->Name;
};
int Bureaucrat::getGrade(void) const
{
	return this->grade;
};

void Bureaucrat::executeForm(const AForm &form) const
{
	form.execute(*this);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& op)
{
	os << op.getName() << ", bureaucrat grade " << op.getGrade() << ".";
	return (os);
};
