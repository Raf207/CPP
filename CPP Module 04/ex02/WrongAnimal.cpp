/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 08:48:51 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/26 08:50:04 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Animal")
{
	std::cout << "Default Constructor for Animal was called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "Copy Constructor for Animal was called" << std::endl;
	*this = copy;

	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor for Animal was called" << std::endl;
	return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy)
{
	if (this != &copy)
		this->type = copy.type;

	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound()
{
	std::cout << "SILENCEEEE !" << std::endl;
}