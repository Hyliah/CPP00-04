/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 18:00:56 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/24 23:34:08 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

// -------- Constructors and Destructor -----------
ICharacter::ICharacter(){
}

ICharacter::ICharacter(ICharacter &other){
}

ICharacter& ICharacter::operator=(ICharacter &other){
	if (this != other){

	}
	return (*this);
}

ICharacter::~ICharacter() {
}

// -------- Other member functions ---------
std::string const& ICharacter::getName(){
	return (this-> _Name);
}

void ICharacter::equip(AMateria* m) = 0{
}

void ICharacter::unequip(int idx) = 0{
}

void ICharacter::use(int idx, ICharacter& target) = 0{
}