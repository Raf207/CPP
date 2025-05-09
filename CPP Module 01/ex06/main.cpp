/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:38:27 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/09 05:06:12 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	getLevel(char **av)
{
	std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};
	
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == av[1])
			return i;
	}
	return -1;
}

void	harlYel(int level)
{
	Harl	harl;
	
	for (int i = level; i < 4; i++)
	{
		switch (i)
		{
		case 0:
			std::cout << "[ DEBUG ]\n";
			harl.complain("debug");
			break;
		case 1:
			std::cout << "[ INFO ]\n";
			harl.complain("info");
			break;
		case 2:
			std::cout << "[ WARNING ]\n";
			harl.complain("warning");
			break;
		case 3:
			std::cout << "[ ERROR ]\n";
			harl.complain("error");
			break;
		}
	}
}

int main(int ac, char **av)
{
	int	level;
	
	if (ac != 2)
	{
		std::cerr << "HARL ACCEPTS ONLY 1 ARGUMENT!!!!\n";
		return 1;
	}
	level = getLevel(av);
	if (level == -1)
	{
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		return 0;
	}
	harlYel(level);
	
	return 0;
}