/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 20:17:09 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/08 21:22:04 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

static Fixed cross(const Point& a, const Point& b, const Point& p);
static bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(){
	const Point a(10, 2);
	const Point b(6, 5);
	const Point c(7, 45);
	const Point p(12, 9);

	bool is_centered = bsp(a, b, c, p);
	std::cout << is_centered << std::endl;
}

static Fixed cross(const Point& a, const Point& b, const Point& p)
{
	Fixed ret = (p.getX() - a.getX()) * (b.getY() - a.getY())
		  - (p.getY() - a.getY()) * (b.getX() - a.getX());

	return (ret);
}

static bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed w1 = cross(a, b, point);
    Fixed w2 = cross(b, c, point);
    Fixed w3 = cross(c, a, point);

    bool hasNeg = (w1 < Fixed(0)) || (w2 < Fixed(0)) || (w3 < Fixed(0));
    bool hasPos = (w1 > Fixed(0)) || (w2 > Fixed(0)) || (w3 > Fixed(0));

    return !(hasNeg && hasPos);
}
