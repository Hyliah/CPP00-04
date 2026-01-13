/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 18:37:40 by hlichten          #+#    #+#             */
/*   Updated: 2026/01/13 01:55:33 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// -------- Constructors and Destructor -----------

Cure::Cure() : AMateria("cure") {
}

Cure::Cure(const Cure& other) : AMateria(other) {
}

Cure& Cure::operator=(const Cure& other){
    if (this != &other){
        AMateria::operator=(other);
    }
    return (*this);
}

Cure::~Cure(){
}

// -------- Other Member Functions -----------

AMateria* Cure::clone() const{
    return new Cure(*this);
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
