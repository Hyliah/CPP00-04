/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 23:53:44 by hlichten          #+#    #+#             */
/*   Updated: 2026/01/05 15:54:43 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	std::cout << "ScavTrap default constructor calledfor " << _name << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "ScavTrap parametric constructor called for " << _name << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other){
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "ScavTrap copy operator called for "<< _name << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called for "<< _name << std::endl;
}

void ScavTrap::attack(const std::string& target){
	if (_energyPoints > 1 && _hitPoints > 1){
		std::cout << "→ ScavTrap "<< _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
		std::cout << "→ ScavTrap "<< _name << " has now " << _energyPoints << " energy points left" << std::endl;
	}
	else
		std::cout << "→ ScavTrap "<< _name << " cannot attack" << std::endl;
	
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << _name << " is in Guard mode" << std::endl;
}
