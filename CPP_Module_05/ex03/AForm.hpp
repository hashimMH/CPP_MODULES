/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:42:40 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/15 20:09:50 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <ctime>
#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm
{
	private:
		const std::string Name;
		bool	sign;
		const int		grades;
		const int		gradex;
	
	public:
		AForm();
		AForm(std::string nm, int grd, int grdx);
		AForm(const AForm& cp);
		AForm& operator=(const AForm& cp);
		const std::string getName(void) const;
		int getGrades(void) const;
		int getGradex(void) const;
		bool getsign(void) const;
		virtual void execute(Bureaucrat const & executor) const;
		virtual void beSigned(Bureaucrat &br) = 0;
		virtual ~AForm();
	
		class GradeTooHighException : public std::exception
		{
		  virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
		  virtual const char* what() const throw();
		};
	
};

std::ostream& operator<<(std::ostream& os, const AForm& op);

#endif