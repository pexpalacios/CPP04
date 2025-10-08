/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 17:55:11 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/08 16:22:43 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->Materias[i] = NULL;
}

MateriaSource::MateriaSource(AMateria* m)
{
	std::cout << "MateriaSource parameterized constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->Materias[i] = m;
}

MateriaSource::MateriaSource(MateriaSource &copy)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if (copy.Materias[i])
			this->Materias[i] = copy.Materias[i]->clone();
		else
			this->Materias[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &copy)
{
	std::cout << "MateriaSource copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		for(int i = 0; i < 4; i++)
		{
			if (this->Materias[i] != copy.Materias[i])
				this->Materias[i] = copy.Materias[i]->clone();
			else
				this->Materias[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->Materias[i] == NULL)
		{
			this->Materias[i] = m;		
			std::cout << "Learned materia: " << m->getType() << std::endl;
			return ;
		}
	}
	if (this->Materias[3] != NULL)
		std::cout << "MateriaSource can't learn more Materias" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->Materias[i] && this->Materias[i]->getType() == type)
		{
			std::cout << "\033[92mCreated materia of type: \033[0m" << type << std::endl;
			return (this->Materias[i]->clone());
		}
	}
	std::cout << "Materia of type: " << type << " not found" << std::endl;
	return (NULL);
}
