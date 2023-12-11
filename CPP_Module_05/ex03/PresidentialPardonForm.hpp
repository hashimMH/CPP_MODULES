/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:28:39 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/11 21:12:05 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
class Bureaucrat;

class PresidentialPardonForm : public AForm
{
	private:
		const std::string Name;
		mutable bool	sign;
		const int		grades;
		const int		gradex;
	
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string nm);
		PresidentialPardonForm(const PresidentialPardonForm& cp);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& cp);
		const std::string getName(void) const;
		int getGrades(void) const;
		int getGradex(void) const;
		bool getsign(void) const;
		void beSigned(Bureaucrat &br) const;
		void execute(Bureaucrat const & executor) const;
		~PresidentialPardonForm();
};

class GradeTooHighException : public std::exception
{
  virtual const char* what() const throw();
};

class GradeTooLowException : public std::exception
{
  virtual const char* what() const throw();
};

std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm& op);

#endif