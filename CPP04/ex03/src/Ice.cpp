/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 18:37:38 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/28 19:21:25 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("cure") {
}

Ice::Ice(const Ice& other) : AMateria(other) {
}

Ice& Ice::operator=(const Ice& other){
    if (this != &other){
        AMateria::operator=(other);
    }
    return (*this);
}

Ice::~Ice(){
}

AMateria* Ice::clone() const{
    return new Ice(*this);
}

void Ice::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
