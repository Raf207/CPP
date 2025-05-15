/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 01:48:38 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/15 03:46:00 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	: ClapTrap("Default_clap_name"), FragTrap(), ScavTrap()
{
	std::cout << "Default DiamondTrap Constructor called" << std::endl;
	this->_name = "Default";
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 30;

	return ;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap Constructor called with the name " << name << std::endl;
	
	this->_name = name;
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const & copy)
	: ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
	std::cout << "DiamondTrap Copy Constructor called." << std::endl;
	
	*this = copy;

	return ;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called." << std::endl;
	
	return ;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & src)
{
	if (this != &src)
	{
		this->_name = src.getName();
		this->_health = src.getHealth();
		this->_energy = src.getEnergy();
		this->_damage = src.getDamage();
	}
	
	return *this;
}

void	DiamondTrap::attack(const std::string & target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->_name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::getName() << std::endl;
}

std::string	DiamondTrap::getName() const
{
	return this->_name;
}