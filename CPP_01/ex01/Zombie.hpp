/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:54:19 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/20 15:36:56 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <new>
# include <stdio.h>
# include <stdlib.h>

class Zombie{
	private :
		std::string _name;
	public :
		Zombie(std::string name);
		~Zombie();
		void announce( void );
};

Zombie* zombieHorde(int N, const std::string& name);
#endif