/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 15:58:34 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/28 20:00:53 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// Interface cant be instantiated directly so no .cpp file is needed
class AMateria;

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

class ICharacter
{
	public:
		virtual ~ICharacter() {}

		virtual std::string const& getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif