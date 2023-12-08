/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:32:38 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/08 16:53:17 by hmohamed         ###   ########.fr       */
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
		throw GradeTooHighException();
	else if(grade > 150)
		throw GradeTooLowException();
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
	std::cout << "fuckkkkkkkkk" << std::endl;
	if(form.getsign() == true)
		std::cout << getName() << " signed " << form.getName() << std::endl;
	else
		std::cout << getName() << " couldn’t sign" << form.getName() << std::endl;
};

const	std::string Bureaucrat::getName(void) const
{
	return this->Name;
};
int Bureaucrat::getGrade(void) const
{
	return this->grade;
};

void Bureaucrat::increment(void)
{
	this->grade--;
	if(grade < 1)
		throw GradeTooHighException();
	else if(grade > 150)
		throw GradeTooLowException();
	std::cout << *this << std::endl;
};

void Bureaucrat::decrement(void)
{
	this->grade++;
	if(grade < 1)
		throw GradeTooHighException();
	else if(grade > 150)
		throw GradeTooLowException();
	std::cout << *this << std::endl;
};


void Bureaucrat::executeForm(const AForm &form) const
{
	try
	{
		form.execute(*this);
		std::cout << Name << " executes " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << Name << " cannot execute " << form.getName() << " because "
				  << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& op)
{
	os << op.getName() << ", bureaucrat grade " << op.getGrade() << ".";
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