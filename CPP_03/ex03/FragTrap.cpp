/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 20:34:59 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/19 16:34:09 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int FragTrap::_defaultAttackDamage = 30;
int FragTrap::_defaultEnergyPoint = 100;
int FragTrap::_defaultHitPoint = 100;

FragTrap::FragTrap() : ClapTrap(){
	std::cout << "FragTrap default constructor calledfor " << _name << std::endl;
	_hitPoints = _defaultHitPoint;
	_energyPoints = _defaultEnergyPoint;
	_attackDamage = _defaultAttackDamage;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << "FragTrap parametric constructor called for " << _name << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other){
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "FragTrap copy operator called for "<< _name << std::endl;
	return (*this);
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called for "<< _name << std::endl;
}

void FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << _name << "gave an hi five to the guys" << std::endl;
}
