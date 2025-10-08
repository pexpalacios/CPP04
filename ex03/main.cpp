/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:04:46 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/08 16:19:02 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	std::cout << "\033[33m=== Materia constructors ===v" << std::endl;
	IMateriaSource* src = new MateriaSource();
	std::cout << std::endl;
	
	std::cout << "=== Learn materias ===\033[0m" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << std::endl;
	
	std::cout << "\033[33m=== Character constructors ===\033[0m" << std::endl;
	ICharacter* me = new Character("me");
	std::cout << std::endl;

	std::cout << "\033[33m=== Equipping materia ===\033[0m" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl;
	
	std::cout << "\033[33m=== Using materia ===\033[0m" << std::endl;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	std::cout << std::endl;

	std::cout << "\033[33m=== Filling inventory ===\033[0m" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->unequip(3);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	std::cout << std::endl;

	std::cout << "\033[33m=== Destructors ===\033[0m" << std::endl;
	delete bob;
	delete me;
	delete src;

	return (0);
}