/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 23:55:57 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/15 03:07:28 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default")
{
	std::cout << "Default ScavTrap Constructor called" << std::endl;
	
	this->setHealth(100);
	this->setEnergy(50);
	this->setDamage(20);

	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor with name called" << std::endl;

	this->setHealth(100);
	this->setEnergy(50);
	this->setDamage(20);

	return ;
}

ScavTrap::ScavTrap(ScavTrap const & copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
	
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src)
{
	if (this != &src)
	{
		_name = src.getName();
		_health = src.getHealth();
		_energy = src.getEnergy();
		_damage = src.getDamage();
	}

	return *this;
}

void	ScavTrap::attack(const std::string & target)
{
	if (getEnergy() > 0 && getHealth() > 0)
	{
		std::cout << "ScavTrap " << getName() << " attacks ";
		std::cout << target << ", causing " << getDamage() << " points of damage!\n";
			
		this->setEnergy(this->getEnergy() - 1);
	}
	else if (getHealth() <= 0)
		std::cout << "ScavTrap " << getName() << " tried to attack but is destroyed" << std::endl;
	else
		std::cout << "ScavTrap " << getName() << " doesn't have enough energy to attack." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode." << std::endl;
}