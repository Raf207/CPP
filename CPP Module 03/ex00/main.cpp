/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 23:19:07 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/15 00:06:50 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap igloo("igloo");
	ClapTrap singe("singe");

	// for (int i = 0; i < 10; i++)
	// 	igloo.attack("jiji");
	// for (int i = 0; i < 10; i++)
	// {
	// 	igloo.takeDamage(1);
	// 	igloo.beRepaired(1);
	// }
	igloo.takeDamage(4);
	singe.takeDamage(2);

	singe = igloo;
	singe.takeDamage(2);
	igloo.takeDamage(4);
}