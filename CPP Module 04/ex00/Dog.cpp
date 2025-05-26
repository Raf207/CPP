/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 18:06:33 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/22 18:27:11 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Constructor for Dog was called" << std::endl;
	this->type = "Dog";
	return ;
}

Dog::Dog(const Dog &copy) : Animal()
{
	std::cout << "Copy Constructor for Dog was called" << std::endl;
	*this = copy;
	return ;
}

Dog::~Dog()
{
	std::cout << "Destructor for Dog was called" << std::endl;
	return ;
}

Dog& Dog::operator=(const Dog &copy)
{
	if (this != &copy)
		this->type = copy.getType();

	return *this;
}

void Dog::makeSound()
{
	std::cout << "Bark !" << std::endl;
}