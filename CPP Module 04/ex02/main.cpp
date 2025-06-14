/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:53:53 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/27 15:54:37 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    Animal a;
    
    // {
    //     Dog dogA;
    //     {
    //         Dog tmp = dogA;
    //         std::cout << std::endl;
    //         Dog tmp2(dogA);
    //     }
    //     std::cout << "---------------------------------\n";
    //     dogA.getBrain().setIdea(0, "first dog idea");
    //     Dog dogB(dogA); // Copy constructor
    //     dogA.getBrain().setIdea(0, "changed dog idea");
    //     std::cout << "dogA idea: " << dogA.getBrain().getIdea(0) << std::endl;
    //     std::cout << "dogB idea: " << dogB.getBrain().getIdea(0) << " (should be 'first dog idea')" << std::endl;
    //     std::cout << "---------------------------------\n";
    
    //     Dog dogC;
    //     dogC = dogA; // Assignment operator
    //     dogA.getBrain().setIdea(0, "again changed");
    //     std::cout << "dogA idea: " << dogA.getBrain().getIdea(0) << std::endl;
    //     std::cout << "dogC idea: " << dogC.getBrain().getIdea(0) << " (should be 'changed dog idea')" << std::endl;
    // }
    // std::cout << "---------------------------------\n";
    // {
    //     Cat CatA;
    //     {
    //         Cat tmp = CatA;
    //         std::cout << std::endl;
    //         Cat tmp2(CatA);
    //     }
        
    //     std::cout << "---------------------------------\n";
    //     Cat catA;
    //     catA.getBrain().setIdea(0, "first cat idea");
    //     Cat catB(catA); // Copy constructor
    //     catA.getBrain().setIdea(0, "changed cat idea");
    //     std::cout << "catA idea: " << catA.getBrain().getIdea(0) << std::endl;
    //     std::cout << "catB idea: " << catB.getBrain().getIdea(0) << " (should be 'first cat idea')" << std::endl;
    //     std::cout << "---------------------------------\n";
    
    //     Cat catC;
    //     catC = catA; // Assignment operator
    //     catA.getBrain().setIdea(0, "again changed");
    //     std::cout << "catA idea: " << catA.getBrain().getIdea(0) << std::endl;
    //     std::cout << "catC idea: " << catC.getBrain().getIdea(0) << " (should be 'changed cat idea')" << std::endl;
    // }
    // std::cout << "---------------------------------\n";
    
	// Animal* zoo[4];
    // zoo[0] = new Dog();
    // zoo[1] = new Cat();
    // zoo[2] = new Dog();
    // zoo[3] = new Cat();
    // for (int i = 0; i < 4; ++i) {
    //     std::cout << zoo[i]->getType() << " says: ";
    //     zoo[i]->makeSound();
    // }
    // for (int i = 0; i < 4; ++i)
    //     delete zoo[i];
}