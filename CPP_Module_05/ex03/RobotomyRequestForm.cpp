/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:29:45 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/11 21:09:15 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : grades(72), gradex(45)
{
	std::cout << "default constructor called" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(std::string nm): Name(nm), grades(72), gradex(45)
{

};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& cp) : Name(cp.Name), grades(cp.grades), gradex(cp.gradex)
{
	
};

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& cp)
{
	if(this != &cp)
	{
		*const_cast<std::string*>(&Name) = cp.Name;
	}
	return (*this);
};

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor called" << std::endl;
};

const	std::string RobotomyRequestForm::getName(void) const
{
	return this->Name;
};

int RobotomyRequestForm::getGrades(void) const
{
	return this->grades;
};
int RobotomyRequestForm::getGradex(void) const
{
	return this->gradex;
};
bool RobotomyRequestForm::getsign(void) const
{
	return this->sign;
};

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > grades || executor.getGrade() > gradex)
	{
		throw RobotomyRequestForm::GradeTooLowException();
		std::cout << "Cannot execute, form not signed." << std::endl;
		return;
	}

	std::cout << "Making drilling noises..." << std::endl;
	
	std::srand(std::time(0));
	int result = std::rand() % 2;

	if (result == 0)
	{
		std::cout << "Robotomy failed. " << executor.getName() << " is still the same." << std::endl;
	}
	else
	{
		std::cout << executor.getName() << " has been robotomized successfully!" << std::endl;
	}
};

void RobotomyRequestForm::beSigned(Bureaucrat &br) const
{
	if(br.getGrade() <= grades)
		this->sign = true;
	else
		throw RobotomyRequestForm::GradeTooLowException();
	std::cout << *this << std::endl;
};


std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm& op)
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
