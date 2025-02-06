/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:38:49 by rafnasci          #+#    #+#             */
/*   Updated: 2025/02/06 06:14:41 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook()
{
	nb_contact = 0;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void	PhoneBook::display()
{
	std::cout << " -------------------------------------------" << std::endl;
	std::cout << "|  index   |first name|last name | nickname |" << std::endl;
	std::cout << " -------------------------------------------" << std::endl;
	for (int i = 0; i < nb_contact && i < 8; i++)
	{
		std::cout << "|        " << i << ".|";
		for (int j = 0; j < 3; j++)
		{
			std::cout << std::setw(10);
			this->_info = PhoneBook::_contacts[i].getInfo(j);
			if (this->_info.size() > 9)
			{
				this->_info.resize(9);
				this->_info.resize(10, '.');
			}
			std::cout <<this->_info << "|";
		}
		std::cout << std::endl;
		std::cout << " -------------------------------------------" << std::endl;
	}
}

void	PhoneBook::add()
{
	Contact	contact;

	contact.add();
	this->_contacts[nb_contact % 8] = contact;
	nb_contact++;
}

void	PhoneBook::search()
{
	int index;

	if (this->nb_contact == 0)
	{
		std::cout << "Add at least one contact" << std::endl;
		return ;
	}
	PhoneBook::display();
	do{
		if (this->nb_contact < 8)
			std::cout <<"Contact index between 0 and " << (this->nb_contact % 8) - 1 <<": ";
		else
			std::cout <<"Contact index between 0 and 7: " ;
		std::getline(std::cin , this->_info);
		if (std::cin.eof())
			return ;
		index = std::atoi(this->_info.c_str());
	} while (this->_info.size() > 1 || this->_info.empty()
			|| index > this->nb_contact - 1 || index > 8
			|| this->_info.find_first_not_of("01234567") != this->_info.npos);
	PhoneBook::_contacts[index].search();
}
