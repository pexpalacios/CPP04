/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:41:51 by penpalac          #+#    #+#             */
/*   Updated: 2025/09/15 16:42:19 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
	Ice();
	Ice(std::string const & type);
	Ice(Ice &copy);
	Ice &operator=(Ice const &copy);
	~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif