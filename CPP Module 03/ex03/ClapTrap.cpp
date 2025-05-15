/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 22:32:01 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/15 00:32:59 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :  _name("Default"), _health(10), _energy(10), _damage(0)
{
	std::cout << "Default ClapTrap Constructor called\n";

	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _health(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap Constructor with name called\n";

	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "Copy ClapTrap Constructor called\n";

	*this = src;

	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called\n";
	
	return ;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & src)
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

void	ClapTrap::attack(const std::string & target)
{
	if (getEnergy() > 0 && getHealth() > 0)
	{
		std::cout << "ClapTrap " << getName() << " attacks ";
		std::cout << target << ", causing " << getDamage() << " points of damage!\n";
			
		this->setEnergy(this->getEnergy() - 1);
	}
	else if (getHealth() <= 0)
		std::cout << "ClapTrap " << getName() << " tried to attack but is destroyed" << std::endl;
	else
		std::cout << "ClapTrap " << getName() << " doesn't have enough energy to attack." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (getHealth() <= 0)
	{
		std::cout << "ClapTrap " << getName() << " is already dead." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << getName() << " takes " << amount << " points of damage.";
		this->setHealth(getHealth() - amount);
		if (getHealth() <= 0)
			std::cout << std::endl << "ClapTrap " << getName() << " died." << std::endl;
		else
			std::cout << "\033[3m\033[90m(" << getHealth() << " health remaining.)\033[0m" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (getEnergy() > 0)
	{
		std::cout << "ClapTrap " << getName() << " repaired " << amount << " health.";
		
		this->setHealth(this->getHealth() + amount);
		this->setEnergy(this->getEnergy() - 1);

		std::cout << "\033[3m\033[90m(" << getHealth() << " health remaining.)\033[0m" << std::endl;
	}
	else
		std::cout << "ClapTrap " << getName() << " doesn't have enough energy to repair." << std::endl;
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHealth(int amount)
{
	this->_health = amount;
}

void	ClapTrap::setEnergy(int amount)
{
	this->_energy = amount;
}

void	ClapTrap::setDamage(int amount)
{
	this->_damage = amount;
}

std::string	ClapTrap::getName() const
{
	return this->_name;
}

int		ClapTrap::getHealth() const
{
	return this->_health;
}

int		ClapTrap::getDamage() const
{
	return this->_damage;
}

int		ClapTrap::getEnergy() const
{
	return this->_energy;
}
