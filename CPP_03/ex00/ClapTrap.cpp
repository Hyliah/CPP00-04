/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:03:00 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/09 22:58:55 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "parametric constructor called for "<< _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
	: _name(other._name), 
	_hitPoints(other._hitPoints), 
	_energyPoints(other._energyPoints), 
	_attackDamage(other._attackDamage){
	std::cout << "copy constructor called" << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other){
	if (this != &other){
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}
ClapTrap::~ClapTrap(){
	std::cout << "destructor called for "<< _name << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if (_energyPoints > 1 && _hitPoints > 1){
		std::cout << "→ "<< _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
		std::cout << "→ "<< _name << " has now " << _energyPoints << " energy points left" << std::endl;
	}
	else
		std::cout << "→ "<< _name << " cannot attack" << std::endl;
	
}
void ClapTrap::takeDamage(unsigned int amount){
	_hitPoints -= amount;
	std::cout << "→ "<< _name << " has taken " << amount << " of damage and has now " << _hitPoints << " health points!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount){
	if (_energyPoints > 1){
		_hitPoints += amount;
		std::cout << "→ "<< _name << " is repaird by " << amount << " and has now " << _hitPoints << " health points!" << std::endl;
		_energyPoints--;
		std::cout << "→ "<< _name << " has now " << _energyPoints << " energy points left" << std::endl;
	}
		else
		std::cout << "→ "<< _name << " has no energy points left" << std::endl;
}
