/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 15:58:34 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/21 18:24:59 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "IMateriaSource.hpp"

class ICharacter
{
	protected :
		std::string _Name;

	public:
		ICharacter();
		ICharacter(ICharacter &other);
		ICharacter& operator=(ICharacter &other);
		virtual ~ICharacter() {}

		virtual std::string const& getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};