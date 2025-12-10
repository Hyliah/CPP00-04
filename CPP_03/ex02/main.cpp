/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:03:06 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/10 20:42:53 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main() {
    std::cout << "=== ClapTrap vs ScavTrap vs FragTrap ===" << std::endl;

    ClapTrap steve("Steve");
    ScavTrap billy("Billy");
    FragTrap eddie("Eddie");

    std::cout << "\n--- Basic ClapTrap test ---" << std::endl;
    steve.attack("a training target");
    steve.takeDamage(3);
    steve.beRepaired(2);

    std::cout << "\n--- ScavTrap test ---" << std::endl;
    billy.attack("a metal door");
    billy.guardGate();

    std::cout << "\n--- FragTrap test ---" << std::endl;
    eddie.attack("a Demogorgon shadow");
    eddie.highFivesGuys();

    std::cout << "\n--- Energy showcase ---" << std::endl;
    for (int i = 0; i < 12; i++)
        steve.attack("the void");

    for (int i = 0; i < 30; i++)
        billy.attack("the void");

    for (int i = 0; i < 50; i++)
        eddie.attack("the void");

    std::cout << "\n=== End of comparison ===" << std::endl;
    return 0;
}