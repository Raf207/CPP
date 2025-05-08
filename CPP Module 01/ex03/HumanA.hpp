/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:06:35 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/08 21:44:10 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
private:
	std::string	_name;
	Weapon&		_weapon;
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void	attack(void);
};

#endif