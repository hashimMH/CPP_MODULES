/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 01:48:58 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/17 17:43:40 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

class Harl
{
	private:

	public:
		Harl();
		~Harl();
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		void    complain( std::string level );
};