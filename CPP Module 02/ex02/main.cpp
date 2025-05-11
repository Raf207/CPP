/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 12:30:59 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/11 18:10:02 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed const c(10);
	Fixed d(1.5f);

	std::cout << "a is " << a << std::endl;
	std::cout << "++a is " << ++a << std::endl;
	std::cout << "a is now " << a << std::endl;
	std::cout << "a++ is " << a++ << std::endl;
	std::cout << "a is now " << a << std::endl;

	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "b + c = " << (b + c) << std::endl;
	std::cout << "c - b = " << (c - b) << std::endl;
	std::cout << "b / d = " << (b / d) << std::endl;
	std::cout << "b * d = " << (b * d) << std::endl;

	std::cout << std::boolalpha;
	std::cout << "b > d: " << (b > d) << std::endl;
	std::cout << "b < d: " << (b < d) << std::endl;
	std::cout << "b >= d: " << (b >= d) << std::endl;
	std::cout << "b <= d: " << (b <= d) << std::endl;
	std::cout << "b == d: " << (b == d) << std::endl;
	std::cout << "b != d: " << (b != d) << std::endl;

	std::cout << "--d: " << --d << std::endl;
	std::cout << "d--: " << d-- << std::endl;
	std::cout << "d: " << d << std::endl;
	
	return 0;
}
