/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 15:53:14 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/09 16:08:43 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
# define TEST_HPP

#include <iostream>

class Integer
{
private:

	int _n;


public:

	Integer();
	Integer(int const n);
	~Integer();

	int	getValue(void) const;
	
	Integer &	operator=(Integer const & rhs); //rhs = righthandside (lhs = this->..)
	Integer		operator+(Integer const & rhs) const;
};

std::ostream &	operator<<(std::ostream & o, Integer const & rhs);

#endif