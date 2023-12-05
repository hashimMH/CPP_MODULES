/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:46:24 by hmohamed          #+#    #+#             */
/*   Updated: 2023/11/23 17:25:54 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : grades(0), gradex(0)
{
	std::cout << "default constructor called" << std::endl;
};

Form::Form(std::string nm, int grd): Name(nm), grades(grd), gradex(0)
{
	if(grades < 1)
		throw Form::GradeTooHighException();
	else if(grades > 150)
		throw Form::GradeTooLowException();
	std::cout << *this << std::endl;
};

Form::Form(const Form& cp) : Name(cp.Name), grades(cp.grades), gradex(cp.gradex)
{
};

Form& Form::operator=(const Form& cp)
{
	if(this != &cp)
	{
		*const_cast<std::string*>(&Name) = cp.Name;
		*const_cast<int*>(&grades) = cp.grades;
	}
	return (*this);
};

Form::~Form()
{
	std::cout << "Destructor called" << std::endl;
};

void Form::beSigned(Bureaucrat &br)
{
	if(br.getGrade() <= grades)
		this->sign = true;
	else
		throw Form::GradeTooLowException();
	std::cout << *this << std::endl;
};
	
const	std::string Form::getName(void) const
{
	return this->Name;
};

int Form::getGrades(void) const
{
	return this->grades;
};
int Form::getGradex(void) const
{
	return this->gradex;
};
bool Form::getsign(void) const
{
	return this->sign;
};

std::ostream& operator<<(std::ostream& os, const Form& op)
{
	os << op.getName() << ", Form grade " << op.getGrades() << ".";
	return (os);
};
