/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 21:42:05 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/25 20:45:56 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;
	if (ac != 2)
		return (std::cout << "Harl is disapointed, I mean just put one parameter" << std::endl, 1);
	harl.complain(av[1]);
}
