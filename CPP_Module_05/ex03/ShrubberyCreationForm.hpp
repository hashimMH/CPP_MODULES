/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:43:06 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/05 15:35:40 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
class Bureaucrat;
class AForm;
class ShrubberyCreationForm : public AForm
{
	private:
		const std::string Name;
		mutable bool	sign;
		const int		grades;
		const int		gradex;
	
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string nm);
		ShrubberyCreationForm(const ShrubberyCreationForm& cp);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& cp);
		void beSigned(Bureaucrat &br) const;
		const std::string getName(void) const;
		int getGrades(void) const;
		int getGradex(void) const;
		bool getsign(void) const;
		void execute(Bureaucrat const & executor) const;
		~ShrubberyCreationForm();
	
	class GradeTooHighException : public std::exception
	{
	  virtual const char* what() const throw()
	  {
	    return "Grade Too High";
	  }
	};

	class GradeTooLowException : public std::exception
	{
	  virtual const char* what() const throw()
	  {
	    return "Grade Too Low";
	  }
	};
};

std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& op);

#endif