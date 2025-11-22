/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 18:23:18 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/21 18:27:05 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"
#include "HumanB.hpp"

class HumanA
{
	private:
		std::string	_name;
		Weapon& _weapon;
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);

		void	attack(void);
};

#endif