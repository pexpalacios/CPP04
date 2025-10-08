/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:31:36 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/07 19:32:58 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
class ICharacter;

class AMateria
{
	protected:
	std::string const type;

	public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria &copy);
	AMateria &operator=(AMateria const &copy);
	virtual ~AMateria();

	std::string const & getType() const;
	
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif