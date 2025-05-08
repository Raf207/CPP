/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:31:13 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/08 20:33:50 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (){

	Zombie* horde = zombieHorde(10, "Asa");

	for (int i = 0; i < 10; i++)
		horde[i].annouce();

	delete [] horde;
	return 0;
}