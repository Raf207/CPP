/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:06:28 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/08 20:08:47 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){

	Zombie	instance("Haerin");
	Zombie*	instancep = newZombie("Asa");

	instance.annouce();
	instancep->annouce();
	
	randomChump("Yujin");
	
	delete instancep;
	return 0;
}