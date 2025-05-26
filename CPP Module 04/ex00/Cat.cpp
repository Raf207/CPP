/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:49:09 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/22 18:27:44 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Constructor for Cat was called" << std::endl;
	this->type = "Cat";
	return ;
}

Cat::Cat(const Cat &copy) : Animal()
{
	std::cout << "Copy Constructor for Cat was called" << std::endl;
	*this = copy;
	return ;
}

Cat::~Cat()
{
	std::cout << "Destructor for Cat was called" << std::endl;
	return ;
}

Cat& Cat::operator=(const Cat &copy)
{
	if (this != &copy)
		this->type = copy.getType();

	return *this;
}

void Cat::makeSound()
{
	std::cout << "Miaou !" << std::endl;
}