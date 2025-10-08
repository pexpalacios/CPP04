/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:25:11 by penpalac          #+#    #+#             */
/*   Updated: 2025/09/11 16:52:30 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "\033[32mBrain default constructor called\033[0m" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Empty";
}

Brain::Brain(std::string ideas[100])
{
	std::cout << "\033[32mBrain parameterized constructor called\033[0m" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ideas[i];
}

Brain::Brain(const Brain &copy)
{
	std::cout << "\033[32mBrain copy constructor called\033[0m" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
}

Brain &Brain::operator=(const Brain &copy)
{
	std::cout << "\033[32mBrain copy assignment operator called\033[0m" << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "\033[32mBrain destructor called\033[0m" << std::endl;
}



