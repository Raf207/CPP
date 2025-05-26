/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 08:18:12 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/26 08:21:33 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_v(0)
{

	return ;
}

Fixed::Fixed( Fixed const & src)
{
	
	*this = src;

	return ;
}

Fixed::Fixed( const int integer ) : _fixed_v(integer << _frac_bits)
{

	return ;
}

Fixed::Fixed( const float floating )
{

	// To convert from floating-point to fixed-point, we follow this algorithm:
	// Calculate x = floating_input * 2^(fractional_bits) (= 1 << _frac_bits)
	// Round x to the nearest int number (e.g. roundf(x))
	// Store the rounded x in an integer container
	this->_fixed_v = roundf(floating * (1 << _frac_bits));

	return ;
}

Fixed::~Fixed()
{
	
	return ;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{

	if (this != &rhs)
		this->_fixed_v = rhs.getRawBits();

	return *this;
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	if (toFloat() > (rhs).toFloat())
		return 1;
	else
		return 0;
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	if (toFloat() < (rhs).toFloat())
		return 1;
	else
		return 0;
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	if (this->toFloat() >= (rhs).toFloat())
		return 1;
	else
		return 0;
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	if (toFloat() <= (rhs).toFloat())
		return 1;
	else
		return 0;
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	if (toFloat() == (rhs).toFloat())
		return 1;
	else
		return 0;
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	if (toFloat() != (rhs).toFloat())
		return 1;
	else
		return 0;
}

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	return (Fixed(toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	return (Fixed(toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	Fixed	result;
	
	result._fixed_v = (this->_fixed_v * rhs._fixed_v) >> _frac_bits;
	return (result);
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	Fixed	result;

	result._fixed_v = (this->_fixed_v << _frac_bits) / rhs.getRawBits();
	return (result);
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

Fixed &	Fixed::operator++( void )
{
	this->_fixed_v += 1;
	
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	this->_fixed_v++;
	return tmp;
}

Fixed &	Fixed::operator--( void )
{
	this->_fixed_v -= 1;
	
	return (*this);
}
Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	this->_fixed_v--;
	return tmp;
}

std::ostream & operator<<(std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	
	return o;
}

Fixed&	Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return ((Fixed&)a);
	return ((Fixed&)b);
}

Fixed&	Fixed::min(Fixed &a, Fixed &obj2)
{
	if (a.getRawBits() < obj2.getRawBits())
		return (a);
	return (obj2);
}

Fixed&	Fixed::max(Fixed &a, Fixed &obj2)
{
	if (a.getRawBits() > obj2.getRawBits())
		return (a);
	return (obj2);
}

Fixed&	Fixed::max(const Fixed &a, const Fixed &obj2)
{
	if (a.getRawBits() > obj2.getRawBits())
		return ((Fixed&)a);
	return ((Fixed&)obj2);
}
