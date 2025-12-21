/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 21:40:27 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/21 15:44:39 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main(){
	Animal* petZoo[6];
	// Animal a;
	// new Animal(); // --> compilation error because Animal is Abstract

	std::cout << "----- Creating Animals -----" << std::endl;
	for (int i = 0; i < 6; i++){
		if (i % 2 == 0)
			petZoo[i] = new Dog();
		else
			petZoo[i] = new Cat();
	}

	std::cout << "\n----- Making Sounds -----" << std::endl;
	for (int i = 0; i < 6; i++){
		petZoo[i]->makeSound();
	}

	std::cout << "\n----- Deleting Animals -----" << std::endl;
	for (int i = 0; i < 6; i++){
		delete petZoo[i];
	}
	return 0;
}

