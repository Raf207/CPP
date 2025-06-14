/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 18:04:12 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/22 18:26:50 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
	Dog();
	Dog(const Dog &copy);
	~Dog();
	
	Dog& operator=(const Dog &copy);
	void makeSound();
};

#endif