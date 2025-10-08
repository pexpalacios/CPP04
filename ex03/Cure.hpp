/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:45:39 by penpalac          #+#    #+#             */
/*   Updated: 2025/09/15 16:45:50 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
	Cure();
	Cure(std::string const & type);
	Cure(Cure &copy);
	Cure &operator=(Cure const &copy);
	~Cure();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif