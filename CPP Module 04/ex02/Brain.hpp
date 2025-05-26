/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 10:09:49 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/26 14:14:35 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string	_ideas[100];
public:
	Brain();
	Brain(const Brain &copy);
	~Brain();

	Brain& operator=(const Brain& copy);
	std::string	getIdea(unsigned int i) const;
	void setIdea(unsigned int i, const std::string idea);
};


#endif