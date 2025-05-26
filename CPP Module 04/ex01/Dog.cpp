/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 18:06:33 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/26 13:53:34 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	std::cout << "Default Constructor for Dog was called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	return ;
}

Dog::Dog(const Dog &copy) : Animal()
{
	std::cout << "Copy Constructor for Dog was called" << std::endl;
	this->type = copy.getType();
	this->brain = new Brain(*copy.brain);
	return ;
}

Dog::~Dog()
{
	std::cout << "Destructor for Dog was called" << std::endl;
	delete this->brain;
	return ;
}

Dog& Dog::operator=(const Dog &copy)
{
	if (this != &copy)
	{
		this->type = copy.getType();
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*copy.brain);
	}

	return *this;
}

void Dog::makeSound()
{
	std::cout << "Bark !" << std::endl;
}

Brain& Dog::getBrain(void) const
{
	return (*this->brain);
}