/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedIncrementDecrement.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 02:32:24 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/29 21:49:56 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/**
 * @brief Post-increment operator. Increments the value but returns the previous one.
 *
 * @return A copy of the Fixed before incrementing.
 * @warning Detects and warns on overflow.
 */
Fixed	Fixed::operator++(int){
    Fixed ret(*this);
    if (_raw > std::numeric_limits<int>::max() - (1 << _bits))
        std::cout << "Fixed overflow in ++" << std::endl;
    else
        _raw ++;
    return (ret);
}

/**
 * @brief Pre-increment operator. Increments and returns the updated object.
 *
 * @return Reference to this Fixed instance.
 * @warning Detects and warns on overflow.
 */
Fixed&	Fixed::operator++(){
    if (_raw > std::numeric_limits<int>::max() - (1 << _bits))
        std::cout << "Fixed overflow in ++" << std::endl;
    else
        _raw++;
    return (*this);
}

/**
 * @brief Post-decrement operator. Returns the value before decrementing.
 *
 * @return A copy of the Fixed before decrementing.
 * @warning Detects and warns on underflow.
 */
Fixed Fixed::operator--(int){
    Fixed ret(*this);

    if (_raw < std::numeric_limits<int>::min() + (1 << _bits))
        std::cout << "Fixed underflow in --" << std::endl;
    else
        _raw--;
    return ret;
}

/**
 * @brief Pre-decrement operator. Decrements the value and returns the updated object.
 *
 * @return Reference to this Fixed instance.
 * @warning Detects and warns on underflow.
 */
Fixed&	Fixed::operator--(){
    if (_raw < std::numeric_limits<int>::min() + (1 << _bits))
        std::cout << "Fixed overflow in --" << std::endl;
    else
        _raw--;
    return (*this);
}
