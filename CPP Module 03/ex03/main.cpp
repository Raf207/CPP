/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 23:19:07 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/15 03:34:30 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void printStatus(const DiamondTrap& trap) {
	std::cout << "\n[ STATUS ]\n";
	std::cout << "Name     : " << trap.getName() << std::endl;
	std::cout << "Health   : " << trap.getHealth() << std::endl;
	std::cout << "Energy   : " << trap.getEnergy() << std::endl;
	std::cout << "Damage   : " << trap.getDamage() << std::endl;
	std::cout << "-------------------------\n";
}

int main() {
	DiamondTrap d;

	std::cout << "\n--- Constructor Check ---" << std::endl;
	printStatus(d);

	std::cout << "\n--- Attack ---" << std::endl;
	d.attack("TargetDummy");
	printStatus(d);

	std::cout << "\n--- Take Damage ---" << std::endl;
	d.takeDamage(30);
	printStatus(d);

	std::cout << "\n--- Repair ---" << std::endl;
	d.beRepaired(20);
	printStatus(d);

	std::cout << "\n--- Who Am I ---" << std::endl;
	d.whoAmI();

	std::cout << "\n--- End of Test ---" << std::endl;

	std::cout << d.getName() << ";;" << std::endl;
}