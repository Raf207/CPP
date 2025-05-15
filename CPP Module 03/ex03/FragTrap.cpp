/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 00:43:38 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/15 03:00:40 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default")
{
	std::cout << "Default FragTrap Constructor called" << std::endl;

	this->setHealth(100);
	this->setEnergy(100);
	this->setDamage(30);

	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Constructor called with the name " << name << std::endl;

	this->setHealth(100);
	this->setEnergy(100);
	this->setDamage(30);

	return ;
}

FragTrap::FragTrap(FragTrap const & copy) : ClapTrap(copy)
{
	std::cout << "FragTrap Copy Constructor called." << std::endl;
	
	*this = copy;

	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called." << std::endl;

	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & src)
{
	if (this != &src)
	{
		this->setName(src.getName());
		this->setHealth(src.getHealth());
		this->setEnergy(src.getEnergy());
		this->setDamage(src.getDamage());
	}

	return *this;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->getName() << " is requesting a high five." << std::endl;
}