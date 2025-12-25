/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:24:34 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/20 14:46:57 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie {
	private : 
		std::string _name;
	
	public :
		Zombie(std::string name);
		~Zombie(void);
		
		void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif