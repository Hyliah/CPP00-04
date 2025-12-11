/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:42:45 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/11 21:07:28 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << "🐱 Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other){
	std::cout << "🐱 Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other){
	if (this != &other)
		Animal::operator=(other);
	std::cout << "🐱 Cat copy assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat(){
	std::cout << "🐱 Cat destructor called" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "🔊 Miaow" << std::endl;
}
