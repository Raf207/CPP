/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:44:50 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/22 16:09:32 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
# define TEST_HPP

#include <iostream>
#include <string>

class character
{
	public:
		virtual void sayHello(std::string const & name); // virtual function
};

class Warrior : public character
{
	public:
		virtual void sayHello(std::string const & name);
};

class cat
{
	
};

void character::sayHello(std::string const & name)
{
	std::cout << "Hello, " << name << std::endl;
}

void Warrior::sayHello(std::string const & name)
{
		std::cout << "Fuck you " << name << ", I don't like you!" << std::endl;
}

int main()
{
	//a Warrior IS a warrior so it's ok
	Warrior* a = new Warrior();
	
	//This is also ok bc a warrior is a character
	character*	b = new Warrior();

	// Carefull this is not good
	// although W is a C, it doesn't mean that a C is a W
	// Warrior* c = new character();

	// This is not OK too bc a cat is not a character
	// Cat*	d = new character();

	a->sayHello("bis");
	b->sayHello("oui");
}

#endif