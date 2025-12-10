/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:03:06 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/10 01:44:50 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	std::cout << "=== Stranger Things Training: Steve vs The Upside Down ===" << std::endl;

	ClapTrap steve("Steve");
	ScavTrap billy("Billy");

	std::cout << "\n--- Steve (ClapTrap) warm-up ---" << std::endl;
	steve.attack("a flickering light");
	steve.takeDamage(4);
	steve.beRepaired(2);

	std::cout << "\n--- Billy (ScavTrap) shows his power ---" << std::endl;
	billy.attack("a broken door");
	billy.takeDamage(10);
	billy.beRepaired(5);

	std::cout << "\n--- Billy activates Gate Keeper mode ---" << std::endl;
	billy.guardGate();

	std::cout << "\n--- Energy stress test ---" << std::endl;
	for (int i = 0; i < 13; i++) {
		steve.attack("the darkness");
	}

	std::cout << "\n--- Billy doesn’t even flinch ---" << std::endl;
	for (int i = 0; i < 49; i++) {
		billy.attack("the void");
	}

	std::cout << "\n=== Training session ended ===" << std::endl;
	return 0;
}
