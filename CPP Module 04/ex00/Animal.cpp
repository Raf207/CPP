/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:39:05 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/22 18:31:26 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Default Constructor for Animal was called" << std::endl;
	return ;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Copy Constructor for Animal was called" << std::endl;
	*this = copy;

	return ;
}

Animal::~Animal()
{
	std::cout << "Destructor for Animal was called" << std::endl;
	return ;
}

Animal& Animal::operator=(const Animal &copy)
{
	if (this != &copy)
		this->type = copy.type;

	return (*this);
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound()
{
	std::cout << "SILENCEEEE !" << std::endl;
}