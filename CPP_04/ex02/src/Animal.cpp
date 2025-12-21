/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:42:50 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/11 21:13:45 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("default"){
    std::cout << "🦁 Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string& type) : _type(type) {
    std::cout << "🦁 Animal parametric constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : _type(other._type){
    std::cout << "🦁 Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other){
    if (this != &other)
        _type = other._type;
    std::cout << "🦁 Animal copy assignment operator called" << std::endl;
    return (*this);
}

Animal::~Animal(){
    std::cout << "🦁 Animal destructor called" << std::endl;
}

void Animal::makeSound() const{
    std::cout << "🔊 Animal generic sound made" << std::endl;
}

std::string Animal::getType() const{
    return (_type);
}