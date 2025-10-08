/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:49:01 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/08 16:19:25 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("default")
{
	std::cout << "\033[34mCharacter default constructor called\033[0m" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string const & name) : name(name)
{
	std::cout << "\033[34mCharacter parameterized constructor called\033[0m" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(Character &copy) : name(copy.name)
{
	std::cout << "\033[34mCharacter copy constructor called\033[0m" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (copy.inventory[i])
			this->inventory[i] = copy.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
}

Character &Character::operator=(Character const &copy)
{
	std::cout << "\033[34mCharacter copy assignment operator called\033[0m" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete (this->inventory[i]);
			if (copy.inventory[i])
				this->inventory[i] = copy.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "\033[34mCharacter destructor called\033[0m" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete (this->inventory[i]);
	}
}

/////

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->inventory[i] == NULL)
		{
			this->inventory[i] = m;		
			std::cout << "Equipped materia" << std::endl;
			break;
		}
		if (i == 3 && this->inventory[i] != NULL)
			std::cout << "Inventory full, can't equip more Materias" << std::endl;
	}
	
};

void Character::unequip(int idx)
{
	if  (idx >= 0 && idx <= 3)
	{
		for (int i = 0; i < 4; i++)
		{
			if (i == idx)
			{
				if (this->inventory[i] != NULL)
				{
					this->inventory[i] = NULL;
					std::cout << "Unequipped materia" << std::endl;
				}
				else
				{
					std::cout << "Nothing to unequip" << std::endl;
				}			
			}
		}
	}
	else
		std::cout << "Index out of bounds" << std::endl;
};

void Character::use(int idx, ICharacter& target)
{
	if  (idx >= 0 && idx <= 3)
	{
		if (this->inventory[idx])
			this->inventory[idx]->use(target);
		else
			std::cout << "Inventory slot empty" << std::endl;
	}
	else
		std::cout << "Index out of bounds" << std::endl;
};
