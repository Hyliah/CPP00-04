/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:03:06 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/10 22:18:26 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main() {
    std::cout << "=== Default DiamondTrap ===" << std::endl;
    DiamondTrap d1;

    std::cout << "\n=== Named DiamondTrap ===" << std::endl;
    DiamondTrap d2("Eddie");

    std::cout << "\n=== Copy DiamondTrap ===" << std::endl;
    DiamondTrap d3(d2);

    std::cout << "\n=== Assignment DiamondTrap ===" << std::endl;
    DiamondTrap d4;
    d4 = d2;

    std::cout << "\n=== whoAmI test ===" << std::endl;
    d2.whoAmI();

    std::cout << "\n=== End of scope ===" << std::endl;
    return 0;
}