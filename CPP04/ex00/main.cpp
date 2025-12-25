/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:53:27 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/11 21:34:04 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << std::endl;
    std::cout << "Basic tests" << std::endl;
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << std::endl;
    std::cout << animal->getType() << " makes: ";
    animal->makeSound();
    
    std::cout << dog->getType() << " makes: ";
    dog->makeSound();

    std::cout << cat->getType() << " makes: ";
    cat->makeSound();
    std::cout << std::endl;

    delete animal;
    delete dog;
    delete cat;

    std::cout << std::endl;
    std::cout << "WrongAnimal tests" << std::endl;
    const WrongAnimal* wrong_animal = new WrongAnimal();
    const WrongAnimal* wrong_cat = new WrongCat();

    std::cout << std::endl;
    wrong_animal->makeSound();
    wrong_cat->makeSound();

    std::cout << std::endl;
    delete wrong_animal;
    delete wrong_cat;

    return 0;
}
