/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:47:51 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/29 19:10:58 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

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
		bool operator>(const Fixed& sec) const;
	    bool operator<(const Fixed& sec) const;
	    bool operator>=(const Fixed& sec) const;
	    bool operator<=(const Fixed& sec) const;
	    bool operator==(const Fixed& sec) const;
	    bool operator!=(const Fixed& sec) const;

		Fixed operator+(const Fixed& sec) const;
		Fixed operator-(const Fixed& sec) const;
		Fixed operator*(const Fixed& sec) const;
		Fixed operator/(const Fixed& sec) const;
		
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		~Fixed();
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		static Fixed& max(Fixed& a, Fixed& b);
		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);

		
};

std::ostream& operator<<(std::ostream& os, const Fixed& op);