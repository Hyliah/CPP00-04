/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:03:06 by hlichten          #+#    #+#             */
/*   Updated: 2026/01/05 15:50:48 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap steve("Steve");

	steve.beRepaired(5);

	std::cout << "\n=== Steve tries to attack with no attack Damage ===" << std::endl;

	steve.attack("a Demogorgon shadow");
	steve.attack("a creepy noise");
	steve.attack("floating dust");

	std::cout << "\n=== Steve takes damage from the environment ===" << std::endl;
	steve.takeDamage(3);
	steve.takeDamage(4);

	std::cout << "\n=== Steve tries to fix himself ===" << std::endl;
	steve.beRepaired(15);

	std::cout << "\n=== Steve wastes all his energy ===" << std::endl;
	for (int i = 0; i < 10; i++) {
		steve.attack("the darkness");
	}

	std::cout << "\n=== End of battle ===" << std::endl;
	return 0;
}
