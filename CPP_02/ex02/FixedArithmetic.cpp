/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedArithmetic.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 02:31:10 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/29 03:24:20 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <limits>

Fixed	Fixed::operator+(const Fixed& other) const {
	Fixed copy(*this);
	
	if (_raw > 0 && other._raw > std::numeric_limits<int>::max() - _raw || _raw < 0 && other._raw < std::numeric_limits<int>::min() - _raw){
		std::cout << "Fixed addition overflow" << std::endl;
		return (copy);
	}
	copy._raw += other._raw;
	return (copy);
}

Fixed	Fixed::operator-(const Fixed& other) const {
	Fixed copy(*this);

	if (_raw < 0 && other._raw < std::numeric_limits<int>::min() + _raw || _raw > 0 && other._raw > std::numeric_limits<int>::min() + _raw){
		std::cout << "Fixed substraction overflow" << std::endl;
		return (copy);
	}
	copy._raw -= other._raw;
	return (copy);
}

Fixed	Fixed::operator*(const Fixed& other) const {
	Fixed copy(*this);
	long long	temp = _raw * other._raw;

	if (temp < std::numeric_limits<int>::min() || temp > std::numeric_limits<int>::max()){
		std::cout << "Fixed multiplication overflow" << std::endl;
		return (copy);
	}
	copy._raw *= other._raw;
	return (copy);
}

Fixed	Fixed::operator/(const Fixed& other) const {
	Fixed copy(*this);

	if (other._raw == 0) {
		std::cout << "Division by zero" << std::endl;
		return copy;
	}
	copy._raw /= other._raw;
	return (copy);
}
