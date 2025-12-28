/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 15:54:42 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/28 20:11:13 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ICharacter.hpp"

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class AMateria
{
	protected:
			std::string _type;

		public:
			AMateria();
			AMateria(std::string const & type);
			AMateria(const AMateria& other);
			AMateria& operator=(const AMateria& other);
			~AMateria();
			
			std::string const & getType() const;
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter& target);
};

#endif

//AMateria is an Abstract Class with Cure and Ice as childs. 
//Cant be instanced by itself. More like a structure for Ice ans Cure.