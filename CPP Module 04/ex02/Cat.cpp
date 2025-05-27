/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:49:09 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/27 15:15:41 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Constructor for Cat was called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
	return ;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Copy Constructor for Cat was called" << std::endl;
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	return ;
}

Cat::~Cat()
{
	std::cout << "Destructor for Cat was called" << std::endl;
	delete this->brain;
	return ;
}

Cat& Cat::operator=(const Cat &copy)
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

void Cat::makeSound()
{
	std::cout << "Miaou !" << std::endl;
}

Brain& Cat::getBrain(void) const
{
	return (*this->brain);
}