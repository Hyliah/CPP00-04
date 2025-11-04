/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 00:24:25 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/05 00:29:59 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

void	add_command(PhoneBook &book, int index){
	std::cout << "'ADD' baby" << std::endl;
	std::string buffer;
	
	std::cout << "Enter First Name : ";
	// verification qu il y a pas eu de soucis avec l entrée 

	if (verify_entry(buffer, false))
		book.get_contact(index).set_first_name(buffer);
}



void	search_command(void){
	std::cout << "'SEARCH' baby" << std::endl;
}



int		exit_command(void){
	std::cout << "Thank you for using this awsome PhoneBook, see you next time !" << std::endl;
	return (0);
}



bool verify_entry(const std::string& str, bool is_phone_number)
{
    if (str.empty()) {
        std::cout << "Invalid entry: please enter something." << std::endl;
        return false;
    }

    if (is_phone_number) {
        for (size_t i = 0; i < str.length(); ++i) {
            if (!std::isdigit(static_cast<unsigned char>(str[i]))) {
                std::cout << "Invalid phone number: please use digits only." << std::endl;
                return false;
            }
        }
    }

    return true;
}

std::string	get_line(std::string &buffer){
	if (!std::getline(std::cin, buffer))
    {
        std::cout << "Error: input failed." << std::endl;
        return "";
    }
}