/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 12:30:59 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/12 14:35:19 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"



int main( void ) {
	
	// Define triangle ABC
    Point a(0.0f, 0.0f);
    Point b(5.0f, 0.0f);
    Point c(2.5f, 5.0f);

    // Define test points
    Point inside(2.5f, 2.0f);
    Point outside(5.0f, 5.0f);
    Point edge(2.5f, 0.0f);
    Point vertex(0.0f, 0.0f);

    // Run tests
    std::cout << "inside: " << (bsp(a, b, c, inside) ? "true" : "false") << std::endl;
    std::cout << "outside: " << (bsp(a, b, c, outside) ? "true" : "false") << std::endl;
    std::cout << "edge: " << (bsp(a, b, c, edge) ? "true" : "false") << std::endl;
    std::cout << "vertex: " << (bsp(a, b, c, vertex) ? "true" : "false") << std::endl;
	
	return 0;
}
