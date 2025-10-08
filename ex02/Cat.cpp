/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:31:04 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/08 16:24:21 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "\033[34mCat default constructor called\033[0m" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "\033[34mCat parameterized constructor called\033[0m" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "\033[34mCat copy constructor called\033[0m" << std::endl;
	this->brain = new Brain(*copy.brain);
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		if(this->brain)
			delete this->brain;
		this->brain = new Brain(*copy.brain);
	}
	std::cout << "\033[34mCat copy assignment operator called\033[0m" << std::endl;
	return *this;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "\033[34mCat destructor called\033[0m" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "MIAU" << std::endl;
}