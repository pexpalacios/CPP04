/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:48:13 by penpalac          #+#    #+#             */
/*   Updated: 2025/09/15 16:48:57 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
	std::string name;
	AMateria* inventory[4];

	public:
	Character();
	Character(std::string const & name);
	Character(Character &copy);
	Character &operator=(Character const &copy);
	~Character();

	std::string const & getName() const;

	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif