/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 16:27:19 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/21 18:14:29 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

Weapon::Weapon(std::string type){
    this->_type = type;
}

Weapon::~Weapon(void){
}

void    Weapon::setType(std::string type){
    this->_type = type;
}

std::string Weapon::getType(void){
    return (this->_type);
}