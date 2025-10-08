/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:34:06 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/08 15:59:47 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j;
	delete i;
	std::cout << std::endl;
	std::cout << std::endl;
	Animal* animal[6];
	for (int i = 0; i < 6; i++)
	{
		std::cout << "Animal[" << i << "] vvv" << std::endl;
		if (i % 2 == 0)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
		std::cout << std::endl;
	}
	std::cout << "=== Destructors ===" << std::endl;
	for (int i = 0; i < 6; i++)
	{
		delete animal[i];
		std::cout << std::endl;
	}
	return (0);
}