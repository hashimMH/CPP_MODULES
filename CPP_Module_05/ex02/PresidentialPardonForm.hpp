/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:28:39 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/03 20:49:50 by hmohamed         ###   ########.fr       */
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
		bool	sign;
		const int		grades;
		const int		gradex;
	
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string nm, int grd);
		PresidentialPardonForm(const PresidentialPardonForm& cp);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& cp);
		~PresidentialPardonForm();
	
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

std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm& op);

#endif