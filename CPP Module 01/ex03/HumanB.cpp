/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:29:37 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/08 21:56:04 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	// std::cout << this->_name << " spawned\n";
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon& type){

	this->_weapon = &type;
}

void HumanB::attack(void){

	if (!this->_weapon)
		std::cout << this->_name << " has no weapon." << std::endl;
	else
		std::cout << this->_name << " attacks with their " << (*this->_weapon).getType() << std::endl;
}