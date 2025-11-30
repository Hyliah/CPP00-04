/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedComparison.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 02:32:26 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/29 20:41:11 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/**
 * @brief Compares two Fixed values.
 *
 * @param other The value to compare with.
 * @return true if this > other, false otherwise.
 */
bool	Fixed::operator>(const Fixed& other) const {
	return (_raw > other._raw);
}

/**
 * @brief Compares two Fixed values.
 *
 * @param other The value to compare with.
 * @return true if this < other, false otherwise.
 */
bool	Fixed::operator<(const Fixed& other) const {
	return (_raw < other._raw);
}

/**
 * @brief Compares two Fixed values.
 *
 * @param other The value to compare with.
 * @return true if this >= other, false otherwise.
 */
bool	Fixed::operator>=(const Fixed& other) const {
	return (_raw >= other._raw);
}

/**
 * @brief Compares two Fixed values.
 *
 * @param other The value to compare with.
 * @return true if this <= other, false otherwise.
 */
bool	Fixed::operator<=(const Fixed& other) const {
	return (_raw <= other._raw);
}

/**
 * @brief Compares two Fixed values.
 *
 * @param other The value to compare with.
 * @return true if this == other, false otherwise.
 */
bool	Fixed::operator==(const Fixed& other) const {
	return (_raw == other._raw);
}

/**
 * @brief Compares two Fixed values.
 *
 * @param other The value to compare with.
 * @return true if this != other, false otherwise.
 */
bool	Fixed::operator!=(const Fixed& other) const {
	return (_raw != other._raw);
}
