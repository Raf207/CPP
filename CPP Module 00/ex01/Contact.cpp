/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:49:27 by rafnasci          #+#    #+#             */
/*   Updated: 2025/02/05 22:08:47 by rafnasci         ###   ########.fr       */
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