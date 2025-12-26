/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:09:54 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/26 14:16:12 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

static bool is_in_ascii(char *str);

int	main(int ac, char **av)
{
	if (ac < 2){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	if (!is_in_ascii(av[1])){
		std::cout << "Megaphone understand only ascii printable entries." << std::endl;
		return (1);
	}
	else {
		std::string buffer;
		for (int i = 1; i < ac; i++){
			buffer += av[i];
		}
		for (size_t i = 0; i < buffer.length(); i++)
			buffer[i] = std::toupper(buffer[i]);
		std::cout << buffer << std::endl;
	}
	return (0);
}

static bool is_in_ascii(char *str){
	for (int i = 0; str[i] != '\0'; i++){
		if (str[i] < 32 || str[i] > 127)
			return false;
	}
	return true;
}
