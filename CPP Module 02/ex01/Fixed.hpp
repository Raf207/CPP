/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 12:06:17 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/11 13:13:56 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{
private:

	int _fixed_v;
	static const int _frac_bits = 8;

	
public:

	Fixed(void);
	Fixed( Fixed const & src );
	Fixed( const int integer );
	Fixed( const float floating );
	~Fixed();

	Fixed &	operator=(Fixed const & rhs);

	int		getRawBits( void ) const ;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream & operator<<(std::ostream &o, Fixed const &src);

#endif