/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:21:57 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/08 19:54:20 by rafnasci         ###   ########.fr       */
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
		~Zombie(void);
		void annouce(void);
			
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif