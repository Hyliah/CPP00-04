/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:24:29 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/14 16:45:28 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//This function creates a zombie, names it, and returns it so you can use it outside of the function scope.
Zombie* newZombie( std::string name ){
    Zombie *Z = new Zombie(name);
    return Z;
}
