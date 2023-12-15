/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:32:38 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/15 19:45:53 by hmohamed         ###   ########.fr       */
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

void Bureaucrat::signForm(Form &form)
{
	
	if(form.getsign() == true)
		std::cout << getName() << " signed " << form.getName() << std::endl;
	else
		std::cout << getName() << " couldn’t sign " << form.getName() << std::endl;
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
		throw Bureaucrat::GradeTooHighException();
	else if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << *this << std::endl;
};

void Bureaucrat::decrement(void)
{
	this->grade++;
	if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << *this << std::endl;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& op)
{
	os << op.getName() << ", bureaucrat grade " << op.getGrade() << ".";
	return (os);
};

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade Too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}