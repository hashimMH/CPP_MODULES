/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:32:44 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/15 19:41:50 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

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
		void increment(void);
		void decrement(void);
		~Bureaucrat();
	
	class GradeTooHighException : public std::exception 
	{
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception 
	{
		const char* what() const throw();
	};

};



std::ostream& operator<<(std::ostream& os, const Bureaucrat& op);

#endif