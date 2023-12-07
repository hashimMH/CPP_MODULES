/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:32:30 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/08 01:07:41 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main()
{
	// try
	// {
	// 	Bureaucrat a("hash", 5);
	// 	ShrubberyCreationForm fr("hashim");
	// 	fr.execute(a);
	// }
	// catch(std::exception & e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	// try
	// {
	// 	Bureaucrat a("hash", 5);
	// 	RobotomyRequestForm fr("hashim");
	// 	fr.execute(a);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	// try
	// {
	// 	Bureaucrat a("hash", 7);
	// 	PresidentialPardonForm fr("hashim");
	// 	fr.execute(a);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	
	// try
	// {
	// 	Bureaucrat a("hash", 9);
	// 	PresidentialPardonForm fr("hashim");
	// 	a.executeForm(fr);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	// Bureaucrat *a = new Bureaucrat("hash", 1);
	// Intern z;
	// AForm *rrf;
	// rrf = z.makeForm("ShrubberyCreationForm", "hashim");
	// rrf->beSigned(*a);
	// a->signForm(*rrf);

	// std::cout << std::endl;
	// delete a;

	Intern intern;
	
	Bureaucrat a("hash", 9);
	AForm *form1 = intern.makeForm("ShrubberyCreationForm", "Garden");
	AForm *form2 = intern.makeForm("RobotomyRequestForm", "Bender");
	AForm *form3 = intern.makeForm("PresidentialPardonForm", "Ford Prefect");
	AForm *form4 = intern.makeForm("UnknownForm", "Target");

	if (form1)
		form1->execute(a);
	if (form2)
		form2->execute(a);
	if (form3)
		form3->execute(a);

	delete form1;
	delete form2;
	delete form3;
	delete form4;

	return (0);
	}
