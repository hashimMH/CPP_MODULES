/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:28:46 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/11 21:14:58 by hmohamed         ###   ########.fr       */
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
		mutable bool				sign;
		const int			grades;
		const int			gradex;
		
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string nm);
		RobotomyRequestForm(const RobotomyRequestForm& cp);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& cp);
		const std::string getName(void) const;
		int getGrades(void) const;
		int getGradex(void) const;
		bool getsign(void) const;
		void beSigned(Bureaucrat &br) const;
		void execute(Bureaucrat const & executor) const;
		~RobotomyRequestForm();
	
};


std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm& op);

#endif