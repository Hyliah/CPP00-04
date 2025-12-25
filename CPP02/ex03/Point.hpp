/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 19:10:59 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/08 21:01:07 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point{
	private :
		Fixed	const _x;
		Fixed	const _y;

	public :
		Point();
		Point(const float val_x, const float val_y);
		Point(const Point& other);
		Point& operator=(const Point& other);
		~Point();

		const Fixed& getX() const;
    	const Fixed& getY() const;
} ;