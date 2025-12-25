/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 18:00:59 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/24 23:55:12 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
// -------- Constructors and Destructor -----------
AMateria::AMateria(){
}

AMateria::AMateria(std::string const & type){
}

AMateria::AMateria(AMateria& other){
}

AMateria& AMateria::operator=(AMateria& other){
	if (this != other){

	}
	return (*this);
}

AMateria::~AMateria(){
}

// -------- Other member functions ---------

//Returns the materia type
std::string const & AMateria::getType() const{
	return (_type);
}

virtual AMateria* AMateria::clone() const{
}

virtual void AMateria::use(ICharacter& target){
}
