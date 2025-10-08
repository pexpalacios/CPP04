/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:34:06 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/07 16:48:36 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	//Gives error
	//const Animal* meta = new Animal();
	
	Animal* animal[3];
	for (int i = 0; i < 3; i++)
	{
		std::cout << "Animal[" << i << "] vvv" << std::endl;
		if (i % 2 == 0)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
		std::cout << std::endl;
	}
	std::cout << "=== Destructors ===" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		delete animal[i];
		std::cout << std::endl;
	}

return 0;
}