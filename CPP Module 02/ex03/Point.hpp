/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:15:46 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/12 14:35:44 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	
	const Fixed	_x;
	const Fixed	_y;

	
public:

	Point( void );
	Point( const float x, const float y);
	Point( Point const & src);
	~Point();

	Point & operator=(const Point & src); // cannot be implemented
	Fixed const	&getX( void ) const;
	Fixed const	&getY( void ) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif