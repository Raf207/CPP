/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 12:08:54 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/11 13:25:13 by rafnasci         ###   ########.fr       */
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

Fixed::Fixed( const int integer ) : _fixed_v(integer << _frac_bits)
{
	std::cout << "Int Constructor called" << std::endl;

	return ;
}

Fixed::Fixed( const float floating )
{
	std::cout << "Float Constructor called" << std::endl;

	// To convert from floating-point to fixed-point, we follow this algorithm:
	// Calculate x = floating_input * 2^(fractional_bits) (= 1 << _frac_bits)
	// Round x to the nearest int number (e.g. roundf(x))
	// Store the rounded x in an integer container
	this->_fixed_v = roundf(floating * (1 << _frac_bits));

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
	return this->_fixed_v;
}

void	Fixed::setRawBits(int const raw)
{	
	this->_fixed_v = raw;
}


float	Fixed::toFloat( void ) const
{
	// To convert from fixed-point to floating-point, we follow this algorithm:
	// Calculate x = floating_input / 2^(fractional_bits) (= 1 << _frac_bits)
	// Cast x to a float
	return ((float) this->_fixed_v / ( 1 << this->_frac_bits));	
}

int		Fixed::toInt( void ) const
{
	// To convert from fixed-point to int-point, we follow this algorithm:
	// Same than toFloat
	// then we round it the nearest int
	return ((int) roundf((float) this->_fixed_v / ( 1 << this->_frac_bits)));
}

std::ostream & operator<<(std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	
	return o;
}