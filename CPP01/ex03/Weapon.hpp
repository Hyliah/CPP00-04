/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 18:27:42 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/21 18:35:43 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon{
	private:
		std::string _type;

	public:
		Weapon(std::string type);
		~Weapon(void);

		void	setType(std::string type);
		std::string getType(void);
};

#endif
