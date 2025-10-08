/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 17:54:29 by penpalac          #+#    #+#             */
/*   Updated: 2025/09/15 18:01:43 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* Materias[4];
	
	public:
		MateriaSource();
		MateriaSource(AMateria* type);
		MateriaSource(MateriaSource &copy);
		MateriaSource &operator=(MateriaSource const &copy);
		virtual ~MateriaSource();
		
		virtual void learnMateria(AMateria* m);
		virtual AMateria* createMateria(std::string const & type);
};

#endif