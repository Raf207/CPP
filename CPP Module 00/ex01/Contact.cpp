/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:49:27 by rafnasci          #+#    #+#             */
/*   Updated: 2025/02/05 22:55:04 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}

void	Contact::search(void)
{
	std::cout << "Name :" << this->_name << std::endl;
	std::cout << "Surname :" << this->_surname << std::endl;
	std::cout << "Nickname :" << this->_nickname << std::endl;
	std::cout << "Number :" << this->_number << std::endl;
	std::cout << "Secret :" << this->_secret << std::endl;
	return ;
}

void Contact::add(void)
{
	do{
		std::cout << "Name : ";
		std::getline(std::cin, this->_name);
	} while (this->_name.empty());
	do{
		std::cout << "Surname : ";
		std::getline(std::cin, this->_surname);
	} while (this->_surname.empty());
	do{
		std::cout << "Nickname : ";
		std::getline(std::cin, this->_nickname);
	} while (this->_nickname.empty());
	do{
		std::cout << "Number : ";
		std::getline(std::cin, this->_number);
	} while (this->_number.empty()
			|| this->_number.find_first_not_of("0123456789") != this->_number.npos);
	do{
		std::cout << "Secret : ";
		std::getline(std::cin, this->_secret);
	} while (this->_secret.empty());
}

int main()
{
	Contact instance;

	instance.add();
	return 0;
}