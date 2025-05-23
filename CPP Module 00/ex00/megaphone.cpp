/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:09:35 by rafnasci          #+#    #+#             */
/*   Updated: 2025/02/05 19:18:14 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else{
		for (int i = 1; i < ac; i++){
			for (int j = 0; av[i][j]; j++)
				av[i][j] = toupper(av[i][j]);
			std::cout << av[i] ;
		}
		std::cout << std::endl;
	}
	return 0;
}
