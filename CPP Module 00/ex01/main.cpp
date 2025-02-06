/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 04:22:43 by rafnasci          #+#    #+#             */
/*   Updated: 2025/02/06 06:33:07 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook		phoneBook;
	std::string		str;

	std::cout << "Welcome to your Phone Book !" << std::endl;
	std::cout << "Use 'ADD' to add a new contact." << std::endl;
	std::cout << "Use 'SEARCH' to display a contact." << std::endl;
	std::cout << "Use 'EXIT' to exit your Phone Book." << std::endl;
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, str);
		if (str == "EXIT")
		{
			std::cout << "Exiting your Phone Book." << std::endl;
			break ;
		}
		else if (str == "ADD")
		{
			phoneBook.add();
		}
		else if (str == "SEARCH")
		{
			phoneBook.search();
		}
		else if (!std::cin.eof())
			std::cout << "Enter valid input(ADD, SEARCH or EXIT)" << std::endl;
		if (std::cin.eof())
		{
			std::cout << std::endl << "Exiting your Phone Book." << std::endl;
			break ;
		}
	}
}
