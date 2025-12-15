/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:42:40 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/15 15:52:27 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << "🐶 Dog default constructor called" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other){
	std::cout << "🐶 Dog copy constructor called" << std::endl;
	_brain = new Brain();
}

Dog& Dog::operator=(const Dog& other){
	if (this != &other)
		Animal::operator=(other);
	std::cout << "🐶 Dog copy assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog(){
	std::cout << "🐶 Dog destructor called" << std::endl;
	delete _brain;
}

void Dog::makeSound() const{
	std::cout << "🔊 Waf Waf" << std::endl;
}
