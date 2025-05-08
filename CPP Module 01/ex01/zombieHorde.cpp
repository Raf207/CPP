/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:19:57 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/08 20:33:01 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){

	Zombie* horde = new Zombie[N];

	for (int i = 0; i < N; i++){
		horde[i].setName(name);
	}
	return horde;
}