/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:21:57 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/08 20:27:15 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	
	private:

		std::string	_name;


	public:

		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		void annouce(void);
		void setName(std::string name);
			
};

Zombie* zombieHorde( int N, std::string name );

#endif