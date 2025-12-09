/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedArithmetic.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 02:31:10 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/29 20:37:29 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <limits>

/**
 * @brief Adds two Fixed numbers with overflow protection.
 *
 * @param other The Fixed object to add.
 * @return A new Fixed object containing the result.
 * @warning Prints an overflow warning if the result exceeds int range.
 */
Fixed Fixed::operator+(const Fixed& other) const {
	Fixed result;

	if ((_raw > 0 && other._raw > std::numeric_limits<int>::max() - _raw) ||
		(_raw < 0 && other._raw < std::numeric_limits<int>::min() - _raw)) {
		std::cout << "Fixed addition overflow" << std::endl;
		return *this;
	}

	result._raw = _raw + other._raw;
	return result;
}

/**
 * @brief Subtracts one Fixed number from another with overflow protection.
 *
 * @param other The Fixed object to subtract.
 * @return A new Fixed object containing the result.
 * @warning Prints an overflow warning if the result exceeds int range.
 */
Fixed Fixed::operator-(const Fixed& other) const {
	Fixed result;

	if ((_raw > 0 && other._raw < _raw - std::numeric_limits<int>::max()) ||
		(_raw < 0 && other._raw > _raw - std::numeric_limits<int>::min())) {
		std::cout << "Fixed subtraction overflow" << std::endl;
		return *this;
	}

	result._raw = _raw - other._raw;
	return result;
}

/**
 * @brief Multiplies two Fixed numbers in fixed-point precision.
 *
 * @param other The Fixed value to multiply with.
 * bitshifting to the right after the multiplication
 * @return A new Fixed containing the result.
 * @warning Overflow is detected after fixed-point scaling.
 */
Fixed Fixed::operator*(const Fixed& other) const {
	Fixed result;
	long long temp = (long long)_raw * (long long)other._raw;

	long long shifted = temp >> _bits;
	if (shifted > std::numeric_limits<int>::max() ||
		shifted < std::numeric_limits<int>::min()) {
		std::cout << "Fixed multiplication overflow" << std::endl;
		return *this;
	}

	result._raw = (int)shifted;
	return result;
}

/**
 * @brief Divides this Fixed value by another.
 *
 * @param other The divisor.
 * bitshifting to the the left on the this._raw
 * @return A new Fixed object containing the result.
 * @warning Prints warnings on division by zero or overflow.
 */
Fixed Fixed::operator/(const Fixed& other) const {
    if (other._raw == 0) {
        std::cout << "Division by zero" << std::endl;
        return *this;
    }

	// unique case of an overflow where n1/n2. If n1 is int min divided by -1
	// INT_MAX = 2,147,483,647       INT_MIN = -2,147,483,648
    if (_raw == std::numeric_limits<int>::min() && other._raw == -1) {
        std::cout << "Fixed division overflow" << std::endl;
        return *this;
    }

    Fixed result;
    long long temp = ((long long)_raw << _bits) / other._raw;

    if (temp > std::numeric_limits<int>::max() ||
        temp < std::numeric_limits<int>::min()) {
        std::cout << "Fixed division overflow" << std::endl;
        return *this;
    }

    result._raw = (int)temp;
    return result;
}
