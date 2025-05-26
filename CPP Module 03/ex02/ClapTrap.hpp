/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 22:25:31 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/26 19:02:29 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_health;
		int			_energy;
		int			_damage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap();

		ClapTrap &	operator=(ClapTrap const &src);

		void		attack(const std::string & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		
		std::string	getName() const;
		int			getHealth() const;
		int			getEnergy() const;
		int			getDamage() const;
		void		setName(std::string name);
		void		setHealth(int	amount);
		void		setEnergy(int	amount);
		void		setDamage(int	amount);
};

#endif