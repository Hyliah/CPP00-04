/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 16:13:22 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/28 20:08:59 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"


// -------- Constructors and Destructor -----------
MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		_materias[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	for (int i = 0; i < 4; i++) {
		if (other._materias[i])
			_materias[i] = other._materias[i]->clone();
		else
			_materias[i] = nullptr;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	if (this != &other) {
		for (int i = 0; i < 4; i++) {
			delete _materias[i];
			if (other._materias[i])
				_materias[i] = other._materias[i]->clone();
			else
				_materias[i] = nullptr;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		delete _materias[i];
}

// -------- Other member functions ---------


// Copies the Materia passed as a parameter and stores it in memory so it can be cloned later.
// Like the Character, the MateriaSource can know at most 4 Materias. 
// They are not necessarily unique.

void MateriaSource::learnMateria(AMateria* m) {
	if (!m)
		return;
	for (int i = 0; i < 4; i++) {
		if (_materias[i] == nullptr) {
			_materias[i] = m->clone();
			return;
		}
	}
	// If we reach here, it means there was no empty slot, materia is not ignored
}

// Returns a new Materia. 
// The latter is a copy of the Materia previously learned by the MateriaSource whose type equals the one passed as parameter. 
// Returns 0 if the type is unknown.

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (_materias[i] && _materias[i]->getType() == type) {
			return _materias[i]->clone();
		}
	}
	return nullptr;
}
