/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 15:54:45 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/09 16:36:21 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

Sample::Sample(int const n) : _foo(n)
{
	std::cout << "Parametric Constructor called with: " << n << std::endl;

	return ;
}

Sample::Sample() : _foo(0){

	std::cout << "Default Constructor called\n";

	return ;
}

Sample::Sample( Sample const & src ){

	std::cout << "Copy Constructor called" << std::endl;

	*this = src;

	return ;
}

Sample::~Sample()
{
	std::cout << "Destructor called." << std::endl;

	return ;
}

int		Sample::getFoo(void) const{

	return this->_foo;
}

Sample &	Sample::operator=(Sample const & rhs){

	std::cout << "Assignation operator called." << std::endl;

	if (this != &rhs)
		this->_foo = rhs.getFoo();

	return *this;
}

std::ostream & operator<<(std::ostream & o, Sample const & i){

	o << i.getFoo();
	return o;
}