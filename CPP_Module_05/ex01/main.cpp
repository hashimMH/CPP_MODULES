/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:32:30 by hmohamed          #+#    #+#             */
/*   Updated: 2023/12/08 16:48:19 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat a("hash", 10);
		Form fr("hashim", 11);
		//fr.beSigned(a);
		a.signForm(fr);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
