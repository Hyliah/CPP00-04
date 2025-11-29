/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedComparison.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 02:32:26 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/29 02:43:21 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

bool	Fixed::operator>(const Fixed& other) const {
	return (_raw > other._raw);
	
}
bool	Fixed::operator<(const Fixed& other) const {
	return (_raw < other._raw);
	
}
bool	Fixed::operator>=(const Fixed& other) const {
	return (_raw >= other._raw);
	
}
bool	Fixed::operator<=(const Fixed& other) const {
	return (_raw <= other._raw);
	
}
bool	Fixed::operator==(const Fixed& other) const {
	return (_raw == other._raw);
	
}
bool	Fixed::operator!=(const Fixed& other) const {
	return (_raw != other._raw);
	
}
