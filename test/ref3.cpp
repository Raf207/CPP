/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref3.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 20:25:14 by rafnasci          #+#    #+#             */
/*   Updated: 2025/02/05 20:50:33 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Student
{
private:
	std::string _login;
public:
	Student(std::string const &login);
	~Student();

	std::string	&getLoginRef();
	std::string const	&getLoginRefConst() const;
	std::string	*getLoginPtr();
	std::string const	*getLoginPtrConst() const;
};

std::string	&Student::getLoginRef()
{
	return this->_login;
}

std::string const &Student::getLoginRefConst() const
{
	return this->_login;
}

std::string	*Student::getLoginPtr()
{
	return &(this->_login);
}

std::string const *Student::getLoginPtrConst() const
{
	return &(this->_login);
}

Student::Student(std::string const &login): _login(login)
{
}

Student::~Student()
{
}

int	main()
{
	Student			bob = Student("bfubar");
	Student const	jim = Student("jfubar");

	std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
	std::cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst()) << std::endl;

	bob.getLoginRef() = "bobfubar";
	std::cout << bob.getLoginRefConst() << std::endl;
	
	*(bob.getLoginPtr()) = "bobbyfubar";
	std::cout << bob.getLoginRefConst() << std::endl;
}