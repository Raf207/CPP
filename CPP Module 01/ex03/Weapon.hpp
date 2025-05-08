/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:49:34 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/08 21:52:08 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
private:
	std::string _type;
public:
	Weapon();
	Weapon(std::string weapon);
	~Weapon();
	const std::string& getType(void);
	void setType(std::string type);
};

#endif