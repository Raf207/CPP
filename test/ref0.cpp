/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref0.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 20:05:05 by rafnasci          #+#    #+#             */
/*   Updated: 2025/02/05 20:09:19 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	int	numberBalls = 42;

	int	*BallsPtr = &numberBalls;
	int	&BallsRef = numberBalls;

	std::cout << numberBalls << *BallsPtr << BallsRef << std::endl;

	*BallsPtr = 19;
	std::cout << numberBalls << std::endl;
	BallsRef = 10;
	std::cout << numberBalls << std::endl;

	return 0;
}
