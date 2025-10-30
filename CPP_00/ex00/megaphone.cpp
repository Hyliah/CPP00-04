/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:09:54 by hlichten          #+#    #+#             */
/*   Updated: 2025/10/30 19:15:18 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

int	main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else{
		std::string buffer;
		for (int i = 1; i < ac; i++){
			buffer += av[i];
			if (i < ac - 1)
				buffer += " ";
		}
		for (size_t i = 0; i < buffer.length(); i++)
			buffer[i] = std::toupper(buffer[i]);
		std::cout << buffer << std::endl;
	}
	return 0;
}


/*
Just to make sure that everybody is awake, write a program that produces the following output:

$>./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
$>./megaphone Damnit ' ! ' "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
$>./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
$>

*/