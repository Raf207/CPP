/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 23:19:07 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/15 00:58:17 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
		std::cout << "\n--- Creating FragTrap ---" << std::endl;
	FragTrap frag("Fragon");

	std::cout << "\n--- Testing attack() ---" << std::endl;
	frag.attack("Some target");

	std::cout << "\n--- Taking damage ---" << std::endl;
	frag.takeDamage(40);

	std::cout << "\n--- Repairing ---" << std::endl;
	frag.beRepaired(25);

	std::cout << "\n--- Testing highFivesGuys() ---" << std::endl;
	frag.highFivesGuys();

	std::cout << "\n--- Testing death ---" << std::endl;
	frag.takeDamage(100);

	std::cout << "\n--- Trying to attack after death ---" << std::endl;
	frag.attack("Ghost");

	std::cout << "\n--- Done ---\n" << std::endl;

	return 0;
}