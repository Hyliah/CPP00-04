/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 15:01:08 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/28 20:20:55 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

// -------- Constructors and Destructor -----------

Character::Character() : _name("Unnamed"), _floor(create_floor()) {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const std::string& name) : _name(name), _floor(create_floor()) {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	_floor = create_floor();
}

Character::Character(const Character& other) : _name(other._name) {
	for (int i = 0; i < 4; i++) {
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	_floor = create_floor();
}

Character& Character::operator=(const Character& other) {
	if (this != &other) {
		_name = other._name;
		for (int i = 0; i < 4; i++) {
			delete _inventory[i];
			if (other._inventory[i])
				_inventory[i] = other._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
		delete_floor(_floor);
		_floor = create_floor();
	}
	return *this;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
	delete_floor(_floor);
}

// -------- Other member functions ---------

const std::string& Character::getName() const {
	return _name;
}

void Character::equip(AMateria* m) {
	if (!m)
		return;
	for (int i = 0; i < 4; i++) {
		if (_inventory[i] == NULL) {
			_inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= 4 || !_inventory[idx])
		return;
	create_item(_floor, _inventory[idx]);
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && _inventory[idx]) {
		_inventory[idx]->use(target);
	}
}

// -------- Helper functions for floor management ---------

t_floor* create_floor() {
	t_floor* new_floor = new t_floor;
	new_floor->head = NULL;
	new_floor->index = 0;
	return new_floor;
}

t_item* create_item(t_floor* floor, AMateria* m) {
	t_item* new_item = new t_item;
	new_item->materia = m;
	new_item->next = NULL;
	if (floor->head == NULL) {
		floor->head = new_item;
	} else {
		t_item* temp = floor->head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = new_item;
	}
	floor->index++;
	return new_item;
}

void	delete_floor(t_floor* floor) {
	if (!floor)
		return;

	t_item* current = floor->head;
	t_item* next;

	while (current != NULL) {
		next = current->next;
		delete current->materia;
		delete current;
		current = next;
	}
	delete floor;
}