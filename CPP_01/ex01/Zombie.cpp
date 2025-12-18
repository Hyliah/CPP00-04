/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:54:22 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/18 18:08:51 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	this->_name = name;
	announce();
}

Zombie::~Zombie(void){
	std::cout << this->_name << ": is no longer with us" << std::endl;
}
		
void Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}