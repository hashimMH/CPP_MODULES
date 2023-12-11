/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:42:55 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/11 21:10:55 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
	private:
		const std::string Name;
		bool	sign;
		const int		grades;
		const int		gradex;
	
	public:
		Form();
		Form(std::string nm, int grd);
		Form(const Form& cp);
		Form& operator=(const Form& cp);
		const std::string getName(void) const;
		int getGrades(void) const;
		int getGradex(void) const;
		bool getsign(void) const;
		void beSigned(Bureaucrat &br);
		~Form();
	
};

class GradeTooHighException : public std::exception
{
  virtual const char* what() const throw();
};

class GradeTooLowException : public std::exception
{
  virtual const char* what() const throw();
};

std::ostream& operator<<(std::ostream& os, const Form& op);

#endif