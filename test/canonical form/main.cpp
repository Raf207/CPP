/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:07:45 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/09 16:38:31 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

int main(){

	Sample instance1;
	Sample instance2( 42 );
	Sample instance3( instance1 );

	std::cout << "instance 1 foo: " << instance1 << std::endl;
	std::cout << "instance 2 foo: " << instance2 << std::endl;
	std::cout << "instance 3 foo: " << instance3 << std::endl;

	instance3 = instance2;
	std::cout << "instance 3 foo: " << instance3 << std::endl;
	
	return 0;
}
