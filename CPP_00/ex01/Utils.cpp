/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 00:24:25 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/19 17:15:22 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"
#include <iostream>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>

int	exit_command(void){
	std::cout << "Thank you for using this awsome PhoneBook, see you next time !" << std::endl;
	return (0);
}

int	get_line(std::string &buffer){
	if (!std::getline(std::cin, buffer)){
		std::cout << "Input failed" << std::endl;
		return 1;
	}
	return 0;
}
