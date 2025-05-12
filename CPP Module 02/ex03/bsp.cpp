/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:55:10 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/12 14:40:19 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


/**
 * @brief Computes the signed area of the triangle formed by three points.
 *
 * This function determines the relative orientation of point p1
 * with respect to the line segment formed by points p2 and p3.
 *
 * @param p1 The first point (usually the test point).
 * @param p2 The second point (vertex of the triangle).
 * @param p3 The third point (vertex of the triangle).
 * @return A float representing the signed area:
 *         - Positive if p1 is on one side of the line p2-p3
 *         - Negative if on the opposite side
 *         - Zero if colinear
 */
float	sign(Point const &p1, Point const &p2, Point const &p3)
{
	return ((p1.getX().toFloat() - p3.getX().toFloat()) * (p2.getY().toFloat() - p3.getY().toFloat()) -
			(p2.getX().toFloat() - p3.getX().toFloat()) * (p1.getY().toFloat() - p3.getY().toFloat()));
}

/**
 * @brief Determines if a point lies strictly inside a triangle.
 *
 * Uses the "same side" method (based on the sign of area from cross products)
 * to test whether the given point lies strictly within the triangle formed by points a, b, and c.
 * Points on the edges or vertices are considered outside.
 *
 * @param a First vertex of the triangle.
 * @param b Second vertex of the triangle.
 * @param c Third vertex of the triangle.
 * @param point The point to check for containment.
 * @return true if the point is strictly inside the triangle, false otherwise.
 */
bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	d1, d2, d3;
	bool	has_pos, has_neg;

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);

	if (d1 == 0 || d2 == 0 || d3 == 0)
		return false;

	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	
	return !(has_neg && has_pos);
}