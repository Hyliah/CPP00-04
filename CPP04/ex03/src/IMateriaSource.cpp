/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 17:07:29 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/25 03:30:31 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

// -------- Constructors and Destructor -----------

IMateriaSource::IMateriaSource(){
}

IMateriaSource::IMateriaSource(IMateriaSource& other){

}

IMateriaSource& IMateriaSource::operator=(IMateriaSource& other){
    if (this != other){

    }
    return (*this);
}

IMateriaSource::~IMateriaSource(){
}


// -------- Other member functions ---------

// Copies the Materia passed as a parameter and stores it in memory so it can be cloned later.
// Like the Character, the MateriaSource can know at most 4 Materias. 
// They are not necessarily unique.
void IMateriaSource::learnMateria(AMateria*){

}

// Returns a new Materia. 
// The latter is a copy of the Materia previously learned by the MateriaSource whose type equals the one passed as parameter. 
// Returns 0 if the type is unknown.
AMateria* IMateriaSource::createMateria(std::string const & type){

}
