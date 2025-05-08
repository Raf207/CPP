/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:24:48 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/08 20:34:15 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
	this->_name = "No name";
}

Zombie::Zombie(std::string name) : _name(name){
	
	if (name.empty())
		this->_name = "No name";
}

Zombie::~Zombie(void){
	
	std::cout << this->_name << " has been destructed." << std::endl;
}

void	Zombie::annouce(void){
	
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name){
	
	if (!name.empty())
		this->_name = name;
}