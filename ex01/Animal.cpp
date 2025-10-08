/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:28:27 by penpalac          #+#    #+#             */
/*   Updated: 2025/09/10 15:48:20 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string &type) : type(type)
{
	std::cout << "Animal parameterized constructor called" << std::endl;
}

Animal::Animal(const Animal &copy) : type(copy.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	std::cout << "Animal copy assignment operator called" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Awesome animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}