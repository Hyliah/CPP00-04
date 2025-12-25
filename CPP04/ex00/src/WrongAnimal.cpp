/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:52:31 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/11 21:14:04 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("default"){
    std::cout << "🦁 WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : _type(type){
    std::cout << "WrongAnimal parametric constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type){
    std::cout << "🦁 WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
    if (this != &other)
        _type = other._type;
    std::cout << "🦁 WrongAnimal copy assignment operator called" << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal(){
    std::cout << "🦁 WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const{
    std::cout << "🔊 WrongAnimal generic sound made" << std::endl;
}

std::string WrongAnimal::getType() const{
    return (_type);
}