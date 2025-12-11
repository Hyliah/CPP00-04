/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:52:33 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/11 21:15:26 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
	std::cout << "🐱 WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other){
	std::cout << "🐱 WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other){
	if (this != &other)
		WrongAnimal::operator=(other);
	std::cout << "🐱 WrongCat copy assignment operator called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat(){
	std::cout << "🐱 WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "🔊 Miaow" << std::endl;
}
