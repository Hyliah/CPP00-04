/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:42:40 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/11 20:14:06 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << "🐶 Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other){
	std::cout << "🐶 Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other){
	if (this != &other)
		Animal::operator=(other);
	std::cout << "🐶 Dog copy assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog(){
	std::cout << "🐶 Dog destructor called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "🔊 Waf Waf" << std::endl;
}
