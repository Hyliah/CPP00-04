/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedArithmetic.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 02:31:10 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/29 19:18:29 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <climits>

#include "Fixed.hpp"
#include <climits>

/**
 * @brief Adds two Fixed numbers with overflow protection.
 *
 * @param other The Fixed object to add.
 * @return A new Fixed object containing the result.
 * @warning Prints an overflow warning if the result exceeds int range.
 */
Fixed Fixed::operator+(const Fixed& other) const {
	Fixed result;

	if ((other._raw > 0 && _raw > INT_MAX - other._raw) ||
		(other._raw < 0 && _raw < INT_MIN - other._raw)) {
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

	if ((other._raw < 0 && _raw > INT_MAX + other._raw) ||
	    (other._raw > 0 && _raw < INT_MIN + other._raw)) {
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
	if (shifted > INT_MAX ||
		shifted < INT_MIN) {
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
	// INT_MAX = INT_MAX       INT_MIN = INT_MIN
    if (_raw == INT_MIN && other._raw == -1) {
        std::cout << "Fixed division overflow" << std::endl;
        return *this;
    }

    Fixed result;
    long long temp = ((long long)_raw << _bits) / other._raw;

    if (temp > INT_MAX ||
        temp < INT_MIN) {
        std::cout << "Fixed division overflow" << std::endl;
        return *this;
    }

    result._raw = (int)temp;
    return result;
}