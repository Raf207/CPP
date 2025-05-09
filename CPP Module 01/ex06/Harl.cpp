/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 04:06:12 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/09 04:48:16 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.";
	std::cout << "I really do!\n";
}

void	Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void	Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for";
	std::cout << "years, whereas you started working here just last month.\n";
}

void	Harl::_error(void)
{
	std::cout <<"This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	std::string levels_str[4] = {
		"debug",
		"info",
		"warning",
		"error",
	};
	
	void	(Harl::*levels[4])(void) = {
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error,
	};
	
	for (int i = 0; i < 4; i++)
	{
		if (level == levels_str[i])
		{
			(this->*levels[i])();
			return ;
		}
	}
	std::cout << "This level doesn't exist noob.\n";
}