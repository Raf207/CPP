/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:49:27 by rafnasci          #+#    #+#             */
/*   Updated: 2025/02/06 06:14:54 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


std::string	Contact::getInfo(int i)
{
	if (i == 0)
		return this->_name;
	else if (i == 1)
		return this->_surname;
	else
		return this->_nickname;
}

void	Contact::search(void)
{
	std::cout << "Name     : " << this->_name << std::endl;
	std::cout << "Surname  : " << this->_surname << std::endl;
	std::cout << "Nickname : " << this->_nickname << std::endl;
	std::cout << "Number   : " << this->_number << std::endl;
	std::cout << "Secret   : " << this->_secret << std::endl;
	return ;
}

void Contact::add(void)
{
	do{
		std::cout << "Name     : ";
		std::getline(std::cin, this->_name);
		if (std::cin.eof())
			return ;
	} while (this->_name.empty()
			|| this->_number.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") != this->_number.npos);
	do{
		std::cout << "Surname  : ";
		std::getline(std::cin, this->_surname);
		if (std::cin.eof())
			return ;
	} while (this->_surname.empty()
			|| this->_number.find_first_not_of("abcdefghijklmnopqrstuvwxyz") != this->_number.npos);
	do{
		std::cout << "Nickname : ";
		std::getline(std::cin, this->_nickname);
		if (std::cin.eof())
			return ;
	} while (this->_nickname.empty());
	do{
		std::cout << "Number   : ";
		std::getline(std::cin, this->_number);
		if (std::cin.eof())
			return ;
	} while (this->_number.empty()
			|| this->_number.find_first_not_of("0123456789") != this->_number.npos);
	do{
		std::cout << "Secret   : ";
		std::getline(std::cin, this->_secret);
		if (std::cin.eof())
			return ;
	} while (this->_secret.empty());
}
