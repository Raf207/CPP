/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:48:24 by rafnasci          #+#    #+#             */
/*   Updated: 2025/02/05 22:09:24 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	
	private:

		std::string _name;
		std::string _surname;
		std::string	_nickname;
		std::string	_number;
		std::string	_secret;

	public:

		Contact(/* args */);
		~Contact();

		void	search(void);
		void	add(void);
		
};

#endif