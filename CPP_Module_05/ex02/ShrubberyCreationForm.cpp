/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:28:26 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/05 15:41:48 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : grades(145), gradex(137)
{
	std::cout << "default constructor called" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string nm): Name(nm), grades(145), gradex(137)
{

};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& cp) : Name(cp.Name), grades(cp.grades), gradex(cp.gradex)
{
};

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& cp)
{
	if(this != &cp)
	{
		*const_cast<std::string*>(&Name) = cp.Name;
	}
	return (*this);
};

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor called" << std::endl;
};

const	std::string ShrubberyCreationForm::getName(void) const
{
	return this->Name;
};

int ShrubberyCreationForm::getGrades(void) const
{
	return this->grades;
};
int ShrubberyCreationForm::getGradex(void) const
{
	return this->gradex;
};
bool ShrubberyCreationForm::getsign(void) const
{
	return this->sign;
};

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if(executor.grade < grades && executor.grade < gradex)
	{
		std::ofstream outputFile(target + "_shrubbery");

        if (!outputFile.is_open()) {
            std::cerr << "Error opening file." << std::endl;
            return;
        }

        // Write ASCII trees to the file
        outputFile << "    ccee88oo\n";
        outputFile << " C8O8O8Q8PoOb\n";
        outputFile << "obt8oo88O8oo\n";
        outputFile << "  8ooO8oo8\n";
        outputFile << "  88  88\n";
        outputFile << "  88  88\n";
        outputFile << "  88  88\n";

        std::cout << "Shrubbery created successfully in " << target << "_shrubbery." << std::endl;
	}
	else
		throw RobotomyRequestForm::GradeTooLowException();
	std::cout << *this << std::endl;
};

void ShrubberyCreationForm::beSigned(Bureaucrat &br)
{
	if(br.getGrade() <= grades)
		this->sign = true;
	else
		throw ShrubberyCreationForm::GradeTooLowException();
	std::cout << *this << std::endl;
};

std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& op)
{
	os << op.getName() << ", Form grade " << op.getGrades() << ".";
	return (os);
};
