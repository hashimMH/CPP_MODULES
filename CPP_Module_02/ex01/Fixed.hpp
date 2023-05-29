/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:47:51 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/29 19:16:05 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	private:
		int x;
		static const int y = 8;

	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float fnum);
		Fixed(const Fixed& cp);
		Fixed& operator=(const Fixed& cp);
		
		~Fixed();
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );

		
};

std::ostream& operator<<(std::ostream& os, const Fixed& op);