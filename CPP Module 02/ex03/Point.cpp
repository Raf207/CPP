/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:19:37 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/12 13:26:19 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0)
{	
	return ;
}

Point::Point( const float x, const float y) : _x(x), _y(y)
{
	
	return ;
}

Point::Point( Point const &src ) : _x(src._x), _y(src._y)
{

	return ;
}

Point::~Point()
{
	
	return ;
}	

Fixed const	&Point::getX( void ) const
{
	return (_x);
}

Fixed const	&Point::getY( void ) const
{
	return (_y);
}

// Point & Point::operator=(Point const &src)
// {
// 	(Fixed) this->_x = src._x;
// 	(Fixed) this->_y = src._y;
// 	return (*this);
// }