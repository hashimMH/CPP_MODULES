/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:32:30 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/06 23:15:39 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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

	try
	{
		Bureaucrat a("hash", 4);
		PresidentialPardonForm fr("hashim");
		a.executeForm(fr);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
