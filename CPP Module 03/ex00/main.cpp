/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 23:19:07 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/14 23:36:53 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap igloo("igloo");

	for (int i = 0; i < 10; i++)
		igloo.attack("jiji");
	for (int i = 0; i < 10; i++)
	{
		igloo.takeDamage(1);
		igloo.beRepaired(1);
	}
}