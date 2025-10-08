/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:38:28 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/08 16:15:50 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : type("default")
{
	std::cout << "\033[32mAMateria default constructor called\033[0m" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "\033[32mAMateria parameterized constructor called\033[0m" << std::endl;
}

AMateria::AMateria(AMateria &copy)
{
	std::cout << "\033[32mAMateria copy constructor called\033[0m" << std::endl;
	*this = copy;
}

AMateria &AMateria::operator=(AMateria const &copy)
{
	std::cout << "\033[32mAMateria copy assignment operator called\033[0m" << std::endl;
	if (this != &copy)
		*this = copy;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "\033[32mAMateria destructor called\033[0m" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

AMateria* AMateria::clone() const
{
	return (NULL);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* uses " << this->type << " on " << target.getName() << " *" << std::endl;
}


