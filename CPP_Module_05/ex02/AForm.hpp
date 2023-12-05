/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:42:40 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/03 21:35:00 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
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
		AForm(std::string nm, int grd);
		AForm(const AForm& cp);
		AForm& operator=(const AForm& cp);
		const std::string getName(void) const;
		int getGrades(void) const;
		int getGradex(void) const;
		bool getsign(void) const;
		void execute(Bureaucrat const & executor) const;
		virtual void beSigned(Bureaucrat &br) const = 0;
		~AForm();
	
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

std::ostream& operator<<(std::ostream& os, const AForm& op);

#endif