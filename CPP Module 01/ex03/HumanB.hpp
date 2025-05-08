/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:24:48 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/08 21:48:14 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
	std::string _name;
	Weapon* 	_weapon;
public:
	HumanB(std::string name);
	~HumanB();
	void	attack(void);
	void	setWeapon(Weapon& type);
};

#endif