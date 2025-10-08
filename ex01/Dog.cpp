/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:33:37 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/08 15:58:38 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "\033[33mDog default constructor called\033[0m" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "\033[33mDog parameterized constructor called\033[0m" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "\033[33mDog copy constructor called\033[0m" << std::endl;
	this->brain = new Brain(*copy.brain);
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		if(this->brain)
			delete this->brain;
		this->brain = new Brain(*copy.brain);
	}
	std::cout << "\033[33mDog copy assignment operator called\033[0m" << std::endl;
	return *this;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "\033[33mDog destructor called\033[0m" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "guau" << std::endl;
}