/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 18:00:59 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/28 20:14:01 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
// -------- Constructors and Destructor -----------
AMateria::AMateria() : _type("undefined") {
}

AMateria::AMateria(std::string const & type) : _type(type) {
}

AMateria::AMateria(const AMateria& other) : _type(other._type) {
}

AMateria& AMateria::operator=(const AMateria& other){
	if (this != &other){
		_type = other._type;
	}
	return (*this);
}

AMateria::~AMateria(){
}

// -------- Other member functions ---------

std::string const & AMateria::getType() const{
	return (_type);
}

void AMateria::use(ICharacter& target){
	std::cout << "* uses " << _type << " on " << target.getName() << " *" << std::endl;
}
