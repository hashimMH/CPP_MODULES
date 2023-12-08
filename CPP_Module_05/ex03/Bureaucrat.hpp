/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:32:44 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/08 16:51:51 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;
class Bureaucrat
{
	private:
		const std::string Name;
		int		grade;
	
	public:
		Bureaucrat();
		Bureaucrat(std::string nm, int grd);
		Bureaucrat(const Bureaucrat& cp);
		Bureaucrat& operator=(const Bureaucrat& cp);
		const std::string getName(void) const;
		int getGrade(void) const;
		void signForm(AForm &form);
		void increment(void);
		void decrement(void);
		void executeForm(AForm const & form) const;
		~Bureaucrat();
};

class GradeTooHighException : public std::exception
{
  virtual const char* what() const throw();
};

class GradeTooLowException : public std::exception
{
  virtual const char* what() const throw();
};


std::ostream& operator<<(std::ostream& os, const Bureaucrat& op);

#endif
