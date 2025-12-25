/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 21:28:28 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/19 16:37:04 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap(), FragTrap(){
	_name = "default";
	ScavTrap::_name = "default_clap_name";
	_hitPoints = FragTrap::_defaultHitPoint;
	_energyPoints = ScavTrap::_defaultEnergyPoint;
	_attackDamage = FragTrap::_defaultAttackDamage;
	// std::cout << "DiamondTrap default constructor called for " << _name << std::endl;
	// std::cout << "HP = " << _hitPoints << " EP = " << _energyPoints << " AD = " << _attackDamage << std::endl; 
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name){
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap parametric constructor called for " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other){
	_name = other._name;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other){
	if (this != &other){
		ClapTrap::operator=(other);
		_name = other._name;
	}
	std::cout << "DiamondTrap copy operator called for "<< _name << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap destructor called for "<< _name << std::endl;
}

void DiamondTrap::whoAmI(){
	std::cout << "My name is " << _name << std::endl;
	std::cout << "My Clap name is " << ClapTrap::_name << std::endl;
}