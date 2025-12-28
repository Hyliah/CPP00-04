/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 18:37:40 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/28 19:46:24 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


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

AMateria* Cure::clone() const{
    return new Cure(*this);
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}