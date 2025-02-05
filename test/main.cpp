/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:07:44 by rafnasci          #+#    #+#             */
/*   Updated: 2025/02/05 19:40:54 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"
#include <iostream>

int main(void)
{
	test	instance;
	test	*instacep = &instance;
	int		test::*p = NULL;
	void	(test::*f)(void);
	
	p = &test::publicint;
	f = &test::publicfonc;
	
	std::cout << "publicint: " << instance.publicint << std::endl;
	instance.*p = 19;
	std::cout << "publicint: " << instance.publicint << std::endl;
	instacep->*p = 42;
	std::cout << "publicint: " << instance.publicint << std::endl;
	
	(instance.*f)();
	(instacep->*f)();
	return 0;
}