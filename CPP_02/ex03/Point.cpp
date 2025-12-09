/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 19:10:56 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/08 22:29:46 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0){
}

Point::Point(const float val_x, const float val_y): _x(val_x), _y(val_y){
}

Point::Point(const Point& other): _x(other._x), _y(other._y){
}

// cant assign because of const
Point& Point::operator=(const Point& other){
	(void)other;
	return (*this);
}

Point::~Point(){
}

const Fixed& Point::getX() const { 
	return _x;
}

const Fixed& Point::getY() const {
	return _y;
}