/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 00:24:25 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/06 01:05:08 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"
#include <iostream>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>

static void    ask_set_contact(std::string message, std::string &buffer, Contact &contact, void (Contact::*setter)(std::string), bool is_phone);
static std::string	adjust_size(std::string str);

void	add_command(PhoneBook &book, int index){
	std::string buffer;
	Contact &c = book.get_contact(index);
	
	ask_set_contact("Enter First Name : ", buffer, c, (&Contact::set_first_name), false);
	ask_set_contact("Enter Last Name : ", buffer, c, (&Contact::set_first_name), false);
	ask_set_contact("Enter Nickname : ", buffer, c, (&Contact::set_first_name), false);
	ask_set_contact("Enter Phone Number : ", buffer, c, (&Contact::set_first_name), true);
	ask_set_contact("Enter Darkest Secret : ", buffer, c, (&Contact::set_first_name), false);
}

static void    ask_set_contact(std::string message, std::string &buffer, Contact &contact, void (Contact::*setter)(std::string), bool is_phone)
{
	std::cout << message;
	get_line(buffer);
	while (verify_entry(buffer, is_phone) == false){
		std::cout << message;
		get_line(buffer);
	}
	(contact.*setter)(buffer);
}
void	search_command(PhoneBook &book, int index){
	Contact &c = book.get_contact(index);

	std::cout << std::setw(10) << index << " | ";
	std::cout << std::setw(10) << adjust_size(c.get_first_name()) << " | ";
	std::cout << std::setw(10) << adjust_size(c.get_last_name()) << " | ";
	std::cout << std::setw(10) << adjust_size(c.get_nickname()) << std::endl;
}

static std::string	adjust_size(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0,9) + ".");
	return str;
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

void	get_line(std::string &buffer){
	if (!std::getline(std::cin, buffer))
	{
		std::cout << "Error: input failed." << std::endl;
		return;
	}
}
