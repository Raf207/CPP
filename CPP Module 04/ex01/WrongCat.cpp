/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 08:52:44 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/26 08:54:08 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default Constructor for Cat was called" << std::endl;
	this->type = "Cat";
	return ;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal()
{
	std::cout << "Copy Constructor for Cat was called" << std::endl;
	*this = copy;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor for Cat was called" << std::endl;
	return ;
}

WrongCat& WrongCat::operator=(const WrongCat &copy)
{
	if (this != &copy)
		this->type = copy.getType();

	return *this;
}

void WrongCat::makeSound()
{
	std::cout << "Miaou !" << std::endl;
}