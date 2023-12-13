/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:28:26 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/13 14:20:30 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : grades(145), gradex(137)
{
	std::cout << "default constructor called" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string nm): AForm(), Name(nm), grades(145), gradex(137)
{

};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& cp) : AForm(), Name(cp.Name), grades(cp.grades), gradex(cp.gradex)
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

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	if(executor.getGrade() < grades && executor.getGrade() < gradex)
	{
		std::ostringstream os;
		std::string oss;
		os << executor.getName() << "_shrubbery";
		oss = os.str();
		std::ofstream outputFile(oss.c_str());

        if (!outputFile.is_open()) {
            std::cerr << "Error opening file." << std::endl;
            return;
        }

        // Write ASCII trees to the file
    	outputFile << "\n";
   		outputFile << "      *\n";
    	outputFile << "     /|\\\n";
    	outputFile << "    /*|O\\\n";
    	outputFile << "   /*/|\\*\n";
    	outputFile << "  /X/O|*\\\n";
    	outputFile << " /*/X/|\\O\\\n";
    	outputFile << "/O/X/0|*\\X\\\n";
    	outputFile << "      |O|\n";
    	outputFile << "      |X|\n";
    	outputFile << "      |O|\n";
		outputFile.close();

		std::cout << "Shrubbery created successfully in " << executor.getName() << "_shrubbery." << std::endl;
	}
	else
		throw GradeTooLowException();
	std::cout << *this << std::endl;
};

void ShrubberyCreationForm::beSigned(Bureaucrat &br)
{
	if(br.getGrade() <= grades)
		this->sign = true;
	else
		throw GradeTooLowException();
	std::cout << *this << std::endl;
};

std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& op)
{
	os << op.getName() << ", Form grade " << op.getGrades() << ".";
	return (os);
};
