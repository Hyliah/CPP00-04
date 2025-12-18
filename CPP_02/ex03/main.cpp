/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 20:17:09 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/18 19:28:18 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

static Fixed cross(const Point& a, const Point& b, const Point& p);
static bool bsp(Point const a, Point const b, Point const c, Point const point);

/**
 * @brief Entry point of the program.
 *
 * Creates a triangle defined by three points and tests whether a given
 * point lies strictly inside the triangle using the bsp algorithm.
 * Prints the result to the standard output.
 * 
 * @test Point : 10, 2 (false, on edge) -  8, 10(true : inside)  -  12, 9 (false : outside)
 */
int main(){
	const Point a(10, 2);
	const Point b(6, 5);
	const Point c(7, 45);
	const Point p(10, 2);

	bool is_centered = bsp(a, b, c, p);
	if (is_centered == true)
		std::cout << "true : point is inside the triangle" << std::endl;
	else
		std::cout << "false : point is outside or on an edge of the triagle" << std::endl;
}

/**
 * @brief Computes the 2D cross product (signed area) of vectors AB and AP.
 *
 * This function is used to determine the relative position of point P
 * with respect to the directed edge AB.
 *
 * @param a First point of the segment.
 * @param b Second point of the segment.
 * @param p Point to test.
 * @return A Fixed value representing the signed cross product.
 *         - Positive if P is on the left of AB
 *         - Negative if P is on the right of AB
 *         - Zero if P is collinear with AB
 */
static Fixed cross(const Point& a, const Point& b, const Point& p)
{
	Fixed ret = (p.getX() - a.getX()) * (b.getY() - a.getY())
		  - (p.getY() - a.getY()) * (b.getX() - a.getX());

	return (ret);
}

/**
 * @brief Determines whether a point lies strictly inside a triangle.
 *
 * Uses cross products to check if the point is on the same side of all
 * triangle edges. Points located on an edge or on a vertex are considered
 * outside of the triangle.
 *
 * @param a First vertex of the triangle.
 * @param b Second vertex of the triangle.
 * @param c Third vertex of the triangle.
 * @param point Point to test.
 * @return true if the point is strictly inside the triangle,
 *         false if it is outside or lies on an edge or vertex.
 */
static bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed w1 = cross(a, b, point);
    Fixed w2 = cross(b, c, point);
    Fixed w3 = cross(c, a, point);

    bool hasNeg = (w1 < Fixed(0)) || (w2 < Fixed(0)) || (w3 < Fixed(0));
    bool hasPos = (w1 > Fixed(0)) || (w2 > Fixed(0)) || (w3 > Fixed(0));

	if (w1 == 0 || w2 == 0 || w3 == 0)
    	return false;

    return !(hasNeg && hasPos);
}
