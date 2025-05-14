/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 23:19:07 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/15 00:36:20 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	std::cout << "\n--- Creating ScavTrap ---" << std::endl;
	ScavTrap scav("Guardian");

	std::cout << "\n--- Testing attack() ---" << std::endl;
	scav.attack("Intruder");

	std::cout << "\n--- Testing guardGate() ---" << std::endl;
	scav.guardGate();

	std::cout << "\n--- Taking damage ---" << std::endl;
	scav.takeDamage(30);

	std::cout << "\n--- Repairing ---" << std::endl;
	scav.beRepaired(20);

	std::cout << "\n--- Depleting energy ---" << std::endl;
	for (int i = 0; i < 51; i++) {
		scav.attack("Dummy");
	}

	std::cout << "\n--- Taking lethal damage ---" << std::endl;
	scav.takeDamage(100);

	std::cout << "\n--- Trying to attack while dead ---" << std::endl;
	scav.attack("Zombie");

	std::cout << "\n--- End of test ---\n" << std::endl;

    return 0;
}