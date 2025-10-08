/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:44:57 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/07 19:05:12 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(std::string const & type) : AMateria(type)
{
	std::cout << "Cure parameterized constructor called" << std::endl;
}

Cure::Cure(Cure &copy) : AMateria(copy)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = copy;
}

Cure &Cure::operator=(Cure const &copy)
{
	std::cout << "Cure copy assignment operator called" << std::endl;
	if (this != &copy)
		*this = copy;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}