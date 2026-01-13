/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 16:13:22 by hlichten          #+#    #+#             */
/*   Updated: 2026/01/12 22:52:46 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

// -------- Constructors and Destructor -----------
MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
		std::cout << "MateriaSource created with 4 free slots\n" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	for (int i = 0; i < 4; i++) {
		if (other._materias[i])
			_materias[i] = other._materias[i]->clone();
		else
			_materias[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	if (this != &other) {
		for (int i = 0; i < 4; i++) {
//			if (_materias[i] != NULL)
				delete _materias[i];
			if (other._materias[i])
				_materias[i] = other._materias[i]->clone();
			else
				_materias[i] = NULL;
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
		if (_materias[i] == NULL) {
			_materias[i] = m;
			std::cout << "Materia " << m->getType() << " learned" << std::endl; //not asked in the subject, more readable for tests
			return;
		}
	}
	std::cout << "❌ Not slots left, can't be learned" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (_materias[i] && _materias[i]->getType() == type) {
			std::cout << "Materia " << type << " created" << std::endl; //not asked in the subject, more readable for tests
			return _materias[i]->clone();
		}
	}
	std::cout << "❌ Materia can't be created" << std::endl; //not asked in the subject, more readable for tests
	return NULL;
}
