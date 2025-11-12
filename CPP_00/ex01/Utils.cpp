/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 00:24:25 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/10 20:45:30 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"
#include <iostream>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>

static void    ask_set_contact(std::string message, std::string &buffer, Contact &contact, void (Contact::*setter)(std::string), bool is_phone);
static std::string	adjust_format(std::string str);

void	add_command(PhoneBook &book){
	std::string buffer;
	Contact c;
	
	ask_set_contact("Enter First Name : ", buffer, c, (&Contact::set_first_name), false);
	ask_set_contact("Enter Last Name : ", buffer, c, (&Contact::set_last_name), false);
	ask_set_contact("Enter Nickname : ", buffer, c, (&Contact::set_nickname), false);
	ask_set_contact("Enter Phone Number : ", buffer, c, (&Contact::set_phone_number), true);
	ask_set_contact("Enter Darkest Secret : ", buffer, c, (&Contact::set_darkest_secret), false);
	book.add_contact(c);
}

// system avec getline a checker
static void    ask_set_contact(std::string message, std::string &buffer, Contact &contact, void (Contact::*setter)(std::string), bool is_phone)
{
	std::cout << message;
	if (get_line(buffer))
		return ;
	while (verify_entry(buffer, is_phone) == false){
		std::cout << message;
		if (get_line(buffer))
			return ;
	}
	(contact.*setter)(buffer);
}
void	search_command(PhoneBook &book){
	int	count = book.get_count();

	for (int i = 0; i < count ; i++)
	{
		Contact &c = book.get_contact(i);
		std::cout << std::setw(10) << i << " | ";
		std::cout << std::setw(10) << adjust_format(c.get_first_name()) << " | ";
		std::cout << std::setw(10) << adjust_format(c.get_last_name()) << " | ";
		std::cout << std::setw(10) << adjust_format(c.get_nickname()) << std::endl;
	}
}

static std::string	adjust_format(std::string str)
{

	// for (size_t i = 0; i < str.length(); ++i){
	// 	if (std::isspace(static_cast<unsigned char>(str[i])))
	// 			alphanum++;
	// }


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
	
	if (!is_phone_number){
		int	alphanum = 0;
		for (size_t i = 0; i < str.length(); ++i){
			if (std::isalnum(static_cast<unsigned char>(str[i])))
				alphanum++;
		}
		if (alphanum == 0){
			std::cout << "Invalid entry : please enter at least one alpha numeric character" << std::endl;
			return false;
		}
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

int	get_line(std::string &buffer){
	if (!std::getline(std::cin, buffer))
	{
		std::cout << "Error: input failed." << std::endl;
		return 1;
	}
	return 0;
}
