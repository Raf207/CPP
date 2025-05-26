/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:53:53 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/22 18:35:36 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

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
	
	delete a;
	delete b;
	delete c;
}