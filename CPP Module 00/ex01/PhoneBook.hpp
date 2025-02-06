/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:40:13 by rafnasci          #+#    #+#             */
/*   Updated: 2025/02/06 04:28:48 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:

		Contact	_contacts[8];
		
		int			nb_contact;
		
		std::string	_info ;

	public:
	
		PhoneBook();
		~PhoneBook();

		void	display();
		void	search();
		void	add();
};

#endif