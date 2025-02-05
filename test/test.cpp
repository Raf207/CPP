/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:56:52 by rafnasci          #+#    #+#             */
/*   Updated: 2025/02/04 17:42:21 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "test.hpp"

test::test(void){
	
	std::cout <<"Constructor called" << std::endl;

	this->publicint = 0;
	std::cout <<"publicint: " << this->publicint <<std::endl;
	this->_privateint = 1;
	std::cout <<"privateint: "<< this->_privateint << std::endl;
	
	test::_stat++;

	this->publicfonc();
	this->privatefonc();

	return ;
}

test::~test(void){
	
	std::cout <<"Destructor called" << std::endl;
	return ;
}

void	test::publicfonc(void){
	
	std::cout << "publicfonc called" << std::endl;
	return ;
}

void test::privatefonc(void){
	
	std::cout << "privatefonc called" << std::endl;
	return ;
}

void test::printint (int a){
	
	std::cout << "int =" << a << std::endl;
	this->_privateint = 42;
	std::cout << "private :" << this->_privateint << std::endl;
	return ;
}

int	test::getstat(void){
	
	return test::_stat;
}

int	test::_stat = 0;