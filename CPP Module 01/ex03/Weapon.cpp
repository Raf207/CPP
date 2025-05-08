/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:53:33 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/08 21:52:27 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	this->_type = "fist";
}
Weapon::Weapon(std::string weapon) : _type(weapon)
{
	if (weapon.empty())
		this->_type = "fist";
}

Weapon::~Weapon()
{
}

const std::string&	Weapon::getType(void){

	return this->_type;
}

void	Weapon::setType(std::string type){
	
	if (!type.empty())
		this->_type = type;
}