/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 18:37:38 by hlichten          #+#    #+#             */
/*   Updated: 2026/01/01 02:57:25 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
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
    std::cout <<"* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
}
