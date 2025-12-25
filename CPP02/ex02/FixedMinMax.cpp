/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedMinMax.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 03:35:14 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/29 20:54:59 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/**
 * @brief Returns a const reference to the greater of two Fixed numbers.
 *
 * @return const Fixed& Reference to the maximum value.
 * @note This version is safe for const objects and cannot modify the returned object.
 */
const Fixed& Fixed::max(const Fixed& first, const Fixed& second){
	return (first > second ? first : second);
}

/**
 * @brief Returns a reference to the greater of two Fixed numbers.
 *
 * @return Fixed& Reference to the maximum value.
 * @note This version allows modification of the returned object.
 */
Fixed& Fixed::max(Fixed& first, Fixed& second){
	return (first > second ? first : second);
}

/**
 * @brief Returns a const reference to the smaller of two Fixed numbers.
 *
 * @return const Fixed& Reference to the minimum value.
 * @note This version is safe for const objects and cannot modify the returned object.
 */
const Fixed& Fixed::min(const Fixed& first, const Fixed& second){
	return (first < second ? first : second);
}

/**
 * @brief Returns a reference to the lesser of two Fixed numbers.
 *
 * @return Fixed& Reference to the minimum value.
 * @note This version allows modification of the returned object.
 */
Fixed& Fixed::min(Fixed& first, Fixed& second){
	return (first < second ? first : second);
}
