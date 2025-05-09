/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 15:54:45 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/09 16:17:07 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

Integer::Integer(int const n) : _n(n)
{
	std::cout << "Constructor called with int: " << n << std::endl;

	return ;
}

Integer::Integer() : _n(0){

	std::cout << "Constructor called without the thing\n";

	return ;
}

Integer::~Integer()
{
	std::cout << "Destructor called with int: " << this->_n << std::endl;

	return ;
}

int		Integer::getValue(void) const{

	return this->_n;
}

Integer &	Integer::operator=(Integer const & rhs){

	std::cout << "Assignation operator called form " << this->_n ;
	std::cout << "to " << rhs.getValue() << std::endl;

	this->_n = rhs.getValue();

	return *this;
}

Integer		Integer::operator+(Integer const & rhs) const{

	std::cout << "Addition operator called with " << this->_n ;
	std::cout << "and " << rhs.getValue() << std::endl;

	return Integer(this->_n + rhs.getValue());
}

std::ostream & operator<<(std::ostream & o, Integer const & rhs){

	o << rhs.getValue();
	return o;
}