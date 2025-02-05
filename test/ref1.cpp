/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 20:09:31 by rafnasci          #+#    #+#             */
/*   Updated: 2025/02/05 20:24:17 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	byPtr(std::string *str)
{
	*str += " Enami";
}

void	byConstPtr(std::string const *str)
{
	std::cout << *str << std::endl;
}

void	byRef(std::string &str)
{
	str += " Kang";
}

void	byConstRef(std::string const &str)
{
	std::cout << str << std::endl;
}

void	byRef2(std::string &str, std::string str2)
{
	str += str2;
}

int main()
{
	std::string str = "I like Asa";
	
	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);

	str = "I like Haerin";
	std::cout << str << std::endl;
	byRef(str);
	byConstRef(str);

	str = "I like";
	byRef2(str, " An Yujin");
	byConstRef(str);
	return 0;
}
