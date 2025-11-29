/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 01:51:50 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/29 03:35:03 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>
# include <fstream>

class Fixed{
	private:
		int 	_raw;
		static const int _bits = 8;
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		
		// comparison operators
		bool	operator>(const Fixed& other) const;
		bool	operator<(const Fixed& other) const;
		bool	operator>=(const Fixed& other) const;
		bool	operator<=(const Fixed& other) const;
		bool	operator==(const Fixed& other) const;
		bool	operator!=(const Fixed& other) const;
		// arithmetic operators
		Fixed	operator+(const Fixed& other) const;
		Fixed	operator-(const Fixed& other) const;
		Fixed	operator*(const Fixed& other) const;
		Fixed	operator/(const Fixed& other) const;
		// increment/decrement operators
		Fixed	operator++(int);
		Fixed&	operator++();
		Fixed	operator--(int);
		Fixed&	operator--();

		~Fixed();

		float	toFloat( void ) const;
		int		toInt( void ) const;

		static Fixed& max(const Fixed& first, const Fixed& second);
		static Fixed& max(Fixed& first, Fixed& second);
		static Fixed& min(const Fixed& first, const Fixed& second);
		static Fixed& min(Fixed& first, Fixed& second);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif