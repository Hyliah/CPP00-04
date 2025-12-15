/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 21:40:27 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/15 16:04:46 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main(){
	Animal* petZoo[6];

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

