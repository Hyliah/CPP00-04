/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:42:45 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/15 16:26:52 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << "🐱 Cat default constructor called" << std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other){
	std::cout << "🐱 Cat copy constructor called" << std::endl;
	_brain = new Brain(*other._brain);
}

Cat& Cat::operator=(const Cat& other){
	if (this != &other){
		Animal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	std::cout << "🐱 Cat copy assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat(){
	std::cout << "🐱 Cat destructor called" << std::endl;
	delete _brain;
}

void Cat::makeSound() const{
	std::cout << "🔊 Miaow" << std::endl;
}
