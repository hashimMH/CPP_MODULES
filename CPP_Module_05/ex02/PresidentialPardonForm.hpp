/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:28:39 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/13 14:34:28 by hmohamed         ###   ########.fr       */
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
		PresidentialPardonForm(std::string nm);
		PresidentialPardonForm(const PresidentialPardonForm& cp);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& cp);
		const std::string getName(void) const;
		int getGrades(void) const;
		int getGradex(void) const;
		bool getsign(void) const;
		void beSigned(Bureaucrat &br);
		void execute(Bureaucrat const & executor);
		~PresidentialPardonForm();
	
};

std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm& op);

#endif