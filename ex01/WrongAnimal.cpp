/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:28:27 by penpalac          #+#    #+#             */
/*   Updated: 2025/09/10 15:35:19 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : type(type)
{
	std::cout << "WrongAnimal parameterized constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : type(copy.type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Terrible animal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}