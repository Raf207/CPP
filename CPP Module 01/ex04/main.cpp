/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:38:27 by rafnasci          #+#    #+#             */
/*   Updated: 2025/05/08 23:23:49 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void freplace(std::ifstream& ifstr, std::ofstream& ofstr, char **av)
{
	std::string	s1;
	std::string	s2;
	std::string	line;
	std::size_t	pos;
	
	s1 = av[2];
	s2 = av[3];
	if (s1.empty())
		return ;
	while (std::getline(ifstr, line))
	{
		pos = 0;
		while (!s1.empty() && (pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.size());
			line.insert(pos, s2);
			pos += s2.size();
		}
		ofstr << line << std::endl;
	}
}

int	openfiles(char **av)
{
	std::ifstream	ifstr;
	std::ofstream	ofstr;
	std::string		infileName;
	std::string		outfileName;
	
	infileName = av[1];
	ifstr.open(infileName.c_str());
	if (!ifstr.is_open())
	{
		std::cerr << "error: failed to open input file.\n";
		return 0;
	}
	outfileName = infileName + ".replace";
	ofstr.open(outfileName.c_str(), std::ofstream::out | std::ofstream::trunc);
	if (!ofstr.is_open())
	{
		ifstr.close();
		std::cerr << "error: failed to create output file.\n";
		return 0;
	}
	freplace(ifstr, ofstr, av);
	ifstr.close();
	ofstr.close();
	return 1;
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "error: Only 3 arguments\n";
		return 1;
	}
	if (!openfiles(av))
		return 1;
	return 0;
}