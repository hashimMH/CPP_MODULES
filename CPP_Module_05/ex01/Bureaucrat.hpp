/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:32:44 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/15 19:45:19 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;
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
		void signForm(Form &form);
		void increment(void);
		void decrement(void);
		~Bureaucrat();

		class GradeTooHighException : public std::exception
		{
		  virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
		  virtual const char* what() const throw();
		};
};


std::ostream& operator<<(std::ostream& os, const Bureaucrat& op);

#endif
