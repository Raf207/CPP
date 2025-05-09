/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 15:53:14 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/09 16:39:18 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
# define TEST_HPP

#include <iostream>

class Sample
{
private:

	int _foo;


public:

	Sample( void );								// Canonical
	Sample(int const n);
	Sample(Sample const & src);					// Canonical (nouvelle instance de cree)
	~Sample(void);								// Canonical
	
	Sample &	operator=(Sample const & rhs);	// Canonical (Mise a jour de l'instance courante)

	int	getFoo(void) const;
};

std::ostream &	operator<<(std::ostream & o, Sample const & i);

#endif