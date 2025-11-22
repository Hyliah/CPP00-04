/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 18:23:14 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/21 18:16:26 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"
#include "HumanA.hpp"

class HumanB{
	private:
		std::string	_name;
		Weapon* _weapon;
	public:
		HumanB(std::string name);
		~HumanB(void);

        void    attack(void);
        void    setWeapon(Weapon& weapon);
};

#endif