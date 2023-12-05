/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:28:46 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/03 21:34:54 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
class Bureaucrat;
class RobotomyRequestForm : public AForm
{
	private:
		const std::string	Name;
		bool				sign;
		const int			grades;
		const int			gradex;
		
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string nm, int grd);
		RobotomyRequestForm(const RobotomyRequestForm& cp);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& cp);
		~RobotomyRequestForm();
	
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

std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm& op);

#endif