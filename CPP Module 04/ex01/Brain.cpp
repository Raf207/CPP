/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:28:34 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/26 14:14:22 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Default constructor for Brain." << std::endl;
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = "";
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Copy Constructor for Brain." << std::endl;
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Destructor for Brain." << std::endl;
}

Brain& Brain::operator=(const Brain& copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = copy._ideas[i];
	}
	return (*this);
}

std::string Brain::getIdea(unsigned int i) const 
{
	if (i < 100)
		return (this->_ideas[i]);
	return "index between 0 and 99";
}

void Brain::setIdea(unsigned int i, const std::string idea) {
	if (i < 100)
	{
		this->_ideas[i] = idea;
		return ;
	}
	std::cout << "index between 0 and 99" << std::endl;
}