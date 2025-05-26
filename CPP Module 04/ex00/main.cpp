/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:53:53 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/26 09:00:15 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* a = new Animal();
	Animal* b = new Cat();
	Animal* c = new Dog();

	std::cout << "a : " << a->getType() << std::endl;
	std::cout << "b : " << b->getType() << std::endl;
	std::cout << "c : " << c->getType() << std::endl;

	a->makeSound();
	b->makeSound();
	c->makeSound();

	std::cout << "------------------------------------\n";

	WrongAnimal* wa = new WrongAnimal();
	WrongAnimal* wb = new WrongCat();

	std::cout << "wa : " << wa->getType() << std::endl;
	std::cout << "wb : " << wb->getType() << std::endl;
	std::cout << "wa : "; 
	wa->makeSound();
	std::cout << "wb : ";
	wb->makeSound();
	
	delete wa;
	delete wb;
	delete a;
	delete b;
	delete c;
}