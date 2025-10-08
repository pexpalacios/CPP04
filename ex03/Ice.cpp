/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:42:52 by penpalac          #+#    #+#             */
/*   Updated: 2025/09/15 18:15:11 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(std::string const & type) : AMateria(type)
{
	std::cout << "Ice parameterized constructor called" << std::endl;
}

Ice::Ice(Ice &copy) : AMateria(copy)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
}

Ice &Ice::operator=(Ice const &copy)
{
	std::cout << "Ice copy assignment operator called" << std::endl;
	if (this != &copy)
		*this = copy;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}