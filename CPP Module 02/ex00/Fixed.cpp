/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 12:08:54 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/11 12:35:09 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(void) : _fixed_v(0)
{
	std::cout << "Default Constructor called" << std::endl;

	return ;
}

Fixed::Fixed( Fixed const & src)
{
	std::cout << "Copy Constructor called" << std::endl;
	
	*this = src;

	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destsructor called" << std::endl;
	
	return ;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std:: cout << "Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_fixed_v = rhs.getRawBits();

	return *this;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	
	return this->_fixed_v;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	
	this->_fixed_v = raw;
}
